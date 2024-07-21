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
   int R, C;
    cin >> R >> C;
    
    int matrix[20][20]; 
    
   
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    int maxOnes = 0;
    int maxRowIndex = -1;
    
    
    for (int i = 0; i < R; ++i) {
        int onesCount = 0;
        for (int j = 0; j < C; ++j) {
            if (matrix[i][j] == 1) {
                onesCount++;
            }
        }
        
        if (onesCount > maxOnes) {
            maxOnes = onesCount;
            maxRowIndex = i + 1; 
        }
    }
    
    cout << maxRowIndex << endl;
    return 0;
}
