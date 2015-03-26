int cmp_Point(const void * p1, const void * p2)
{
	struct Point a = *(struct Point *)p1;
	struct Point b = *(struct Point *)p2;

	return a.x*a.x+a.y*a.y-b.x*b.x-b.y*b.y;
}
