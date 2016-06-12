#include <bits/stdc++.h>
using namespace std;

typedef long long BigInt;

BigInt A = 0x7fffffffffffff01;
BigInt B = 0x7fffffffffffff02;
BigInt M = 0x7fffffffffffff03;
BigInt addmod( BigInt x, BigInt y, BigInt m )
{
  x %= m;
  y %= m;
  BigInt sum = x-m+y;
  return sum < 0 ? sum + m : sum;
}

BigInt timesmod( BigInt x, BigInt y, BigInt m )
{
  x %= m;
  y %= m;
  BigInt a = x < y ? x : y;
  BigInt b = x < y ? y : x;
  BigInt product = 0;
  for (; a != 0; a >>= 1, b = addmod(b,b,m) )
    if (a&1) product = addmod(product,b,m);
  return product;
}

int main()
{
  BigInt a,b,m;
  int t;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%lld %lld %lld",&a,&b,&m);
      cout <<timesmod(a,b,m) << endl;
  }
return 0;
}
