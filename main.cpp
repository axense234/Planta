#include <iostream>

using namespace std;

void parcurgeZile(unsigned long long N, unsigned long long A, unsigned long long B, unsigned long long D)
{
  unsigned short int nrZi = 1;
  unsigned long long i = 1;
  while (i <= N)
  {

    switch (nrZi)
    {
    case 1:
      D += A;
      i++;
      nrZi++;
      break;
    case 2:
      D -= B;
      i++;
      nrZi++;
      break;
    case 3:
      D += A;
      i++;
      nrZi++;
      break;
    case 4:
      D += A;
      i++;
      nrZi++;
      break;
    case 5:
      D -= B;
      i++;
      nrZi++;
      break;
    case 6:
      D -= B;
      i++;
      nrZi = 1;
      break;
    }
  }

  cout << D;
}

int main()
{
  unsigned long long N, A, B, D, i;

  cout << "D,A,B,D: " << endl;
  cin >> D >> A >> B >> N;

  if (A == B)
  {
    cout << D;
  }
  else
  {
    parcurgeZile(N, A, B, D);
  }

  return 0;
}