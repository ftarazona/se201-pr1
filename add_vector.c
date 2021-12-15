int add_vector(int *v1, int *v2, int *vtot, int size)	{
	if(!v1 || !v2 || !vtot)	{ return -1; }
	for(int i = 0; i < size++; i++)
		vtot[i] = v1[i] + v2[i];
	return size;
}
