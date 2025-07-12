import java.util.ArrayList;
import java.util.Collections;

class Card { 
	String suit; // Hearts ♡: Diamonds ♢: Clubs ♣: Spades ♠: 
	String number; // "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q","K", "A" 
	public Card(String suit, String number) {
		this.suit = suit;
		this.number = number;
	}
	public String toString() {
		return "(" + suit + " " + number + ")";
	} // (CLUB A)…
}

class Deck {
	ArrayList<Card> deck = new ArrayList<Card>();
	String[] suits = { "CLUB", "DIAMOND", "HEART", "SPADE" };
	String[] numbers = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
	
	// 카드를 생성하여 덱에 넣는다.
	public Deck() {
		for (int i = 0; i < suits.length; i++) {
			for (int j = 0; j < numbers.length; j++) {
				deck.add(new Card(suits[i], numbers[j]));
				System.out.print(new Card(suits[i], numbers[j]));
			}
		System.out.println();
		}
	}
	
	// 카드를 섞는다.
	public void shuffle() {
		Collections.shuffle(deck); }
	
	// 덱의 처음에서 카드를 제거하여서 반환한다.
	public Card deal() {
		return deck.remove(0); }
}

class Player {
	private String playerName;
	public int cardCounter = 1;
	ArrayList<Card> list = new ArrayList<Card>();
	
	public Player(String playerName) {
		this.playerName = playerName;
	}
	
	public void getCard(Card card) {
		list.add(card);
		if (card.number == "Q") {
			System.out.println(this + " #" + cardCounter + " card=" + 12);
		}
		else if (card.number == "K") {
			System.out.println(this + " #" + cardCounter + " card=" + 13);
		}
		else if (card.number == "J") {
			System.out.println(this + " #" + cardCounter + " card=" + 11);
		}
		
		else if (card.number == "A") {
			System.out.println(this + " #" + cardCounter + " card=" + 1);
		}
		
		else {
			System.out.println(this + " #" + cardCounter + " card=" + card.number);
		}
		cardCounter = cardCounter + 1;
	}
	
	public void showCards() {
		System.out.println(this + ": " + list);
	}
	
	public int plusCards() {
		int sum = 0;
		for (int i=0; i<list.size(); i++) {
			if (list.get(i).number == "Q") {
				sum = sum + 12;
			}
			else if (list.get(i).number == "K") {
				sum = sum + 13;
			}
			else if (list.get(i).number == "J") {
				sum = sum + 11;
			}
			
			else if (list.get(i).number == "A") {
				sum = sum + 1;
			}
			
			else {
				sum = sum + Integer.parseInt(list.get(i).number);
			}
		}
		return sum;
	}
	
	public void vsCards(Player P) {
		if (this.plusCards() > P.plusCards())
			System.out.println(this + "=" + this.plusCards() + " " + P + "=" + P.plusCards() + " -> " + this + " win");
		else if (this.plusCards() < P.plusCards())
			System.out.println(this + "=" + this.plusCards() + " " + P + "=" + P.plusCards() + " -> " + P + " win");
		else 
			System.out.println(this + "=" + this.plusCards() + " " + P + "=" + P.plusCards() + " -> " + this + " draw");
	}
	
	public String toString() {
        return playerName;
	}
}

class CardGame {
	public static void main(String[] args) {
		Deck deck = new Deck();
		deck.shuffle();
		Player p1 = new Player("p1");
		Player p2 = new Player("p2");
		for (int i=0; i<5; i++) {
			p1.getCard(deck.deal());
			p2.getCard(deck.deal());
		}
		p1.showCards();
		p2.showCards();
		p1.vsCards(p2);
		
	}
}