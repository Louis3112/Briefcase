package Tugas5_OOP;

class RPL extends Lab{

    class Computer extends Lab.Equipment{
        private String Processor;
        private String RAM;
        private String Memory;

        Computer (String Name, String ID, String Processor, String RAM, String Memory){
            super(Name,ID);
            this.Processor = Processor;
            this.RAM = RAM;
            this.Memory = Memory;
        }

        public void setProcessor(String Processor){
            this.Processor = Processor;
        }
        public String getProcessor(){
            return this.Processor;
        }

        public void setRAM(String RAM){
            this.RAM = RAM;
        }
        public String getRAM(){
            return this.RAM;
        }

        public void setMemory(String Memory){
            this.Memory = Memory;
        }
        public String getMemory(){
            return this.Memory;
        }

        public void getAllInfo(){
            System.out.println("Item\t\t: " + getName());
            System.out.println("ID\t\t: " + getID());
            System.out.println("Processor\t: " + this.Processor);
            System.out.println("RAM\t\t: " + this.RAM);
            System.out.println("Memory\t\t: " + this.Memory);
            System.out.println("Condition\t: " + getCondition());
            System.out.println("");
        }
    }

    class Lecturer extends Lab.User{
        private String Subject;
        private Lab.User PICStudent;

        public Lecturer(String Name, String IDUser, String Subject) {
            super(Name,IDUser);
            this.Subject = Subject;
            setRoleLecturer();
        }

        public void setSubject(String Subject){
            this.Subject = Subject;
        }
        public String getSubject(){
            return this.Subject;
        }
        
        public void setPICStudent(Lab.User PICStudent){
            this.PICStudent = PICStudent;
        }
        public Lab.User getPICStudent(){
            return PICStudent;
        }

        public void getAllInfo(){
            System.out.println("Name\t\t: " + getName());
            System.out.println("ID User\t\t: " + getIDUser());
            System.out.println("Role\t\t: " + getRole());
            System.out.println("Subject\t\t: " + this.Subject);
            if(this.PICStudent != null){
                System.out.println("PIC Student\t: " + PICStudent.getName() + " (ID: " + PICStudent.getIDUser() + ")");
            }
            else{
                System.out.println("PIC Student\t: Not assigned yet");
            }
            System.out.println("");
        }

    }

    class Student extends Lab.User{
        private String Class;
        private Lab.User Lecturer;

        public Student(String Name, String IDUser,String Class){
            super(Name, IDUser);
            this.Class = Class;
            setRoleStudent();
        }

        public void setClass(String Class){
            this.Class = Class;
        }

        public String getClassStudent(){
            return this.Class;
        }

        public void setLecturer(Lab.User Lecturer){
            this.Lecturer = Lecturer;
        }
        public Lab.User getLecturer(){
            return this.Lecturer;
        }

        public void getAllInfo(){
            System.out.println("Name\t\t: " + getName());
            System.out.println("ID User\t\t: " + getIDUser());
            System.out.println("Role\t\t: " + getRole());
            System.out.println("Class\t\t: " + this.Class);
            if(this.Lecturer != null){
                System.out.println("Lecturer\t: " + this.Lecturer.getName() + " (ID: " + Lecturer.getIDUser() + ")");
            }
            else{
                System.out.println("Lecturer\t: Not assigned yet");
            }
            System.out.println("");
        }
    }
}
