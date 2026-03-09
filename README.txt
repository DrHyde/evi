README.txt for version 9.1 of Vim: Vi IMproved.


WHAT IS EVI?

EVi is a hard fork from Vim v9.1.2073 (Jan 2026) to build further upon the
foundations of Vim, while avoiding AI taint.

Vim, and by extension EVi, is a greatly improved version of the good old UNIX
editor Vi. Many new features have been added: multi-level undo, syntax
highlighting, command line history, on-line help, spell checking, filename
completion, block operations, script language, etc.  There is also a Graphical
User Interface (GUI) available. Still, Vi compatibility is maintained, those who
have Vi "in the fingers" will feel at home.


DISTRIBUTION

EVi is at the time of writing only distributed from Codeberg at
https://codeberg.org/NerdNextDoor/evi .



COMPILING

If you somehow obtained a binary distribution you don't need to compile EVi. If
you obtained a source distribution, all the stuff for compiling EVi is in the
"src" directory.  See "src/INSTALL" for instructions.


INSTALLATION

See one of these files for system-specific instructions.  Either in the
READMEdir directory (in the repository) or the top directory (if you unpack an
archive):

README_ami.txt		Amiga
README_unix.txt		Unix
README_dos.txt		MS-DOS and MS-Windows
README_mac.txt		Macintosh
README_vms.txt		VMS

There are more README_*.txt files, depending on the distribution you used.


DOCUMENTATION


The tutor is a one hour training course for beginners. See ":help tutor" for
more information.

The best is to use ":help" in EVi. If you don't have an executable yet, read
"runtime/doc/help.txt". It contains pointers to the other documentation files.
The User Manual reads like a book and is recommended to learn to use EVi.  See
":help user-manual".


COPYING

The original Vim is Charityware, and so is EVi.  You can use and copy it as much
as you like, but you are encouraged to make a donation to help orphans in
Uganda.  Please read the file "runtime/doc/uganda.txt" for details (do
":help uganda" inside EVi).

Summary of the license: There are no restrictions on using or distributing an
unmodified copy of EVi.  Parts of EVi may also be distributed, but the license
text must always be included.  For modified versions, a few restrictions apply.
The license is GPL compatible, you may compile EVi with GPL libraries and
distribute it.


SPONSORING

There is no framework for sponsoring at the time of writing.


CONTRIBUTING

If you would like to help make EVi better, see the CONTRIBUTING.md file.


MAIN AUTHOR

Most of the original Vim was created by Bram Moolenaar <Bram@vim.org>,
":help Bram-Moolenaar".
