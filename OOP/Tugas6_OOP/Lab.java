package Tugas6_OOP;

import java.time.LocalTime;
import java.util.ArrayList;
import java.util.List;

class Lab{
    abstract class absEquipment{
        protected String Name;
        protected String ID;
        protected String Condition;

        public abstract void setNameID(String Name, String ID);
        public abstract void setConditionOK();
        public abstract void setConditionSD();
        public abstract void setConditionHD();

        public abstract String getName();
        public abstract String getID();
        public abstract String getCondition();
    }
    
    abstract class absUser{
        protected String Name;
        protected String IDUser;
        protected String Role;

        public abstract void setName(String Name);
        public abstract void setIDUser(String IDUser);
        public abstract void setRoleAssistance();
        public abstract void setRoleLecturer();
        public abstract void setRoleStudent();

        public abstract String getName();
        public abstract String getIDUser();
        public abstract String getRole();
    }

    interface ISchedule{
        public void setUser(User User);
        public void setDateSchedule(String DateSchedule);
        public void setTime(LocalTime StartTime, LocalTime FinishTime);

        public String getUserName();
        public String getDate();
        public LocalTime getStartTime();
        public LocalTime getFinishTime();
    }

    interface IManagement{
        public void setEquipment(List<Equipment> Equipments);
        public void setUser(List<User> Users);
        public void setLabSchedule(List<LabSchedule> LabSchedules);
        
        public List<Equipment> getEquipment();
        public List<User> getUser();
        public List<LabSchedule> getLabSchedule();

        public void AddEquipment(Equipment Equipment);
        public void AddUser(User User);

        public void AddLabSchedule(User User, String DateSchedule, LocalTime StartTime, LocalTime FinishTime);
        public void FinishSchedule(User User);
        
        public void ShowAllEquipment();
        public void ShowAllUsers();
        public void ShowAllSchedules();

    }
    class Equipment extends absEquipment{
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
            System.out.println("Item\t\t: " + this.Name);
            System.out.println("ID\t\t: " + this.ID );
            System.out.println("Condition\t: " + this.Condition);
            System.out.println("");
        }     

    }
    
    class User extends absUser{
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
        public void setRoleStudent(){
            this.Role = "Student";
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
            System.out.println("Name\t\t: " + this.Name);
            System.out.println("ID User\t\t: " + this.IDUser);
            System.out.println("Role\t\t: " + this.Role);
            System.out.println("");
        }
    }

    class LabSchedule implements ISchedule{
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

    class LabManagement implements IManagement{
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
