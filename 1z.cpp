/*Разработайте класс Date, хранящий день, месяц, год. Определите и реализуйте
функции-члены этого класса ():
Date NextDay() – определить дату следующего дня,
Date PreviousDay() – определить дату предыдущего дня,
bool IsLeap() – является ли год этой даты високосным,
short WeekNumber() – номер недели в году для текущей даты,
int DaysTillYourBithday(Date bithdaydate) – сколько дней до вашего дня*/
#include <iostream>
#include <string>
using namespace std;
class Date{
    private:
        unsigned short int day;
        unsigned short int month;
        unsigned int year;
    public:
        Date();
        Date(int , int , int ); 
        ~Date(){
            cout << "Destroy day" << endl;
        }
        void Show(){
            cout << day << "/" << month << "/" << year << endl;
        }
        Date NextDay();
};
Date::Date(){
    day = 0;
    month = 0;
    year = 0; 
}
Date::Date(int fd, int fm, int fy){
           day = fd;
           month = fm;
           year = fy; 
        }
Date NextDay(){
    Day next_day;
            if (this->month==1 && this->day == 31){
                next_day.day = 1;
                next_day. month = 2;
                next_day.year = this->year;
            }
            else
            //if()
            else {
                next_day.day = this->day+1;
                next_day. month = this->month;
                next_day.year = this->year;    
            }
}       
int main(){
    Date day(1,1,1990);
    day.Show();
}