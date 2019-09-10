                            ~~~~~~~~~~~~~~~~~~~~~~~~
                             HOMEWORK: #1
                               AUTHOR: Kerwin Dobbs
                            ~~~~~~~~~~~~~~~~~~~~~~~~
===========
 File list
===========
hw1.txt         Step-by-step description of Homework #1
Kerwin_hello.c  Simple C program 
Makefile        Makefile to build Kerwin_hello program
README.txt      This file

=====================
 General Description
 of Homework #1
=====================

 Preliminaries (for a Mac computer)
------------------------------------
 - apply for an EECIS account
 - verify that XCode and associated command tools were installed
 - use Terminal and Cisco AnyConnect to log onto the cisc372 server
 - note what shell is being used (bash) on the server and 
   add personal config files

 Problem 1.
------------
 - create a GitHub account (krwndbbs) at the GitHub website
 - create a repository (Kerwin_cisc372) within this new account
 - on the cisc372 server, get acquainted with "git" commands to shuttle
   folders and files between the GitHub account and the cisc372 server
 - on the cisc372 server, create the simple C program, Kerwin_hello.c,
   compile it, and make sure it works
 - move the new C program to the GitHub account
 - verify the synchronization of the server files with those on
   the GitHub account

 Problem 2.
------------
 - on the cisc372 server, create a Makefile which will automate the
   compiling and execution of the C program
 - test the Makefile to verify that it works properly with the given options
 - add the Makefile to version control and commit it to the GitHub account 

==================
 Makefile details
==================

 > make run           ... execute the "Kerwin_hello" program

 > make Kerwin_hello  ... compile "Kerwin_hello.c" and create the executable
                          if changes have been made to the C program

 > make clean         ... delete the executable file

