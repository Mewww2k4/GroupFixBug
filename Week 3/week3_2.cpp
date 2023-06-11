/* 
2. Create a class called Time that has data members to represent hours, minutes and seconds. 
Provide the following member functions:-
1. To assign initial values to the Time object.
2. To display a Time object in the form of hh:mm:ss {0 to 24 hours}
3. To add 2 Time objects (the return value should be a Time object)
4. To subtract 2 Time objects (the return value should be a Time object)
5. To compare 2 time objects and to determine if they are equal or if the first is greater or 
smaller than the second one.
2. Tạo một lớp có tên là Thời gian có các thành viên dữ liệu để biểu thị giờ, phút và giây.
Cung cấp các hàm thành viên sau: -
1. Gán giá trị ban đầu cho đối tượng Time.
2. Để hiển thị đối tượng Thời gian ở dạng hh:mm:ss {0 đến 24 giờ}
3. Để thêm 2 đối tượng Thời gian (giá trị trả về phải là đối tượng Thời gian)
4. Để trừ 2 đối tượng Thời gian (giá trị trả về phải là đối tượng Thời gian)*/
#include<bits/stdc++.h>
using namespace std;
class Time1{
  private:
         int hour;
         int min;
         int second;
  public: 
         Time1(int h=0, int m=0, int s=0)
         {
             hour = h;
             min = m;
             second = s;
         }
         Time1(const Time1 &cp)
         {
              hour = cp.hour;
              min = cp.min;
              second = cp.second;
         }
         void Input()
         {
          cout <<"Hour : "; cin >> hour;
          cout <<"Minute : "; cin >> min;
          cout <<"Second : "; cin >> second;
         }
         void Output()
         {
          cout << hour <<"h:"<<min <<"m:"<< second <<"s."<<endl;
         }
         friend istream &operator >> (istream &is, Time1 &in)
         {
          cout <<"Hour : "; is >> in.hour;
          cout <<"Minute : "; is >> in.min;
          cout <<"Second : "; is >> in.second;
          return is;
         }
          friend ostream &operator << (ostream &os, Time1 &ou)
          {
            os << ou.hour << "h:" << ou.min << "m:" << ou.second <<"s."<<endl ;
            return os;
          }
          Time1 operator+(Time1 b)
          {
            Time1 t;
            t.hour = hour + b.hour;
            t.min = min + b.min;
            t.second = second + b.second;
            if(t.hour >= 24 )
            {
                 t.hour -= 24;
            }
            if(t.min >= 60)
            {
                 t.hour += 1;
                 t.min -= 60;
            }
            if(t.second >= 60)
            {
              t.min += 1;
              t.second -= 60;
            }
            return t;
          }
          Time1 operator-(Time1 b)
          {
            Time1 t;
            t.second = second - b.second;
            t.min = min - b.min;
            t.hour = hour - b.hour;
            if(t.second < 0)
            {
              t.min -= 1;
              t.second += 60;
            }
             if(t.min < 0 )
            {
                 t.hour -= 1;
                 t.min += 60;
            }
             if(t.hour < 0  )
            {
                 t.hour += 24;
            }
            return t;
          }
          int operator==(Time1 t)
          {
          if (hour > t.hour)
              return 1;
          else if (hour < t.hour)
             return -1;
          else // hour == t.hour
              {
                if (min > t.min)
                      return 1;
                  else if (min < t.min)
                    return -1;
                   else // min == t.min
                     {
                      if (second > t.second)
                      return 1;
                         else if (second < t.second)
                      return -1;
                    else // second == t.second
                return 0;
        }
    }
}

};
int main ()
{
  Time1 a,b,c;
  cout <<"-----------------------------------"<<endl;
  a.Input();
  cout <<"1.The first time."<<endl;
  a.Output();
  cout <<"-----------------------------------"<<endl;
  cin >> b;
  cout <<"2.The second time."<<endl;
  cout << b;
  c = a+b;
  cout <<"-----------------------------------"<<endl;
  cout <<"3.Add 2 Time"<<endl;
  c.Output();
  c=a-b;
  cout <<"-----------------------------------"<<endl;
  cout<<"4.Sub 2 Time."<<endl;
  cout << c;
  cout <<"-----------------------------------"<<endl;
  int result = a == b;
    
    if(result == 1)
        cout << "Time a > Time b" << endl;
    else if(result == -1)
        cout << "Time a < Time b" << endl;
    else
        cout << "Time a = Time b" << endl;
        
  return 0;
}
