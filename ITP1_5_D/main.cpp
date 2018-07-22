#include <iostream>
void call(int);
void call2(int);

using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n)) {
        call(n);
        call2(n);
    }
    return 0;
}

void call2(int n)
{
    int i, x;
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            printf(" %d", i);
        } else {
            x = i;
            do {
                if (x % 10 == 3) {
                    printf(" %d", i);
                    break;
                }
            } while (x /= 10);
        }
    }
    putchar('\n');
}

void call(int n){
  int i = 1;
 CHECK_NUM:
  int x = i;
  if ( x % 3 == 0 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
 INCLUDE3:
  if ( x % 10 == 3 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
  x /= 10;
  if ( x ) goto INCLUDE3;
 END_CHECK_NUM:
  if ( ++i <= n ) goto CHECK_NUM;

  cout << endl;
}