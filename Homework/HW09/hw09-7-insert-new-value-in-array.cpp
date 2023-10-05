/*
    จากอาเรย์เดิม ที่มีค่าอยู่ก่อนแล้วคือ { 9, 2, 6, 1, 7 } จงเขียนโปรแกรมเพื่อรับค่าจากผู้ใช้อีก N จำนวน เพื่อนำไปต่อในอาเรย์เดิม และจัดเรียงใหม่จากน้อยไปยังมาก
    
    Test case:
        Enter new element of Array :
            4
        Input :
            3
        Input :
            4
        Input :
            2
        Input :
            5
    Output:
        Old Array: 9 2 6 1 7
        New Array: 1 2 2 3 4 4 5 6 7 9
*/
#include <stdio.h>
int main () {
    int N , hold = 0 ;
    int arr[ 100 ] ;
    
    printf( "Enter new element of Array :\n" ) ;
    scanf( "%d", &N ) ;

    for ( int i = 0 ; i < N ; i++) {
        printf( "Input :\n" ) ;
        scanf( "%d",&arr[ i ] ) ;
    }
    
    printf ("Array:" ) ;
    for (int i = 0; i < N ; i++ ) {
        printf ( " %d",arr[ i ] ) ;
    }
    for (int i = 0 ; i < N ; i++) {
        for ( int  j = i + 1 ; j < N ; j++) {
            if ( arr[ i ] < arr [ j ] ) {
                hold = arr[ i ] ;
                arr[ i ] = arr[ j ] ;
                arr[ j ] = hold ;
            } 
        }
    }
    printf ( "\nThe large 3rd element = %d",arr[ 2 ] ) ;
    
    return 0 ;
}