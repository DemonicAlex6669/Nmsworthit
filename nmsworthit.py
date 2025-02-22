import argparse


class Ship:
    def __init__(self, chart, stat):
        self._chart = chart
        self._stat = stat
    def worth(self, args):
        for key, value in self._chart.items():
            if args < key:
                if self._stat >= value:
                    print("good buy")
                    break
                else:
                    print("bad buy")
                    break
    
    @classmethod
    def enter_support(cls, chart, *stats):
        stat = sum(*stats) / 4
        return cls(chart, stat)
                    

def main():
    parser = argparse.ArgumentParser(description = "find of a ship should be bought")
    parser.add_argument("-e", help= "expidition number", type=int)
    parser.add_argument("-m", default=0, help= "main stat for a ship", type=int)
    parser.add_argument("-s", default=0, nargs=4, help= "the four stats for a support ship", type=int)
    args = parser.parse_args()


    main = {4: 20, 8: 21, 15: 22, 25: 24, 30: 25, 35: 27, 40: 29, 45: 30, 50: 32, 55: 33, 100: 35}

    support = {4: 2, 8: 4, 15: 5, 25: 6, 30: 8, 35: 9, 40: 10, 45: 11, 50: 12, 55: 13, 100: 15}

    if args.m == 0:
        support_frigate = Ship.enter_support(support, args.s)
        support_frigate.worth(args.e)
    elif args.s == 0:
        main_frigate = Ship(main, args.m)
        main_frigate.worth(args.e)
    else:
        print("error, choose only -m or -s")


if __name__ == "__main__":
    main()
