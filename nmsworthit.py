import argparse


class Ship:
    def __init__(self, **chart):
        self._chart = chart
    @classmethod
    def worth(self, self._chart, stat):
        for key, value in self._chart.items():
            if args.e < key:
                if stat > value:
                    print("good buy")
                else:
                    print("bad buy")
                    

def main():
    parser = argparse.ArgumentParser(description = "find of a ship should be bought")
    parser.add_argument("-e", help= "expidition number")
    parser.add_argument("-m", default=0, help= "main stat for a sjip")
    paeser.add_argument("-s", nargs=4, help= "the four stats for a support ship")
    args = parser.parse_args()

    main_stat = 0

    for s in args.s:
        stats += s
        stat = stats / 4
        return main_stat

    support_stat = args.m

    main = {}

    support = {}

    main_frigate = Ship(main)

    support_frigate = Ship(support)

    if main_stat == 0:
        support_frigate.worth(support_stat)
    elif support_stat == 0:
        main_frigate.worth(main_stat)
    else:
        print("error, choose only -m or -s")


if __name__ == "__main__":
    main()
