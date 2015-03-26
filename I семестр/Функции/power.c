int power(int a, unsigned int n)
{
	if(n == 0)
		return 1;
	if ((n%2) == 0)
		return power(a, n/2)*power(a, n/2);
	else
		return a*power(a, n-1);
}
