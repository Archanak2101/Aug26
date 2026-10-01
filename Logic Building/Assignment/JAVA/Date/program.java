public class program{
    public static void main(String[] args) {
        Date objDate = new Date();

        int choice;

        do {

            System.out.println("\n===== DATE MENU =====");
            System.out.println("1. Set Date");
            System.out.println("2. Add Days");
            System.out.println("3. Add Months");
            System.out.println("4. Add Years");
            System.out.println("5. Display");
            System.out.println("6. Exit");

            System.out.println("Enter your choice:");
            choice = ConsoleInput.getInt();

            switch(choice) {

                case 1 :
                    System.out.println("Enter the day");
                    int day = ConsoleInput.getInt(); // Fixed missing '='

                    System.out.println("Enter the month");
                    int month = ConsoleInput.getInt();
                    System.out.println("Enter the year");
                    int year= ConsoleInput.getInt();

                    objDate.setDay(day, month, year);

                    System.out.println(objDate.getDay() + "/" + objDate.getMonth() + "/" + objDate.getYear());

                    System.out.print("Current Date:");
                    System.out.println(objDate.getDay() + "/" + objDate.getMonth() + "/" + objDate.getYear());
                    break;

                case 2 :
                    System.out.println("Enter days to add:");
                    int daysToAdd = ConsoleInput.getInt();

                    objDate.addDays(daysToAdd);

                    System.out.print("New Date: ");
                    System.out.println(objDate.getDay() + "/" + objDate.getMonth() + "/" + objDate.getYear());
                    break;

                case 3 :
                    System.out.println("Enter Month to add:");
                    int daysToMonth = ConsoleInput.getInt();
                    objDate.addMonth(daysToMonth);

                    System.out.print("New Month: ");
                    System.out.println(objDate.getDay() + "/" + objDate.getMonth() + "/" + objDate.getYear());
                    break;

                case 4 :
                    System.out.println("Enter Year to add:");
                    int addToYear = ConsoleInput.getInt();
                    objDate.addYear(addToYear);

                    System.out.print("New year: ");
                    System.out.println(objDate.getDay() + "/" + objDate.getMonth() + "/" + objDate.getYear());
                    break;

                case 5 :

                    System.out.println("Current Date: "
                            + objDate.getDay() + "/"
                            + objDate.getMonth() + "/"
                            + objDate.getYear());

                    break;


                case 6:

                    System.out.println("Program exited.");
                    break;


                default :
                    System.out.println("Invalid Choice");
            }
        }while(choice != 6);


    }
}
