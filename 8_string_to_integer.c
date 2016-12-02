
#include "stdlib.h"
#include "stdio.h"

int myAtoi(char* str) {
	int *p = str;
	int res = 0;
	int sign=1;
	int start=0;
	int i=0;
	while( p[i]!='\0' ) {
		printf( "%d\n", '1' );
		printf( "%c, %d\n", *p, p[i]-'0' );
		if( *p==' ' && !start) {

		} else if ( *p=='-' && !start ) {
			sign = -1;
			start = 1;
		} else if ( *p-'0'>=0 && *p-'0'<=9 ) {
			printf( "0 <= p <= 9, %c\n", *p );
			res = res*10 + (*p) - '0';
		} else if ( *p>='0' && *p<='9' && !start ) {
			sign = 1;
			start = 1;
			res = res*10 + (*p)-'0';
		} else {
			printf( "%c\n", *p );
			break;
		}
		p++;
	}
	res = res * sign;

	return res;
}

int main() {
	char str[] = "1234";

	myAtoi( &str );

	return 0;
}

