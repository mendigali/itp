#include <iostream>
#include <ctime>
using namespace std;

struct Card {
	const char* face;
	const char* suit;
	void outputCard();
};

struct DeckOfCards {
	const char* faces[13] = { "Ace", "Nine", "Ten",
		  "Jack", "Queen", "King", "Six", "Seven",
		"Eight", "Deuce", "Three", "Four", "Five" };
	const char* suits[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	int numberOfCards;
	Card* cards;
	void open(int);
	void shuffle();
	void deal();
	void close();
};

void main() {
	DeckOfCards deck;
	deck.open(24);
	deck.shuffle();
	deck.deal();
	deck.close();
}

void Card::outputCard() {
	cout << face << " of " << suit << endl;
}

void DeckOfCards::open(int n) {
	numberOfCards = n;
	cards = new Card[n];
	int k = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < n / 4; j++) {
			cards[k].face = faces[j];
			cards[k++].suit = suits[i];
		}
	}
}

void DeckOfCards::shuffle() {
	srand(time(0));  // randomize 
	for (int i = 0; i < numberOfCards; i++) {
		int j = rand() % numberOfCards;
		swap(cards[i], cards[j]);
	}
}

void DeckOfCards::deal() {
	for (int i = 0; i < numberOfCards; i++) {
		cards[i].outputCard();
	}
}

void DeckOfCards::close() {
	numberOfCards = 0;
	delete[] cards;
}