int lengthOfLongestSubstring(char *s)
{
    int head = 0, tail = 0, pos = 0, it = 0;
    int curLen = 0;
    int longest = 0;
    bool col = false;
    while (s[head] != '\0')
    {
        pos = 0;
        col = false;
        for (it = tail; it < head; it++)
        {
            if (s[it] == s[head])
            {
                col = true;
                break;
            }
        }
        pos = it;

        if (col)
        {
            longest = curLen > longest ? curLen : longest;
            tail = pos + 1;
        }
        head++;
        curLen = head - tail;
    }
    return longest > curLen ? longest : curLen;
}