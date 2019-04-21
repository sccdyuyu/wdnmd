#include <iostream>
#include <cstdlib>

using namespace std;
int guessNumber();
int guessNumber()
{
    return rand()%1000;
}


int main()
{
    int a=0;
    int b=0;
    b=guessNumber();
    cout << "I have a number between 1 and 1000\nCan you guess my number?\nplease type your guess:" <<endl;
    for(int i=0;i>-1;i++)
    {
        cin>>a;
        if(a==b)
        {
            cout<<"Excellent!You guessed the number!"<<endl;
            if(i<10)
                cout<<"Ahah!You know the secret!";
                else if(i>=10)
                  cout<<"You should be able to do better!";
            break;
        }
        else if(a>b)
            cout<<"Too high.Try again.";
        else if(a<b)
            cout<<"Too low.Try again.";
        cout<<endl;
    }
    return 0;
}
