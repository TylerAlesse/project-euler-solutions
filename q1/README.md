# Question 1

If we list all the natural numbers below 10 that are multiple of 3 or 5, we get 3,5,6,9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

# Setup

Because the starting questions are simple, my goal is to create solutions in C++, Javascript, and Python _before_ I check whether or not the solution is valid. My secondary goals is for each of them to feature a different _way_ to solve the problem, at least where possible.

# Javascript

Just like the classic FizzBuzz problem, the solution to it is very simple. I would personally use this mostly as a way to make sure I like the setup of what I'm doing, the code compiles, etc. etc.

I use Node to run the main.js file, because its fast an easy.

# Python

No real change in the concept behind the solution. Just keep count and sum the values. The method of counting changes slightly, as both methods instead use arrays to store the values, then sum them. This does mean that proposterously large numbers (or a sufficiently crappy machine) would encounter problems with storing all the numbers, but we'll ignore that for this problem. Though this concept will be kept in mind for the future.

# C++
