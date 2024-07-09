#include<stdio.h>
int maze( int cr , int cc , int er , int ec){
    int rightways = 0;
    int downways = 0;
    if(cr == er && cc == ec) return 1;

    if(cc==ec){
        return downways += maze(cr+1 ,cc, er, ec);
    }
    if(cr==er){
        return rightways += maze(cr ,cc+1, er, ec);
    }
    if(cr<er && cc<ec){
        rightways = maze(cr ,cc+1, er, ec);
        downways = maze(cr+1 , cc,  er, ec);
    }

    int totalways = rightways + downways ;
    return totalways;
}
int main(){
    int nr = 3;
    int nc = 3;
    printf("%d\n", maze(1,1,nr,nc)); 
    return 0;
}