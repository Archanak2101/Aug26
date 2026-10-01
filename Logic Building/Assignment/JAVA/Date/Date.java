
public class Date {

    private int day;
    private int month;
    private int year;
    public void setDay(int DD, int MM,int YY) {

        year = YY;
        if(MM < 1 || MM > 12 ) {
            month = 1;
        }else {
            month = MM ;
        }

        if (month == 1 || month == 3 || month == 5 || month == 7 || month ==8 || month == 10 || month ==12 ) {
            if(DD < 1 || DD > 31 ) {
                day = 1;
            }else {
                day = DD;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11 ) {
            if(DD < 1 || DD > 30 ) {
                day = 1;
            }else {
                day = DD;
            }
        }else if (month == 2) {
            if((year % 4 == 0 && year % 100 !=0)) {
                if(DD < 1 || DD > 29) {
                    day = 1;
                }else {
                    day = DD ;
                }
            }else {
                if(DD < 1 || DD > 28) {
                    day = 1;

                }else {
                    day = 29 ;
                }
            }
        }


    }

    public int getDay() {
        return day;
    }

    void addDays(int numberOfDays) {
        for (int i = 0; i < numberOfDays; i++) {

            day++; // Step 1: Add 1 day

            // Step 2: Check if day exceeded current month's limit

            // 31-day months
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
                if (day > 31) {
                    day = 1;
                    month++;
                }
            }
            // 30-day months
            else if (month == 4 || month == 6 || month == 9 || month == 11) {
                if (day > 30) {
                    day = 1;
                    month++;
                }
            }
            // February
            else if (month == 2) {
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    if (day > 29) {
                        day = 1;
                        month++;
                    }
                } else {
                    if (day > 28) {
                        day = 1;
                        month++;
                    }
                }
            }

            // Step 3: Check if month exceeded December (12)
            if (month > 12) {
                month = 1;
                year++;
            }

        }
    }

    void addMonth(int numberOfMonth) {
        month = month + numberOfMonth ;
        while (month > 12) {
            month = month - 12;
            year++;
        }
    }

    void addYear(int numberOfYear) {
        for (int i = 0; i < numberOfYear; i++) {

            year++;
        }
    }
    public int getMonth() {
        return month;
    }

    public int getYear() {
        return year;
    }

}
