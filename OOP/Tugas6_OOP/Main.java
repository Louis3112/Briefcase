package Tugas6_OOP;

import java.time.LocalTime;
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner Input = new Scanner(System.in);
        RPL LabRPL = new RPL();
        RPL.LabManagement RPLManagement = LabRPL.new LabManagement();

        RPL.Computer PC1 = LabRPL.new Computer("Asus All In One V222GAK", "042.01.0500.4000901.005.2018", "Intel Celeron J4205", "4 GB DDR 4", "1 TB HDD");
        RPL.Computer PC2 = LabRPL.new Computer("Asus All In One V222GAK", "042.01.0500.4000902.005.2018", "Intel Celeron J4205", "4 GB DDR 4", "1 TB HDD");
        RPL.Computer PC3 = LabRPL.new Computer("Asus All In One V222GAK", "042.01.0500.4000903.005.2018", "Intel Celeron J4205", "4 GB DDR 4", "1 TB HDD");
        RPL.Computer PC4 = LabRPL.new Computer("Asus All In One V222GAK", "042.01.0500.4000904.005.2018", "Intel Celeron J4205", "4 GB DDR 4", "1 TB HDD");
        RPLManagement.AddEquipment(PC1);
        RPLManagement.AddEquipment(PC2);
        RPLManagement.AddEquipment(PC3);
        RPLManagement.AddEquipment(PC4);

        
        RPL.User Assistance1 = LabRPL.new User("Cornelius Louis Nathan", "23051204085");
            Assistance1.setRoleAssistance();
            RPLManagement.AddUser(Assistance1);

        RPL.User Assistance2 = LabRPL.new User("Rayhan Atmadja", "23051204075");
            Assistance2.setRoleAssistance();
            RPLManagement.AddUser(Assistance2);

        RPL.User Assistance3 = LabRPL.new User("Raffi Akhdil Putra", "23051204090");
            Assistance3.setRoleAssistance();
            RPLManagement.AddUser(Assistance3);

        RPL.Lecturer Lecturer1 = LabRPL.new Lecturer("I Made Suartana S.Kom, M.Kom", "198411242015041003", "Object-Oriented Programming");
            Lecturer1.setPICStudent(Assistance2);
            RPLManagement.AddUser(Lecturer1);
            
        RPL.Lecturer Lecturer2 = LabRPL.new Lecturer("Anita Qoiriah S.Kom, M.Kom", "196901251995122001", "Basic Programming");
            RPLManagement.AddUser(Lecturer2);

        String ScheduleFromBuAnita = ("5/10/2024");
        LocalTime StartTimeBuAnita = LocalTime.of(7,30);
        LocalTime FinishTimeBuAnita = LocalTime.of(9,0);
        
        RPLManagement.AddLabSchedule(Lecturer1, ScheduleFromBuAnita, StartTimeBuAnita, FinishTimeBuAnita);
        
        int Option;
        String Home = "y";
        while(Home.equals("y")){
            System.out.println("");
            System.out.println("=============================================");
            System.out.println("============ Lab RPL Management =============");
            System.out.println("========= By Cornelius Louis Nathan =========");
            System.out.println("=========== TI 23 C - 23051204085 ===========");
            System.out.println("=============================================");
            System.out.println("1. Input new equipment");
            System.out.println("2. Update condition on equipment ");
            System.out.println("3. Input new user");
            System.out.println("4. Input new schedule");
            System.out.println("5. See all registered equipments and the condition in lab");
            System.out.println("6. See all registered users in lab");
            System.out.println("7. See all registered schedules in lab");
            System.out.println("8. Exit");
            System.out.print("> ");
            Option = Input.nextInt();
            Input.nextLine();

            switch (Option) {
                case 1 : {
                    System.out.println("");
                    System.out.println("What equipment do you want to input");
                    System.out.print("> ");
                        String NewEquipmentInput = Input.nextLine();

                    if(NewEquipmentInput.equals("Computer") || NewEquipmentInput.equals("computer") || NewEquipmentInput.equals("komputer") || NewEquipmentInput.equals("Komputer")){
                        System.out.println("");
                        System.out.println("Input Computer Name");
                        System.out.print("> ");
                            String NewComputerName = Input.nextLine();
                        
                        System.out.println("");
                        System.out.println("Input ID");
                        System.out.print("> ");
                            String NewComputerID = Input.nextLine();
                        
                        System.out.println("");
                        System.out.println("Input Processor");
                        System.out.print("> ");
                            String NewComputerProcessor = Input.nextLine();
                        
                        System.out.println("");
                        System.out.println("Input RAM");    
                        System.out.print("> ");   
                            String NewComputerRAM = Input.nextLine();
                        
                        System.out.println("");
                        System.out.println("Input Memory");    
                        System.out.print("> ");   
                            String NewComputerMemory = Input.nextLine();      
                        
                        RPL.Computer NewComputer = LabRPL.new Computer(NewComputerName, NewComputerID, NewComputerProcessor, NewComputerRAM, NewComputerMemory);
                        RPLManagement.AddEquipment(NewComputer);
                        
                        System.out.println("");
                        System.out.println(NewComputerName + " (ID: " + NewComputerID + ") has been added successfully");
                        System.out.println("Press Enter to continue");
                        Input.nextLine();
                    }
                    else{
                        System.out.println("");
                        System.out.println("Input new equipment");
                        System.out.print("> ");
                            String NewEquipmentName = Input.nextLine();
                        
                        System.out.println("");
                        System.out.println("Input ID");
                        System.out.print("> ");
                            String NewEquipmentID = Input.nextLine();
                        
                        RPL.Equipment NewEquipment = LabRPL.new Equipment(NewEquipmentName, NewEquipmentID);
                        RPLManagement.AddEquipment(NewEquipment);
                        System.out.println("");
                        System.out.println(NewEquipmentName + " (ID: " + NewEquipmentID + ") has been added successfully");
                        System.out.println("Press Enter to continue");
                        Input.nextLine();
                    }
                }
                break;
                
                case 2 : {
                    System.out.println("");
                    System.out.println("Input the ID equipment which do you want to update");
                    System.out.print("> ");
                        String ChangeID = Input.nextLine();
                    
                    boolean Found = false;
                    for(RPL.Equipment EquipmentFound : RPLManagement.getEquipment()){
                        if (EquipmentFound.getID().equals((ChangeID))) {
                            Found = true;
                            System.out.println("");
                            System.out.println("How is the condition of equipment with ID " + EquipmentFound.getID());
                            System.out.println("1. OK");
                            System.out.println("2. Slightly Damaged");
                            System.out.println("3. Heavily Damaged");
                            System.out.print("> ");
                                int ConditionOption = Input.nextInt();

                            if(ConditionOption == 1){
                                EquipmentFound.setConditionOK();
                                System.out.println("");
                                System.out.println("Condition " + EquipmentFound.getID() + " set to OK");
                                break;
                            }
                            if(ConditionOption == 2){
                                EquipmentFound.setConditionSD();
                                System.out.println("");
                                System.out.println("Condition " + EquipmentFound.getID() + " set to Slightly Damaged");
                                break;
                            }                            
                            if(ConditionOption == 3){
                                EquipmentFound.setConditionHD();
                                System.out.println("");
                                System.out.println("Condition " + EquipmentFound.getID() + " set to Heavily Damaged");
                                break;
                            }
                            else{
                                System.out.println("");
                                System.out.println("Input invalid");
                            }

                            System.out.println("Press enter to continue");
                            Input.nextLine();
                            Input.nextLine();
                            break;
                        }
                    }
                    if (!Found) {
                        System.out.println("ID not found");
                        System.out.println("Press enter to continue");
                        Input.nextLine(); 
                    }
                }
                break;

                case 3 : {
                    System.out.println("");
                    System.out.println("Input name");
                    System.out.print("> ");
                        String NewUserName = Input.nextLine();
                    
                    System.out.println("");
                    System.out.println("Input ID");
                    System.out.print("> ");
                        String NewUserID = Input.nextLine();

                    System.out.println("");
                    System.out.println("What is his/her role");
                    System.out.println("1. Lecturer");
                    System.out.println("2. Assistance");
                    System.out.println("3. Student");
                    System.out.print("> ");
                        int NewUserRole = Input.nextInt();
                        Input.nextLine();

                        if(NewUserRole == 1){
                            System.out.println("");
                            System.out.println("Input Subject");
                            System.out.print("> ");
                                String NewUserSubject = Input.nextLine();
                            RPL.Lecturer NewLecturer = LabRPL.new Lecturer(NewUserName, NewUserID, NewUserSubject);
                            RPLManagement.AddUser(NewLecturer);
                        }

                        else if(NewUserRole == 2){
                            System.out.println("");
                            RPL.User NewAssistance = LabRPL.new User(NewUserName, NewUserID);
                            NewAssistance.setRoleAssistance();
                            RPLManagement.AddUser(NewAssistance);
                        }
                        else{
                            System.out.println("");
                            System.out.println("Input Class");
                            System.out.print("> ");
                                String NewUserClass = Input.nextLine();
                            RPL.Student NewStudent = LabRPL.new Student(NewUserName, NewUserID, NewUserClass);    
                            RPLManagement.AddUser(NewStudent); 
                            
                            System.out.println("");
                            System.out.println("Input Lecturer's Name");
                            System.out.print("> ");
                                String NewUserLecturer = Input.nextLine();
                            
                            boolean Found = false;
                            for(RPL.User LecturerFound: RPLManagement.getUser()){
                                if(LecturerFound.getName().equals(NewUserLecturer) && LecturerFound.getRole().equals("Lecturer")){
                                    Found = true;
                                    NewStudent.setLecturer(LecturerFound);
                                    break;
                                }   
                            }
                            if (!Found) {
                                System.out.println("");
                                System.out.println("Lecturer's name not found");
                            }
                        }
                    
                    
                    System.out.println("");
                    System.out.println(NewUserName + " (ID: " + NewUserID + ") has been added successfully");

                    System.out.println("Press enter to continue");
                    Input.nextLine();
                }
                break;
                
                case 4 : {
                    System.out.println();
                    System.out.println("Input ID");
                    System.out.print("> ");
                        String InputID = Input.nextLine();
                    
                    boolean Found = false;
                    for(RPL.User UserFound: RPLManagement.getUser()){
                        if(UserFound.getIDUser().equals(InputID)){
                            Found = true;
                            System.out.println();
                            System.out.println("Input date (DD/MM/YYYY)");
                            System.out.print("> ");
                                String InputDate = Input.nextLine();
                            
                            System.out.println();
                            System.out.println("Input start hour");
                            System.out.print("> ");
                                int InputStartHour = Input.nextInt();
                            System.out.println();
                            System.out.println("Input start minute");
                            System.out.print("> ");
                                int InputStartMin = Input.nextInt();
                            System.out.println();
                            System.out.println("Input finish hour");
                            System.out.print("> ");
                                int InputFinishHour = Input.nextInt();
                            System.out.println();
                            System.out.println("Input finish minute");
                            System.out.print("> ");
                                int InputFinishMin = Input.nextInt();

                            LocalTime NewStartHour = LocalTime.of(InputStartHour,InputStartMin);
                            LocalTime NewFinishHour = LocalTime.of(InputFinishHour, InputFinishMin);
                            
                            System.out.println("");
                            RPLManagement.AddLabSchedule(UserFound, InputDate, NewStartHour, NewFinishHour);
                            System.out.println("Lab RPL has been scheduled for " + UserFound.getName() + " , " + InputDate + ", starts from " + NewStartHour + " until " + NewFinishHour);
                            
                            Input.nextLine();
                            System.out.println("Press enter to continue");
                            Input.nextLine();
                            break;
                        }
                    }
                    if (!Found) {
                        System.out.println("ID not found");
                        System.out.println("Press enter to continue");
                        Input.nextLine(); 
                    }
                }
                break; 

                case 5: {
                    RPLManagement.ShowAllEquipment();
                    System.out.println("Press enter to continue");
                    Input.nextLine();
                }
                break;

                case 6:{
                    RPLManagement.ShowAllUsers();
                    System.out.println("Press enter to continue");
                    Input.nextLine();
                }
                break;

                case 7:{
                    RPLManagement.ShowAllSchedules();
                    System.out.println("Press enter to continue");
                    Input.nextLine();
                }
                break;

                case 8:{
                    System.out.println("Thank you");
                    Home = "N";
                }
                default : 
                    System.out.println("Input invalid");
                
            }
        }   
    }
}   
