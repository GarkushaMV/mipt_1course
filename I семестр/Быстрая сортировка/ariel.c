struct creature
{
	int score;
	int traits[10];
};

int n;
int k;
struct craature * creatures;

void init(void)
{
	scanf("%d %d", n, k);
	creatures = (struct creatures *)malloc(n * sizeof(struct creatures));
	int i;
	int j;
	for (i = 0; i<n; i++)
	{
		creatures[i].score = 0;
		for (j = 0; j<k; j++)
		creatures[i].traits[j] = 0;
	}
	int y;
	int f;
	for (i = 0; i<n; i++)
	{
		scanf("%d %d", creatures[i].score, y);
		for (j = 0; j<y; j++)
		{
			scanf("%d", f);
			creatures[i].traits[f] = 1;
		}
	}
}


int main(void)
{

}
