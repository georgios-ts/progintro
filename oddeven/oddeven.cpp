//
//  main.cpp
//  oddeven
//
//  Created by Giorgos Tsili on 17/11/18.
//  Copyright © 2018 Giorgos Tsili. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i, n, ans = 0, x = 0;
    
    cin >> n;
    
    int a[n], v[2*n + 1];
    
    for(i = 0; i < n; i++)
        cin >> a[i];
    
    memset(v, -1, sizeof(v));
    v[n] = 0;
    
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0)
            x += 1;
        else
            x -= 1;
        
        if(v[n + x] != -1)
            ans = max(ans, i + 1 - v[n + x]);
        else
            v[n + x] = i + 1;
    }
    
    cout << ans << "\n";
    
    
    return 0;
}
