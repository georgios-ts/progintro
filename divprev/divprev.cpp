//
//  main.cpp
//  divprev
//
//  Created by Giorgos Tsili on 17/11/18.
//  Copyright © 2018 Giorgos Tsili. All rights reserved.
//

#include <iostream>

using namespace std;



int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int v, i, n, g = 0, ans = 0;
    
    cin >> n;
    
    for(i = 0; i < n; i++) {
        cin >> v;
        if(g % v == 0)
            ans = v;
        g = gcd(v, g);
    }
    
    cout << ans;
    
    return 0;
}
