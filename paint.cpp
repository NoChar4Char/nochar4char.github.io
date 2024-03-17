#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int w, o, b, cow, cbo, cbw; // white buckets, orange buckets, brown buckets; orange-white, brown-orange, brown-white
        int min_price = 2147483647;
        int t = 0;
        
        //white->orange --> brown

        t = b*(w*cow+o)
        min_price = min(min_price, t);
        t = 0;

        //orange->white --> brown

        t=b*(o*cow+w)
        min_price = min(min_price, t);
        t = 0;

        //white->brown --> orange
        
        t = o*(b*cbw+w)
        min_price = min(min_price, t);
        t = 0;

        //brown->white --> orange

        t=o*(w*cbw+b);
        min_price = min(min_price, t);
        t = 0;

        //orange->white --> brown

        t=b*()
        min_price = min(min_price, t);
        t = 0;

        //white->orange --> brown

        min_price = min(min_price, t);


        
    }
}