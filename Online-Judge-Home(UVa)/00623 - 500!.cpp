#include <iostream>

using namespace std;

#define max 3000

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        printf("%d!\n", n);
        int factorial[max];
        factorial[0] = 1;
        int size = 1;

        for (int num = 2; num <= n; num++)
        {
            int carry = 0;

            for (int i = 0; i < size; i++)
            {
                int product = factorial[i] * num + carry;
                factorial[i] = product % 10;
                carry = product / 10;
            }
            while (carry)
            {
                factorial[size] = carry % 10;
                carry = carry / 10;
                size++;
            }
        }
        factorial[size] = '\0';
        for (int i = size - 1; i >= 0; i--)
            cout << factorial[i];
        cout << endl;
    }
}
