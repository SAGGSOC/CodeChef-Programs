int main()
{
    unsigned int x = 1<<15 + 1<<16;
    cout << isPalindrome(x) << endl;
    x = 1<<31 + 1;
    cout << isPalindrome(x) << endl;
    return 0;
}
bool isKthbitset(unsigned int x,unsigned int k)
{
	return (x&(1<<(k-1)))?true:false;
}
bool isPalindrome(unsigned int x)
{
    int l = 1; 
    int r = sizeof(unsigned int)*8;
    while(l<r)
    {
    	if(isKthBitSet(x,l)!=isKthbitset(x,r))
    	 return false;
	}
	return true;
}

