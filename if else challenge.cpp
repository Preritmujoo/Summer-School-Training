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
     int n;
    cin>>n;
    if(n%2!=0){
        cout<<"Weird";
    }
    else if (n%2==0 && n>=2 && n<=5){
        cout<<"Not Weird";
    }
    else if(n%2==0 && n<=20){
                cout<<"Weird";
    }
    else{
                cout<<"Not Weird";

    }
    return 0;
}
