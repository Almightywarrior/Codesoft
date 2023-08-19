#include<bits/stdc++.h>

using namespace std;

int main(){
    int random=rand()%10;
cout<<"\t\t\t\t\t\t\t*** |||Number Guessing Game||| ***\n\n";
      int n;
      cout<<"Enter any number between 0-10";
        cout<<"\nEnter number-> ";
        cin>>n;
    while(1){

        if(random>n)
        { cout<<"\nWrong guess!!,\nEnter a larger number-> ";
          cin>>n;
    }
        else if(random==n)
        { cout<<"\nYeahhhh!!!! You Entered Correct Number \n\n\n";
        break;
    }
         else
        { cout<<"\nWrong guess!!,\nEnter a smaller number-> ";
          cin>>n;

    }
    }
    return 0;
}
