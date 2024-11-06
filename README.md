<div align="center">

# My Attempt to Make a Not So Neural Network from Scratch

![neural](https://github.com/user-attachments/assets/0cc93d7a-0f34-4dab-9440-4ea222ac4d6a)

  
</div>

## LICENSE

I am using the MIT License. This means that you are allowed to do allmost anything as long as you PROVIDE ATTRIBUTION back to the author and DON'T HOLD the author LIABLE FOR ANY DAMAGE.

## But Why Did I Try?
  
It was bothering me so I decided to just go for it.


## What is a Neural Network?

The image above is called a perceptron and is a fundamental concept of Machine Learning. It is the most basic form of a neural network which can be correlated to a function. But first, what even is a function? Let us do a quick revision (we won't be able to get to the conclusion if I won't reintroduce you to the foundations)

- Definition 1
  - A function is a relation between a SET of inputs having ONE output each
 
To visualize the relation between a Function and a Perceptron, think of it this way. Look at the image of the perceptron above, let
- `Input` = `x`,
- `Neuron` = `function` = `f(x)`
- `Output` = `y`

We know that `x` represents the domain and `y` represents the range. The domain `x` is the set of all possible inputs, and the range `y` is the set of all possible outputs (`x` is in the domain of `f` if `x` is defined for all values of `f`). One good way to understand it is to assign a function in your calculator, input random values, if you get a MATH ERROR, then the value is undefined. Else, the value is defined. Shown below is a figure of a function.

![LOL drawio](https://github.com/user-attachments/assets/9bf8581f-82cc-4db2-8141-2f1ab6fd63d3)


Now, let us assign some arbitrary values. Let

- `x` = `3`
- `function` = `1 / x`
  
We know that the domain of `1 / x` is `(-∞, 0) U (0, ∞)` and the output is `y` = `1/3`. Now this one here is a defined value, why? Because the `x` is in the domain of `1 / x`.

But what is the purpose of it anyways? This is because I want to introduce a theorem regarding the relation between a Perceptron and a Function. 

- Theorem 1
  * A Perceptron `f` has a domain `d` with interval `(-∞, ∞)` since it cannot be undefined and will always output a value depending on the data set
- Proof:
  * The proof is left as an exercise to the reader

My reasoning for this is that a Perceptron will always output a value and is neglecting the chance of a probability occuring. But what does it mean neglecting? Here comes the second theorem

- Theorem 2
  * A perceptron `f` has a finite domain `d` with interval `[a, b]` where both `a` and `b` are real numbers that is defined for all values of `f` BUT NOT defined for some values due to the probability of a certain output to not occur
- Proof:
  * The proof is left as an exercise to the reader

Now Theorem 2 is a bit harder to explain. My reasoning for this is that a perceptron has a finite domain despite all values in the domain being defined and also because some output is impossible to occur. Now IF IN CASE my theory is correct, it would lead to another definition

- Definition 2 (right after Theorem 2)
  * The set of all FINITE values `x` in the domain `d` is defined for all values in the perceptron `f`

The main point of Definition 2? The domain `d` is restricted at a finite interval NOT because some values are not defined but because the probability of some output is impossible to occur.

Now, easy to say that `the probability of an output is impossible to occur equals to an undefined value`. That's why I declared it a theorem (regarding Theorem 2). Again. A THEOREM. I don't want to declare it equal YET as I have a feeling that there is something worth the wait. 

## The Intuition Behind the Sample Dataset

Given a dataset of:

| Input 1 | Input 2 | Input 3 | Output |
|---|---|---|---|
| 0 | 0 | 1 | 0 |
| 0 | 1 | 0 | 1 |
| 1 | 1 | 1 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 0 | 1 | 1 |
| 1 | 1 | 0 | 0 |
| 0 | 1 | 1 | 0 |


The idea is to input 3 values from the first 3 inputs of the data set (either 0 or 1) separated by spaces and the program would output the values in the 4th column. For example:

Input: `0 0 1`

Output: `0`


Now, is this a neural network? NOPE. It might be close but it is not. Why? Because imagine if I decrease the set of inputs

| Input 1 | Input 2 | Input 3 | Output |
|---|---|---|---|
| 0 | 0 | 1 | 0 |
| 0 | 1 | 0 | 1 |
| 1 | 1 | 1 | 1 |
| 1 | 0 | 0 | 1 |

Now, let us input some values NOT INCLUDED in the data set

Input: `0 1 1`

Output: `???`

But why? This is because on the first data set, the output for the values `0 1 1` is defined as `0`. On the second data set however, it is not defined. A Neural Network will PREDICT the output based on the given input that is NOT INCLUDED on the data set


## Your Job

I am sorry for giving you a job xD. Also, the code is simple. However, if in case you would like to contribute:

 - What's Allowed
   * Proof of Theorems prolly. Feel free to express your thoughts
   * A Neural Network is suppose to predict the output, write the code to predict the output :)


