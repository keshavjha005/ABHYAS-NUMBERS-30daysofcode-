#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    long long n, k, x,y;
    cin>>n>>k;
    x=n/k;
    x=x*x*x;
    if(k%2==0){
    y=(n+(k/2))/k;
    cout<<(x+(y*y*y));

}else{
    cout<<x;
}
    return 0;
}