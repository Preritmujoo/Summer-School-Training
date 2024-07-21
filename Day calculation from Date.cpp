#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int day, month, year;
    cin>>day>>month>>year;
    if(month==1 || month==2){
        month+=10;
        year-=  1;
    }
    else
        month-=2;
   int D = year % 100;
   int C = year / 100;
   int F=day+ ((13*month-1)/5) +D+ (D/4) +(C/4)-2*C;
   int rem = abs(F%7);
   switch(rem){
       case 0:
           cout<<"Sunday";
           break;
       case 1:
           cout<<"Monday";
           break;  
       case 2:
           cout<<"Tuesday";
           break;
       case 3:
           cout<<"Wednesday";
           break;
       case 4:
           cout<<"Thursday";
           break;
       case 5:
           cout<<"Friday";
           break;
       case 6:
           cout<<"Saturday";
           break; 
           
   }
   
    return 0;
}
