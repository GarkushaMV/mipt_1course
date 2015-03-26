char* whatisyourname() {
	char* res = malloc(sizeof(struct anomaly));
	int i = 0;
	for (; i < 256; i++)
		res[i] = '*';
	res[256] = 0;
	return res;
}
