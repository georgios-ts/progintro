//
//  main.cpp
//  intvsum+
//
//  Created by Giorgos Tsili on 16/11/18.
//  Copyright © 2018 Giorgos Tsili. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i, n, s = 0;
    
    cin >> n;
    
    int a[n], b[n];
    
    for(i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
        b[i] = s + a[i];
    }
    

    sort(b, b + n - 1);
    
    for(i = n - 1; i > -1; i--) {
        if(binary_search(b, b + n - 1, s - 2*a[i]))
            break;
        s = s - a[i];
    }
    
    cout << i+1 << "\n";
    
    return 0;
}
