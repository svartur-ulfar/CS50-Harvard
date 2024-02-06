What happens, for instance, in an election with three candidates, and the ballots below are cast?

A plurality vote would here declare a tie between Alice and Bob, since each has two votes. But is that the right outcome?

There’s another kind of voting system known as a ranked-choice voting system. 
In a ranked-choice system, voters can vote for more than one candidate. 
Instead of just voting for their top choice, they can rank the candidates in order of preference.

Here, each voter, in addition to specifying their first preference candidate, has also indicated their second and third choices. 
And now, what was previously a tied election could now have a winner.

Ranked choice voting can also solve yet another potential drawback of plurality voting. 

The Tideman voting method (also known as “ranked pairs”) is a ranked-choice voting method that’s 
guaranteed to produce the Condorcet winner of the election if one exists. 
In a file called tideman.c in a folder called tideman, create a program to simulate an election by the Tideman voting method.

BACKGROUND

Generally speaking, the Tideman method works by constructing a “graph” of candidates, 
where an arrow (i.e. edge) from candidate A to candidate B indicates that candidate A wins 
against candidate B in a head-to-head matchup.

The Tideman method says the winner of the election should be the “source” of the graph 
(i.e. the candidate that has no arrow pointing at them). It’s possible, however, 
that when the arrows are drawn, there is no Condorcet winner. 

The Tideman algorithm must be careful to avoid creating cycles in the candidate graph. 
How does it do this? The algorithm locks in the strongest edges first, since those are arguably the most significant. 
In particular, the Tideman algorithm specifies that matchup edges should be “locked in” to the graph one at a time, 
based on the “strength” of the victory (the more people who prefer a candidate over their opponent, 
the stronger the victory). So long as the edge can be locked into the graph without creating a cycle, 
the edge is added; otherwise, the edge is ignored.

Put more formally, the Tideman voting method consists of three parts:

Tally: 
Once all of the voters have indicated all of their preferences, determine, for each pair of candidates, 
who the preferred candidate is and by what margin they are preferred.

Sort: 
Sort the pairs of candidates in decreasing order of strength of victory, 
where strength of victory is defined to be the number of voters who prefer the preferred candidate.

Lock: 
Starting with the strongest pair, go through the pairs of candidates in order and “lock in” 
each pair to the candidate graph, so long as locking in that pair does not create a cycle in the graph.
Once the graph is complete, the source of the graph (the one with no edges pointing towards it) is the winner!
