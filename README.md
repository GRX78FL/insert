# Insert

Insert is a small binary that breaks a given string in set intervals with a user-specified character/string.

# Why?

There's no way of doing this via the command line without using regular expressions, which have their place, but they're not exactly user friendly to deal with.

#  Build

```bash
git clone https://github.com/GRX78FL/insert.git
cd insert; make;
```

# Usage

```bash
./insert -s <string> -d <delimiter> -i <interval>

# example input
./insert -s aaabbbcccddd -d - -i 3

# example output
aaa-bbb-ccc-ddd
```

# Note

* this is meant to be a simpe tool however, more functionality might be added in the future;
* this is GPLv3 code;
* report bugs please :)

