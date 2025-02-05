// Nanu Panchamurthy
// CSC 321
// Lab 4

import java.util.Scanner;

public class npanchamurthy4
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);

		System.out.println("Choose an option (1-4)");
		System.out.println("1. Philosophy");
		System.out.println("2. Humor");
		System.out.println("3. Motivation");
		System.out.println("4. Historical");

		int choice = scanner.nextInt();

		switch (choice)
		{
			case 1:
				System.out.println("Philosophy: The only true wisdom is knowing you know nothing - Socrates");
				break;
			case 2:
				System.out.println("Humor: I'm so clever that sometimes I don't understand a single word of what I am saying - Oscar Wilde");
				break;
			case 3:
				System.out.println("Motivation: The secret to getting ahead is getting started - Mark Twain");
				break;
			case 4:
				System.out.println("Historical: Believe you can and you're halfway there - Theodore Roosevelt");
				break;
			default:
				System.out.println("Invalid choice. Please choose a number between 1 and 4");
		}

		scanner.close();

	}
}
