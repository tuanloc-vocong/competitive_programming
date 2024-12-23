// Title: VIRUS
// Source: High School Programing Offline 2002
// Difficulty:
// Time Complexity:
// Topic: Linear Search & Binary Search

/**
 * Victor likes to collect viruses (yes, this is a strange hobby). He has all sorts of harmless and harmful ones that he keeps
 * with him at all times (sealed up very securely of course). He is very attached to his virus collection and he does not like
 * to travel without it. So when he made plans to go to Honolulu, Hawaii, his virus collection was sure to go with him. Unfortunately,
 * Hawaii (unlike other states) requires you to declare any viruses you may have in your possession. Because Hawaii prohibits
 * certain viruses from entering the state (they don’t want their fruit crops destroyed by a rogue virus!), Victor is sure to leave
 * any prohibited viruses at home so that they are not seized and destroyed. Fortunately for Victor, the Hawaiian government has
 * provided an informative website to help Victor determine if his viruses are okay to enter Hawaii or not.
 *
 * The Problem:
 * Your job is to help Victor determine which viruses he can take with him to Hawaii. The Hawaiian government has provided on their
 * website the exact sequences of DNA that are in the viruses that are prohibited. So if the Hawaiian government said that the
 * following sequence was prohibited:
 * ATTCCGTA
 * Then the following virus would be rejected because it contains that sequence:
 * ATTATTAGGATTACATTCCGTAACCGTTTTAG
 * However, the sequences may not have to be consecutive. They may have a fixed number of “wildcards” (represented by the ASCII
 * star character “*”) meaning that any DNA letter in a DNA sequence will replace that wild card (but only one DNA letter per wildcard).
 * For example, the following sequence:
 * ATA**CGGC*A
 * Would reject the following virus DNA:
 * AGGAAATTACCCCATAGGCGGCTA
 *
 * Input:
 * You will read in a file that contains both the list of bad virus DNA sequences and then the DNA sequences of Victor’s collection.
 *
 * The first line of the file will contain a single positive integer that represents the number of data sets in the file (unfortunately
 * for Victor, the Hawaiian government updates their website several times a day with new and/or different virus DNA so your program
 * must be able to handle multiple, independent data sets).
 *
 * The first line of each data set will contain a single positive integer, n, (1<n<30) indicating how many bad DNA subsequences were
 * found on the Hawaii government’s website. The following n lines will contain strings of DNA characters that will be at least 1 character
 * long and at most 20 characters in length.
 *
 * Following the bad DNA sequences will be a line containing a single positive integer, m, (1<m<100) which will indicate how many
 * viruses are in Victor’s collection. The following m lines will contain the DNA for his viruses. Each line will contain a string of DNA
 * characters that will be at least 1 character long and at most 200 characters in length.
 *
 * Notes to remember:
 *
 *  The DNA alphabet only consists of the letters: A, C, G, and T.
 *  All letters will be uppercase.
 *  A “” in the bad DNA sequences indicates a wildcard which must be matched by any one DNA letter in Victor’s virus DNA. There will
 * be no “”s in the DNA sequences of Victor’s viruses.
 *  Bad virus DNA in one data set is NOT bad virus DNA in another data set.
 *
 * Output:
 * At the beginning of each data set, print the line:
 * Data set #k:
 * where k is the data set number starting with 1.
 * For each virus that you check for bad DNA sequences, print the following output if the virus is acceptable in Hawaii:
 * Virus #d: Cool! Victor can take it with him!
 * Or print the following output if the virus is not acceptable in Hawaii (i.e. it matched one of the bad DNA sequences):
 * Virus #d: Nuts. This virus is illegal in Hawaii!
 * Where d should be the virus number, starting with 1, for each data set. Other than replacing dd and kk with the numbers as specified, the lines
 * should be printed exactly as shown above (watch your uppercase and lowercase letters as well as punctuation!). The output for each virus should
 * be on its own line (see the Sample Output below for an example).
 * Put a blank line in between data sets as a separator.
 *
 * Example 1:
 * Input:
 * 2
 * 3
 * ATTGG***A
 * **GTTGACCCCCC
 * GAGAGAGAGA
 * 5
 * GATTGATTGAGAGAGAGATCATC
 * CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
 * GGGGGGGAAGTTGACCCCCC
 * AATTGGCATACCCCTTT
 * GGGGAAAATTTTAAAACCCCGGGGGAAAA
 * 2
 * ATGG
 * ATGCATGCATGC
 * 2
 * GCCGCCGCCTGCCGCCGCCT
 * ATATATGGATATATGGATATATGG
 *
 * Output:
 * Data set #1:
 * Virus #1: Nuts. This virus is illegal in Hawaii!
 * Virus #2: Cool! Victor can take it with him!
 * Virus #3: Nuts. This virus is illegal in Hawaii!
 * Virus #4: Nuts. This virus is illegal in Hawaii!
 * Virus #5: Cool! Victor can take it with him!
 *
 * Data set #2:
 * Virus #1: Cool! Victor can take it with him!
 * Virus #2: Nuts. This virus is illegal in Hawaii!
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}