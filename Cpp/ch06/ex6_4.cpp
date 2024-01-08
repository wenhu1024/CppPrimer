#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int func(int n)
{
    int ans = 1;
    while (n > 1)
    {
        ans *= n--;
    }
    return ans;
}
int main()
{
    int n, res;
    cout << "Enter a num,please.\n";
    while (cin >> n)
    {
        try
        {
            if (n <= 0)
            {
                throw runtime_error("Date must > 0.");
            }
            res = func(n);
            cout << "The Result: " << res << endl;
        }
        catch (runtime_error err)
        {
            cout << err.what()
                 << "\nTry Again? Enter y or n.\n";
            char c;
            cin >> c;
            if (!cin || c == 'n')
            {
                break;
            }
        }
    }
    return 0;
}