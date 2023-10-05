#!/usr/bin/python3
from sys import argv


def main():
    a = 0
    for i in range(1, len(argv)):
        a += int(argv[i])
    print('{}'.format(a))


if __name__ == "__main__":
    main()
