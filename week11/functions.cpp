#include <iostream>
using namespace std;

void printStr(char *str);
int strlen(char *str)
{
    int count = 0;
    for (int i = 0; *(str + i) != '\0'; i++)
    {
        count++;
    }
    return count;
}
void strcpy(char *str, char *str1)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        *(str1 + i) = *(str + i);
    }
}
char *strcat(char *str, char *str1)
{
    int size = strlen(str) + strlen(str1);
    char *newStr = new char[size + 1];
    for (int i = 0; str[i] != '\0'; i++)
    {
        newStr[i] = str[i];
    }
    for (int i = 0; str1[i] != '\0'; i++)
    {
        newStr[i + strlen(str)] = str1[i];
    }
    newStr[size] = '\0';
    return newStr;
}
void strcmp(char *str1, char *str2)
{
    int sameChars = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == str2[i])
        {
            sameChars++;
        }
    }
    if (sameChars == strlen(str1) || sameChars == strlen(str2))
    {
        if (strlen(str1) < strlen(str2))
        {
            cout << "< - -1" << endl;
        }
        else if (strlen(str1) == strlen(str2))
        {
            cout << "= - 0" << endl;
        }
        else
        {
            cout << "> - 1" << endl;
        }
    }
    else
    {
        if (str1[sameChars] < str2[sameChars])
        {
            cout << "< - -1" << endl;
        }
        if (str1[sameChars] > str2[sameChars])
        {
            cout << "> - 1" << endl;
        }
    }
}
void reverse(char *str)
{
    for (int i = 0; i < strlen(str) / 2; i++)
    {
        int temp = str[i];
        str[i] = str[strlen(str) - 1 - i];
        str[strlen(str) - 1 - i] = temp;
    }
}
void replace(char *str, char symbolToBeReplaced, char symbolToReplace)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == symbolToBeReplaced)
        {
            str[i] = symbolToReplace;
        }
    }
}
int find(char *str, char symbol)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == symbol)
        {
            return i;
        }
    }
    return -1;
}
int count(char *str, char symbol)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == symbol)
        {
            count++;
        }
    }
    return count;
}
char *substr(char *str, int index1, int index2)
{
    int size = index2 - index1 + 2;
    char *subStr = new char[size];
    for (int i = 0; i < size - 1; i++)
    {
        subStr[i] = str[i + index1];
    }
    subStr[size - 1] = '\0';
    return subStr;
}
bool strstr(char *str, char *str1)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        bool isFound = false;
        for (int j = count; str1[j] != '\0' && !isFound; j++)
        {
            if (str[i] == str1[j])
            {
                count++;
                isFound = true;
            }
        }
    }
    if (count == strlen(str1))
    {
        return true;
    }
    return false;

}

int main()
{
    int length, length1;
    cout << "Length of string: ";
    cin >> length;
    char *str = new char[length + 1];
    cin.ignore();
    cin.getline(str, length + 1);
    // reverse(str);
    // printStr(str);
    cout << "Length of second string: ";
    cin >> length1;
    char *str1 = new char[length1 + 1];
    cin.ignore();
    cin.getline(str1, length1 + 1);
    // strcmp(str, str1);
    // cout << boolalpha << strstr(str, str1) << endl;
    // strcmp(str, str1);
    // char *newStr = strcat(str, str1);
    // printStr(newStr);
    // char *subStr = substr(str, 0, 4);
    // printStr(subStr);
    // strcpy(str, str1);
    // printStr(str1);
    // replace(str, 'A', '*');
    // printStr(str);
    // cout << find(str, '8');
    // cout << count(str, 's');
    delete [] str;
    delete [] str1;
    // delete [] newStr;
    // delete [] subStr;

}
void printStr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << *(str + i);
    }
}