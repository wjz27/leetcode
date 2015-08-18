
int square_sum( int n ) {
	int sum = 0;
	while( n ) {
		sum += (n%10)*(n%10);
		n = n/10;
	}
	return sum;
}

bool isHappy(int n) {
	if( square_sum(n) == 1 )
		return true;
	else if( square_sum(n) == 4 )
		return false;
	else
		return isHappy( square_sum(n) );
}
