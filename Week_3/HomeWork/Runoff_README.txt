There’s another kind of voting system known as a ranked-choice voting system. 
In a ranked-choice system, voters can vote for more than one candidate. 
Instead of just voting for their top choice, they can rank the candidates in order of preference.

Here, each voter, in addition to specifying their first preference candidate, 
has also indicated their second and third choices. 
And now, what was previously a tied election could now have a winner. 

Ranked choice voting can also solve yet another potential drawback of plurality voting.

Here, each voter, in addition to specifying their first preference candidate, 
has also indicated their second and third choices. 
And now, what was previously a tied election could now have a winner. 
The race was originally tied between Alice and Bob, so Charlie was out of the running. 

Ranked choice voting can also solve yet another potential drawback of plurality voting.

If no candidate has more than 50% of the vote, then an “instant runoff” occurrs. 
The candidate who received the fewest number of votes is eliminated from the election, 
and anyone who originally chose that candidate as their first preference now has 
their second preference considered. 

Why do it this way? Effectively, this simulates what would have happened 
if the least popular candidate had not been in the election to begin with.

The process repeats: if no candidate has a majority of the votes, 
the last place candidate is eliminated, and anyone who voted for them will instead vote 
for their next preference (who hasn’t themselves already been eliminated). 
Once a candidate has a majority, that candidate is declared the winner.

Sounds a bit more complicated than a plurality vote, doesn’t it? 
But it arguably has the benefit of being an election system where the winner of the election 
more accurately represents the preferences of the voters. 

In a file called runoff.c in a folder called runoff, create a program to simulate a runoff election.

Be sure to test your code to make sure it handles…

An election with any number of candidate (up to the MAX of 9)
Voting for a candidate by name
Invalid votes for candidates who are not on the ballot
Printing the winner of the election if there is only one
Not eliminating anyone in the case of a tie between all remaining candidates
