#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);
    int siz=T.size();
    string alp[27];
    for (int i = 0; i < H+1; i++) {
        string ROW;
        getline(cin, ROW);
        alp[i]=ROW;
    }
    for (int j = 0; j < H;j++) {
        for(int i=0;i<siz;i++){
            for(int r=0;r<L;r++){
                if(T[i]>64&&T[i]<91){
                    cout << alp[j][L*(T[i]-65)+r];
                }
                else{
                    if(T[i]>96&&T[i]<123){
                        cout << alp[j][L*(T[i]-97)+r];
                    }
                    else{
                        cout<<alp[j][L*(26)+r];
                    }
                }
            }
        }
            cout<<endl;
    }

}
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    
