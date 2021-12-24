int add_vector(const int *v1, const int *v2, int *vtot, const int size)	{
	if(!v1)		{ return -1; }
	if(!v2)		{ return -1; }
	if(!vtot)	{ return -1; }
	for(int i = 0; i < size; i++)
		vtot[i] = v1[i] + v2[i];
	return size;
}
