#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Date
{
public:
 Date(unsigned int year, unsigned int month,unsigned int day);
 Date(string yearMonthDay); // yearMonthDay must be in format "yyyy/mm/dd"
 void setYear(unsigned int year) ;
 void setMonth(unsigned int month) ;
 void setDay(unsigned int day) ;
 void setDate(unsigned int year, unsigned int month, unsigned int day) ;
 unsigned int getYear() const{return year;};
 unsigned int getMonth() const{return month;};
 unsigned int getDay() const{return day;};
 string getDate() const{return s_ymd;}; // returns the date in format "yyyy/mm/dd"
 void show() const{std::cout << year << '/' << month << '/' << day << std::endl;}; // shows the date on the screen in format "yyyy/mm/dd"
 bool isValid(){return valid(year, month, day);}
private:
 unsigned int year;
 unsigned int month;
 unsigned int day;
 string s_y = to_string(year);
 string s_m = to_string(month);
 string s_d = to_string(day);
 string s_ymd = s_y + s_m + s_d;
 bool valid(unsigned int year, unsigned int month, unsigned int day);
};

bool Date::valid(unsigned int year, unsigned int month, unsigned int day){
    if (month == 2){
        if (year%4==0 && year%100==0 && year%400==0){
            if (day <= 28){
                return true;
            }else{
                return false;
            }
        }else{
            if (day <= 27){
                return true;
            }else{
                return false;
            }  
        }
    } else {
        vector<int> v31 = {1, 3, 5, 7, 8, 10, 12};
    
        if (find(v31.begin(), v31.end(), month) != v31.end()){
            if (day <= 31){
                return true;
            }else{
                return false;
            }
        }else{
            if (day <= 30){
                return true;
            }else{
                return false;
            }
        }
    }
}

void main(){
    unsigned int year, month, day;
    string ymd;

    cout << "y/m/d? " << endl;
    cin >> ymd;
    cout << "y m d" << endl;
    cin >> year >> month >> day;
    Date date1(year, month, day);    
    Date date2(ymd);


    cout << date1.getDay () << endl;
    cout << date1.getMonth () << endl;
    cout << date1.getYear () << endl;
    cout << date2.getDate() << endl;

    cout << "y m d" << endl;
    cin >> year >> month >> day;

    date2.setDate(year, month, day);
    cout << date2.getDate() << endl;
}