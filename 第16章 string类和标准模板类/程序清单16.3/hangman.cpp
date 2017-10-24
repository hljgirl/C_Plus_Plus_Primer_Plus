// 程序清单16.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

const int NUM = 26;
const string wordlist[NUM] =
{
	"apiary", "beetle", "cereal", "danger",
	"ensign", "florid", "garage", "health",
	"insult", "jackal", "keeper", "loaner",
	"manage", "nonce", "onset", "plaid",
	"quilt", "remote", "stolid", "train",
	"useful", "valid", "whence", "xenon",
	"yearn", "zippy"
};

int main()
{

	srand(time(0));
		
	char play;
	cout << "Will you play a word game?<y/n>";
	cin >> play;
	play = tolower(play);

	while (play == 'y')
	{
		string target = wordlist[rand() % NUM];
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "Guess my secret word. It has " << length
			<< " letters, and you guess\n"
			<< "one letter at a time. You get " << guesses
			<< " wrong guesses.\n";

		cout << "Your word: " << attempt << endl;

		while (guesses > 0 && attempt != target)
		{

			char letter;
			cout << "Guess a letter: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos ||
				attempt.find(letter) != string::npos)
			{
				cout << "You already guessed that. Try again.\n";
				continue;
			}

			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "oh, bad guess!\n";
				--guesses;
				badchars += letter;
			}
			else
			{
				cout << "Good guess!\n";
				attempt[loc] = letter;

				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
	
			cout << "Your word: " << attempt << endl;

			if (attempt != target)
			{
				if (badchars.length() > 0)
				{
					cout << "Bad choices: " << badchars << endl;
				}
				cout << guesses << " bad guessed left\n";
			}
		}

		if (guesses > 0)
		{
			cout << "That's right!\n";
		}
		else
		{
			cout << "Sorry, the word is " << target << ".\n";			
		}


		cout << "Will you play another?<y/n> ";
		cin >> play;
		play = tolower(play);
	}


	cout << "Bye!\n";
	system("pause");
    return 0;
}

