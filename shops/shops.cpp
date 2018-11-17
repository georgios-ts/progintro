//
//  main.cpp
//  shops
//
//  Created by Giorgos Tsili on 17/11/18.
//  Copyright © 2018 Giorgos Tsili. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n, k, i, j, ans = 0;
    
    cin >> n >> k;
    
    int a[n], g[n], gl[n], gr[n];
    
    for(i = 0; i < n; i++)
        cin >> a[i];
    
    
    // g(i): gain if shop at position i.
    g[0] = 0;
    for(i = 0; i < k; i++)
        g[0] += a[i];
    
    for(i = k; i < n; i++) {
        j = i - k;
        g[j + 1] = a[i] + g[j] - a[j];
    }
    
    
    // gl[i] : max{g(0), g(1), .. , g(i)}
    gl[0] = g[0];
    for(i = 1; i < n; i++)
        gl[i] = max(gl[i - 1], g[i]);
    
    
    // gr[i] : max{g(i), g(i+1), .. g(n-1)}
    gr[n - 1] = g[n - 1];
    for(i = n - 2; i > -1; i--)
        gr[i] = max(gr[i + 1], g[i]);
    
    
    for(i = 0; i < n - k; i++)
        ans = max(ans, gl[i] + gr[i + k]);
    
    
    cout << ans;
    
    
    return 0;
}
