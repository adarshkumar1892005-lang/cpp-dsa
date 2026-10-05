int getlength( char ch[] )
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void uppertolowercase(char ch[])
{
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i] >= 'A' && ch[i] <= 'Z') 
        {
            ch[i] = ch[i] - 'A' + 'a';
        }
    }
}

bool isPalindrome(char ch[], int length)
{
    int s= 0, e = length-1;
    while (s<e)
    {
        if(uppertolowercase(ch[s]) != uppertolowercase(ch[e]) return 0;
        s++;
        e--;
    }
    
}
