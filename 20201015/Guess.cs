using System;

namespace Guess
{
	class Program
	{
		static void Main(string[] args)
		{
			Random rnd = new Random(Guid.NewGuid().GetHashCode());
			int guess, ans = rnd.Next(1, 10);
			while (true)
			{
				Console.WriteLine("Please try to guess a number from 1 to 10");
				guess = int.Parse(Console.ReadLine());
				if (guess == ans)
				{
					Console.Write("Congratulation!\nYou guess the correct number!");
					break;
				}
				else
				{
					Console.WriteLine("Try again\n");
				}
			}
		}
	}
}
