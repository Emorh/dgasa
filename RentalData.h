#ifndef PIV_RENTALDATA_H
#define PIV_RENTALDATA_H

#include "String.h"
#include "Flist.h"

class RentalData {
public:
    class DateAndTime {
        short day; // попробовать сделать char-ы
        short mon;
        short year;
        short hour;
    public:
        friend istream &operator>>(istream &, DateAndTime &);

        friend ostream &operator<<(ostream &, const DateAndTime &);

        friend Flist &operator>>(Flist &, DateAndTime &);

        friend Flist &operator<<(Flist &, const RentalData &);

        friend Flist &operator>>(Flist &, RentalData &);
    };

    bool operator>(RentalData& dt) { return cost > dt.cost; }

private:
    String item;
    double cost;
    DateAndTime get;
    DateAndTime retrieve;
    String surname;

public:
    RentalData();

    friend istream &operator>>(istream &, RentalData &);

    friend ostream &operator<<(ostream &, const RentalData &);

    friend Flist &operator>>(Flist &, RentalData &);

    friend Flist &operator<<(Flist &, const RentalData &);
};

#endif //PIV_RENTALDATA_H
