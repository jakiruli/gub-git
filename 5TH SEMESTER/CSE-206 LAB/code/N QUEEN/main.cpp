// #include <iostream>
#include<bits/stdc++.h>

   using namespace std;
     int n;

     int board['n']['n']={0};

     bool NQueen(int col);
 {
    if(col==n)
        return true;

    for(int i=0;i<n;i==){
        if(isSafe(i,col)){
            board[i][col]=1;

            if(NQueen(col+1))
                return true;
            board[i][col]=0;

        }
    }
    return false;
}

 int main()
{
    //cout << "Hello world!" << endl;

    scanf("%d",&n);
    int board[n][n]= {0};

    bool a = NQueen(0);
    return 0;
}
