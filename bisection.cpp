class Solution
{
public:
    string getSmallestString(string s)
    {
        int size = s.size();
        for (int i = 0; i < size - 1; i++)
        {
            if ((((s[i] - '0') % 2 == 1) and ((s[i + 1] - '0') % 2 == 1) and (s[i] - '0' > s[i + 1] - '0')) || 
            ((s[i]-'0')%2==0 and (s[i+1]-'0')%2==0 and (s[i]-'0'>s[i+1]-'0')))
                {
                    swap(s[i], s[i + 1]);
                    break;
                }
        }
        return s;
    }
};