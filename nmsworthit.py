import argparse

class ship(...):
    def __init__:
        ...
    @property
    def status(self):
        ...
    @status.setter
    def status(self,...):
        ...
    @classmethod
    def worth(...):
        ...

def main():
    parser = argparse.ArgumentParser(description = "find of a ship should be bought")
    parser.add_argument("-e", help= "expidition number")
    parser.add_argument("-m", help= "main stat for a sjip")
    paeser.add_argument("-s", nargs=4, help= "the four stats for a support ship")
    args = parser.parse_args()

    ...

if __name__ == "__main__":
    main()
