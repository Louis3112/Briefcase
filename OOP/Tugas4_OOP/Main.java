package Tugas4_OOP;

import java.time.LocalTime;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Lab{
    class Equipment{
        private String Name;
        private String ID;
        private String Condition;

        Equipment(String Name, String ID){
            this.Name = Name;
            this.ID = ID;
            this.Condition = "New";
        }
        
        public void setNameID(String Name, String ID){
            this.Name =  Name;
            this.ID = ID;
        }
        public void setConditionOK(){ // Condition OK
            this.Condition = "OK";
        }
        public void setConditionSD(){ // Slightly Damaged
            this.Condition = "Slightly Damaged";
        }
        public void setConditionHD(){ // Heavily Damaged
            this.Condition = "Heavily Damaged"; 
        }
        
        public String getName(){
            return this.Name;
        }   
        public String getID(){
            return this.ID;
        }
        public String getCondition(){
            return this.Condition;
        }
        public void getAllInfo(){
            System.out.println("Item: " + this.Name);
            System.out.println("ID: " + this.ID );
            System.out.println("Condition: " + this.Condition);
            System.out.println("");
        }     
    }
    
    class User{
        private String Name;
        private String IDUser;
        private String Role;

        User(String Name, String IDUser){
            this.Name = Name;
            this.IDUser = IDUser;
            this.Role = "Visitor";
        }
        
        public void setName(String Name){
            this.Name = Name;
        }
        public void setIDUser(String IDUser){
            this.IDUser = IDUser;
        }
        public void setRoleAssistance(){
            this.Role = "Assistance Lab";
        }
        public void setRoleLecturer(){
            this.Role = "Lecturer";
        }
        public void setRoleVisitor(){
            this.Role = "Visitor";
        }

        public String getName(){
            return this.Name;
        }
        public String getIDUser(){
            return this.IDUser;
        }
        public String getRole(){
            return this.Role;
        }
        public void getAllInfo(){
            System.out.println("Name: " + this.Name);
            System.out.println("ID User: " + this.IDUser);
            System.out.println("Role : " + this.Role);
            System.out.println("");
        }
    }

    class LabSchedule{
        private User User;
        private String DateSchedule;
        private LocalTime StartTime;
        private LocalTime FinishTime;

        LabSchedule(User User, String DateSchedule, LocalTime StartTime, LocalTime FinishTime) {
            this.User = User;
            this.DateSchedule = DateSchedule;
            this.StartTime = StartTime;
            this.FinishTime = FinishTime;
        }
        
        public void setUser(User User){
            this.User = User;
        }
        public void setDateSchedule(String DateSchedule){
            this.DateSchedule = DateSchedule;
        }
        public void setTime(LocalTime StartTime, LocalTime FinishTime){
            this.StartTime = StartTime;
            this.FinishTime = FinishTime;
        }

        public String getUserName(){
            return this.User.Name;
        }
        public String getDate(){
            return this.DateSchedule;
        }
        public LocalTime getStartTime(){
            return this.StartTime;
        }
        public LocalTime getFinishTime(){
            return this.FinishTime;
        }
        public void getAllInfo(){
            System.out.println("Name: " + this.User.Name);
            System.out.println("ID: " + this.User.IDUser);
            System.out.println("Date of Usage: " + this.DateSchedule);
            System.out.println("Start: " + this.StartTime);
            System.out.println("End: " + this.FinishTime);
            System.out.println("");
        }
    }

    class LabManagement{
        private List<Equipment> Equipments;
        private List<User> Users;
        private List<LabSchedule> LabSchedules;

        LabManagement(){
            Equipments = new ArrayList<>();
            Users = new ArrayList<>();
            LabSchedules = new ArrayList<>();
        }

        public void setEquipment(List<Equipment> Equipments){
            this.Equipments = Equipments;
        }
        public void setUser(List<User> Users){
            this.Users = Users;
        }
        public void setLabSchedule(List<LabSchedule> LabSchedules){
            this.LabSchedules = LabSchedules;
        }
        
        public List<Equipment> getEquipment(){
            return Equipments;
        }
        public List<User> getUser(){
            return Users;
        }
        public List<LabSchedule> getLabSchedule(){
            return LabSchedules;
        }

        public void AddEquipment(Equipment Equipment){
            Equipments.add(Equipment);
        }

        public void AddUser(User User){
            Users.add(User);
        }

        public void AddLabSchedule(User User, String DateSchedule, LocalTime StartTime, LocalTime FinishTime){
            LabSchedules.add(new LabSchedule(User,DateSchedule,StartTime,FinishTime));
        }
        
        public void FinishSchedule(User User){
            System.out.println("Thank you for using Lab RPL, make sure to check your belongings before you leave the Lab");
        }
        
        public void ShowAllEquipment(){
            System.out.println("All equipments that registered in Lab RPL: ");
            System.err.println("");
            for(Equipment Equipments : Equipments){
                Equipments.getAllInfo();
            }
        }
        public void ShowAllUsers(){
            System.out.println("All users that registered in Lab RPL: ");
            System.err.println("");
            for (User User: Users){
                User.getAllInfo();
            }
        }

        public void ShowAllSchedules(){
            System.out.println("All schedules that registered in Lab RPL: ");
            System.err.println("");
            for(LabSchedule Schedules : LabSchedules){
                Schedules.getAllInfo();
            }
        }
    }
}

class Main{
    public static void main(String[] args){
        try (Scanner Input = new Scanner(System.in)) {
            Lab RPL = new Lab();
            Tugas4_OOP.Lab.LabManagement RPLManagement = RPL.new LabManagement();

            Tugas4_OOP.Lab.Equipment PC1 = RPL.new Equipment("Asus All In One V222GAK", "042.01.0500.4000901.005.2018");
            Tugas4_OOP.Lab.Equipment PC2 = RPL.new Equipment("Asus All In One V222GAK", "042.01.0500.4000902.005.2018");
            Tugas4_OOP.Lab.Equipment PC3 = RPL.new Equipment("Asus All In One V222GAK", "042.01.0500.4000903.005.2018");
            Tugas4_OOP.Lab.Equipment PC4 = RPL.new Equipment("Asus All In One V222GAK", "042.01.0500.4000904.005.2018");
            RPLManagement.AddEquipment(PC1);
            RPLManagement.AddEquipment(PC2);
            RPLManagement.AddEquipment(PC3);
            RPLManagement.AddEquipment(PC4);

            Tugas4_OOP.Lab.User Lecturer1 = RPL.new User("I Made Suartana S.Kom, M.Kom", "198411242015041003");
                Lecturer1.setRoleLecturer();
                RPLManagement.AddUser(Lecturer1);

            Tugas4_OOP.Lab.User Assistance1 = RPL.new User("Cornelius Louis Nathan", "23051204085");
                Assistance1.setRoleAssistance();
                RPLManagement.AddUser(Assistance1);
            
            Tugas4_OOP.Lab.User Assistance2 = RPL.new User("Rayhan Atmadja", "23051204075");
                Assistance2.setRoleAssistance();
                RPLManagement.AddUser(Assistance2);    
            
            Tugas4_OOP.Lab.User Assistance3 = RPL.new User("Raffi Akhdil Putra", "23051204090");
                Assistance3.setRoleAssistance();
                RPLManagement.AddUser(Assistance3);
   
            Tugas4_OOP.Lab.User Visitor1 = RPL.new User("Anita Qoiriah S.Kom, M.Kom", "196901251995122001");
                Visitor1.setRoleLecturer();
                RPLManagement.AddUser(Visitor1);
            
            String ScheduleFromBuAnita = ("5 October 2024");
            LocalTime StartTimeBuAnita = LocalTime.of(7,30);
            LocalTime FinishTimeBuAnita = LocalTime.of(9,0);
            
            RPLManagement.AddLabSchedule(Visitor1, ScheduleFromBuAnita, StartTimeBuAnita, FinishTimeBuAnita);
            
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
                        System.out.println("Input new equipment");
                        System.out.print("> ");
                            String NewEquipmentName = Input.nextLine();
                        
                        System.out.println("Input ID");
                        System.out.print("> ");
                            String NewEquipmentID = Input.nextLine();
                        
                        Lab.Equipment NewEquipment = RPL.new Equipment(NewEquipmentName, NewEquipmentID);
                        RPLManagement.AddEquipment(NewEquipment);
                        System.out.println(NewEquipmentName + " with ID: " + NewEquipmentID + " has added successfully");
                        System.out.println("Press Enter to continue");
                        Input.nextLine();
                    }
                    break;
                    
                    case 2 : {
                        System.out.println("");
                        System.out.println("Input the ID equipment which do you want to update");
                        System.out.print("> ");
                            String ChangeID = Input.nextLine();
                        
                        boolean Found = false;
                        for(Lab.Equipment EquipmentFound : RPLManagement.getEquipment()){
                            if (EquipmentFound.getID().equals((ChangeID))) {
                                Found = true;
                                System.out.println("How is the condition of equipment with ID " + EquipmentFound.getID());
                                System.out.println("1. OK");
                                System.out.println("2. Slightly Damaged");
                                System.out.println("3. Heavily Damaged");
                                System.out.print("> ");
                                    int ConditionOption = Input.nextInt();

                                if(ConditionOption == 1){
                                    EquipmentFound.setConditionOK();
                                    System.out.println("Condition " + EquipmentFound.getID() + " set to OK");
                                }
                                if(ConditionOption == 2){
                                    EquipmentFound.setConditionSD();
                                    System.out.println("Condition " + EquipmentFound.getID() + " set to Slightly Damaged");
                                }                            
                                if(ConditionOption == 3){
                                    EquipmentFound.setConditionHD();
                                    System.out.println("Condition " + EquipmentFound.getID() + " set to Heavily Damaged");
                                }
                                else{
                                    System.out.println("Input Invalid");
                                }

                                System.out.println("Press Enter to continue");
                                Input.nextLine();
                                Input.nextLine();
                                break;
                            }
                        }
                        if (!Found) {
                            System.out.println("ID Not Found");
                            System.out.println("Press Enter to continue");
                            Input.nextLine(); 
                        }
                    }
                    break;

                    case 3 : {
                        System.out.println("");
                        System.out.println("Input name");
                        System.out.print("> ");
                            String NewUserName = Input.nextLine();
                        
                        System.out.println("Input ID");
                        System.out.print("> ");
                            String NewUserID = Input.nextLine();
                        
                        Lab.User NewUser = RPL.new User(NewUserName,NewUserID);

                        System.out.println("What is his/her role");
                        System.out.println("1. Lecturer");
                        System.out.println("2. Assistance");
                        System.out.println("3. Visitor");
                        System.out.print("> ");
                            int NewUserRole = Input.nextInt();
                            Input.nextLine();

                            if(NewUserRole == 1){
                                NewUser.setRoleLecturer();
                            }
                            else if(NewUserRole == 2){
                                NewUser.setRoleAssistance();
                            }
                            else{
                                NewUser.setRoleVisitor();
                            }
                        
                        RPLManagement.AddUser(NewUser);
                        System.out.println("");
                        System.out.println(NewUserName + " with ID: " + NewUserID + " has added successfully");

                        System.out.println("Press Enter to continue");
                        Input.nextLine();
                    }
                    break;
                    
                    case 4 : {
                        System.out.println();
                        System.out.println("Input ID");
                        System.out.print("> ");
                            String InputID = Input.nextLine();
                        
                        boolean Found = false;
                        for(Lab.User UserFound: RPLManagement.getUser()){
                            if(UserFound.getIDUser().equals(InputID)){
                                Found = true;
                                System.out.println("Input date (DD/MM/YYYY)");
                                System.out.print("> ");
                                    String InputDate = Input.nextLine();
                                
                                System.out.println("Input start hour");
                                System.out.print("> ");
                                    int InputStartHour = Input.nextInt();
                                System.out.println("Input start minute");
                                System.out.print("> ");
                                    int InputStartMin = Input.nextInt();
                                System.out.println("Input finish hour");
                                System.out.print("> ");
                                    int InputFinishHour = Input.nextInt();
                                System.out.println("Input finish minute");
                                System.out.print("> ");
                                    int InputFinishMin = Input.nextInt();

                                LocalTime NewStartHour = LocalTime.of(InputStartHour,InputStartMin);
                                LocalTime NewFinishHour = LocalTime.of(InputFinishHour, InputFinishMin);

                                RPLManagement.AddLabSchedule(UserFound, InputDate, NewStartHour, NewFinishHour);
                                System.out.println("Lab RPL has been scheduled for " + UserFound.getName() + " , " + InputDate + ", starts from " + NewStartHour + " until " + NewFinishHour);
                                
                                Input.nextLine();
                                System.out.println("Press Enter to continue");
                                Input.nextLine();
                                break;
                            }
                        }
                        if (!Found) {
                            System.out.println("ID Not Found");
                            System.out.println("Press Enter to continue");
                            Input.nextLine(); 
                        }
                    }
                    break; 

                    case 5: {
                        RPLManagement.ShowAllEquipment();
                        System.out.println("Press Enter to continue");
                        Input.nextLine();
                    }
                    break;

                    case 6:{
                        RPLManagement.ShowAllUsers();
                        System.out.println("Press Enter to continue");
                        Input.nextLine();
                    }
                    break;

                    case 7:{
                        RPLManagement.ShowAllSchedules();
                        System.out.println("Press Enter to continue");
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
}   