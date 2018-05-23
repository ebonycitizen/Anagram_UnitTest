#include "stdafx.h"
#include "Header.h"

bool Anagram::CheckWord(char word1[], char word2[])
{
	unsigned int word1Length = sizeof(word1) / sizeof(char);
	unsigned int word2Length = sizeof(word2) / sizeof(char);
	unsigned int sameWordNum = 0;

	char tmpWord1[sizeof(word1) / sizeof(char)];
	char tmpWord2[sizeof(word2) / sizeof(char)];

	for (unsigned int i = 0; i < word1Length; i++)
		tmpWord1[i] = word1[i];
	for (unsigned int i = 0; i < word1Length; i++)
		tmpWord2[i] = word2[i];

	if (word1Length != word2Length)
		return false;

	for (unsigned int i = 0; i < word1Length; i++)
	{
		for (unsigned int j = i; j < word2Length; j++)
		{
			if (tmpWord1[i] == tmpWord2[j])
			{
				tmpWord2[j] = tmpWord2[i];
				tmpWord2[i] = tmpWord1[i];
				sameWordNum++;
				break;
			}
		}
	}
	if (sameWordNum == word1Length)
		return true;
	else
		return false;
}