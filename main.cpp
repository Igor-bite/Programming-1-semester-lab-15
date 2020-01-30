//
//  main.cpp
//
//  Created by Игорь Клюжев on 24.01.2020.
//  Copyright © 2020 Игорь Клюжев. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long sum = 0;
    long x = 0;
    while(cin >> x){
        sum += x;
    }
    cout << sum << endl;
    return 0;
}
