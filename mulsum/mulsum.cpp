//
//  main.cpp
//  mulsum
//
//  Created by Giorgos Tsili on 17/11/18.
//  Copyright © 2018 Giorgos Tsili. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i, n, m, v, x, s = 0, ans = 0;
    
    cin >> n >> m;
    
    int r[m];
    
    memset(r, -1, sizeof(r));
    r[0] = 0;
    
    for(i = 0; i < n; i++) {
        cin >> v;
        s += v;
        x = s % m;
        if(r[x] > -1)
            ans = max(ans, s - r[x]);
        else
            r[x] = s;
    }
    
    cout << ans;
    
    
    return 0;
}
