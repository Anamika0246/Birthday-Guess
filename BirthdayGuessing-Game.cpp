#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int cards[5][31]={0};
    for(int num=1;num<=31;num++){
        int i=0;
        int orgnum=num;
       while(orgnum>0){
        if(orgnum&1){
            cards[i][num-1]=num;
        }
        orgnum=orgnum>>1;
        i++;
    } 
    }
    for (int i = 0; i < 5; i++) {
        cout << "Card " << i + 1 << ": ";
        for (int j = 0; j < 31; j++) {
            if (cards[i][j]!=0) {
                cout << cards[i][j] << " ";
            }
        }
        cout << endl;
    }

    int date,birthday=0;
    for(int i=0;i<5;i++){
    cout<<"Is your birthday date in card "<<i+1<<"?"<<endl;
    cout<<"If yes, enter 1,otherwise 0."<<endl;
    cin>>date;
    if(date){
    birthday = birthday | (1 << i);
    }

    }
    cout<<"Your Birthday is on : "<<birthday<<" !!";
 return 0;
}