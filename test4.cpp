#include <iostream>
#include <cmath>

using namespace std;

float av(float x, float y);

int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001) << "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
}

float av(float x, float y){
    float max , min;
    if(x>y) max = x;
    else max = y;
    if(x<y) min = x;
    else min = y;
    if(x<=0 || y<=0){
        return 0;
    }
    if(max/min <= 100){
        return sqrt(x*y);
    }
    else {
        return av(x,(x+y)/2)+av(y,(x+y)/2);
    }
}
