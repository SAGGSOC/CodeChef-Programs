void diagonalorder()
{
	for(int l=1;l<=row+col-1;l++)
	{
		int st = max(0,line-ROW);
		int count=min(line,(COL-start_col), ROW);
		for(int j=0;j<count;j++)
		 printf("%5d "matrix[min(ROW, line)-j-1][start_col+j]);
		 printf("\n");
	}
}
