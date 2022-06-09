#include <iostream>
#include <string>
using namespace std;

class Time{
		private:
			int hour;
			int minute;
			int second;
		public:
			Time(int hour, int minute, int second){
				this->hour=hour;
				this->minute=minute;
				this->second=second;
			}
			void setTime(int hour, int minute, int second){
				this->hour=hour;
				this->minute=minute;
				this->second=second;
			}
			void setHour(int hour){
				this->hour=hour;
			}
			void setMinute(int minute){
				this->minute=minute;
			}
			void setSecond(int second){
				this->second=second;
			}
			int getHour(){
				return hour;
			}
			int getMinute(){
				return minute;
			}
			int getSecond(){
				return second;
			}
			void nextSecond(){
				if(hour == 23 & minute == 59 & second ==59){
					hour = 0;
					minute = 0;
					second = 0;
					return;
				}
				if(minute==59 & second==59){
					minute=0;
					second=0;
					hour+=1;
					return;
				}
				if(second==59){
					second=0;
					minute+=1;
					return;
				}
				second++;
			}
			void previousSecond(){
				if(hour==0&minute==0&second==9){
					hour=23;
					minute=59;
					second=59;
					return;
				}
				if(minute==0&second==0){
					minute=59;
					second=59;
					hour-=1;
					return;
				}
				if(second==0){
					second=59;
					minute-=1;
				}
				second--;
			}
			void display(){
				string second = to_string(this->second);
				string minute = to_string(this->minute);
				string hour = to_string(this->hour);
				if (second.length()==1){
					second = "0"+second;
				}
				if(minute.length()==1){
					minute = "0"+minute;
				}
				if(hour.length()==1){
					hour = "0"+hour;
				}
				cout<<hour<<":"<<minute<<":"<<second<<endl;
			}
};
