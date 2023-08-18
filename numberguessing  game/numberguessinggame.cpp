#include<bits/stdc++.h>
using namespace std;
int main(){
    int random=rand()%10;
cout<<"\t\t\t\t\t\t\t*** |||Number Guessing Game||| ***\n\n";
      int n;
        cout<<"\nEnter number-> ";
        cin>>n;
    while(1){

        if(random>n)
        { cout<<"\nWrong guess,Enter a larger number-> ";
          cin>>n;
    }
        else if(random==n)
        { cout<<"\nYou Entered Correct Number \n\n\n";
        break;
    }
         else
        { cout<<"\nWrong guess,Enter a smaller number-> ";
          cin>>n;

    }
    }
    return 0;
}
