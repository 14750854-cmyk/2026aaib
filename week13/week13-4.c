#include <iostream>
using namespace std;

int prime(int n)
{
    for (int i=2; i<n; i++) {
        if (n%i==0) return 0; //failed
    }
    return 1; // success!
}

int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* よ C++  main ㄧ计 单基 よ C  main ㄧ计
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
