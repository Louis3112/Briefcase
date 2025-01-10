package Game;

class Hero{
    private String Name;
    private int BaseAttack;
    private int BaseHP;
    private int Level;
    private int IncHealth;
    private int IncAttack;
    private int TotalDamaged;
    private Weapon EquippedWeapon;
    private Armor EquippedArmor;

    Hero(String Name, int BaseAttack, int BaseHP){
        this.Name = Name;
        this.BaseAttack = BaseAttack;
        this.BaseHP = BaseHP;
        this.Level = 0;
        this.IncAttack = 20;
        this.IncHealth = 20;
    }
    public void SetWeapon(Weapon EquippedWeapon){
        this.EquippedWeapon = EquippedWeapon;
    }
    public void SetArmor(Armor EquippedArmor){
        this.EquippedArmor = EquippedArmor;
    }

    public String getName() {
        return Name;
    }
    private int getBaseAttack() {
        return BaseAttack;
    }
    private int getBaseHP() {
        return BaseHP;
    }
    private int getLevel() {
        return Level;
    }
    private int getIncAttack() {
        return IncAttack;
    }
    private int getIncHealth() {
        return IncHealth;
    }
    private int getTotalDamaged() {
        return TotalDamaged;
    }
    
    public void Display(){
        System.out.println("\n     " + this.getName());
        System.out.println("Attack\t: " + this.MaxAttack());
        System.out.println("HP\t: " + this.HealthNow() + "/" + this.MaxHealth());
        System.out.println("Level\t: " + this.getLevel());
    }

    private int MaxAttack(){
        return this.getBaseAttack() + this.EquippedWeapon.getAttack() + this.getLevel()*this.getIncAttack();
    }
    private int MaxHealth(){
        return this.getBaseHP() + this.EquippedArmor.getDeff() + this.Level*this.getIncHealth();
    }
    private void LevelUp(){
        this.Level++;
    }

    public void Damaged(Boss Enemy){
        this.TotalDamaged += Enemy.getAttack();
    }
    private int HealthNow(){
        return this.MaxHealth() - this.getTotalDamaged();
    }

    public void Attack(Boss Enemy){
        System.out.println("\n" + this.getName() + " is attacking " + Enemy.getName());
        System.out.println(this.getName() + " deals " + this.MaxAttack());
        Enemy.Damaged(this.MaxAttack());
        Enemy.Display();

        this.LevelUp();
    }
    public void Defence(String Enemy,int Attack){
        int Defence = this.EquippedArmor.getDeff();
        int Damage = Attack;
        int DefencePower = Defence/5;

        if(Damage > DefencePower){
            Damage -= DefencePower;
        }
        else{
            Damage = 0;
        }
        System.out.println(Enemy + " damaged " + Damage);
        this.TotalDamaged += Damage;
    }

    public boolean IsAlive(){
        if(this.HealthNow() >= 0 ){
            return true;
        }
        else{
            return false;
        }
    }

    void attack(Hero enemy){
		System.out.println("\n" + this.Name + " attack " + enemy.Name);
		enemy.takeDamage(this.BaseAttack);
	}

	void takeDamage(int Damage){
		System.out.println(this.Name + " receive damage " + Damage);
		this.BaseHP = this.BaseHP - Damage;
	}

	void display(){
		System.out.println("\nName: " + this.Name);
		System.out.println("Health: " + this.BaseHP);
		System.out.println("Power: " + this.BaseAttack);
	}
}

class HeroStrength extends Hero{
	String type = "Strength";

	// subclass constructor
	HeroStrength(String nameInput, int attackInput, int healthInput){
		super(nameInput, attackInput, healthInput);
	}

	@Override
	public void Display(){
		System.out.println("Type : " + this.type);
	}
}

class Weapon{
    private String Name;
    private int Attack;

    Weapon(String Name,int Attack){
        this.Name = Name;
        this.Attack = Attack;
    }

    public String getName() {
        return Name;
    }
    public int getAttack() {
        return Attack;
    }
}
class Armor{
    private String Name;
    private int Deff;

    Armor(String Name, int Deff){
        this.Name = Name;
        this.Deff = Deff;
    }

    public String getName() {
        return Name;
    }
    public int getDeff() {
        return Deff;
    }
}

class Boss{
    private String Name;
    private int Attack;
    private int HP;
    private int TotalDamaged;

    Boss(String Name, int Attack, int HP){
        this.Name = Name;
        this.Attack = Attack;
        this.HP = HP;
    }

    public String getName() {
        return Name;
    }
    public int getAttack() {
        return Attack;
    }
    private int getHP() {
        return HP;
    }

    private int HealthNow(){
        return this.getHP() - this.TotalDamaged;
    }

    public void Display(){
        System.out.println("\n     " + this.Name);
        System.out.println("Attack\t: " + this.Attack);
        System.out.println("HP\t: " + HealthNow() + "/"+ this.getHP());
    }
    public void Damaged(int Attack){
        TotalDamaged += Attack;
    }

    public void Attack(Hero Enemy){
        System.out.println("\n" + this.getName() + " is attacking " + Enemy.getName());
        System.out.println(this.getName() + " deals " + this.getAttack());
        Enemy.Defence(this.getName(),this.getAttack());
        Enemy.Display();
    }

    public boolean IsAlive(){
        if(this.HealthNow() >= 0 ){
            return true;
        }
        else{
            return false;
        }
    }
}

public class Game {
    public static void main(String[] args){
        Hero Appolus = new Hero("Appolus", 50, 100);
        Boss NemeanLion = new Boss("Nemean Lion", 100, 500);
        Weapon SpearOfSpartan = new Weapon("Spear of Spartan", 50);
        Armor BreastplateOfAres = new Armor("Breastplate of Ares", 150);
        Hero Galileous = new HeroStrength("Galileous", 50, 100);

        
        Appolus.SetWeapon(SpearOfSpartan);
        Appolus.SetArmor(BreastplateOfAres);
        Galileous.SetWeapon(SpearOfSpartan);
        Galileous.SetArmor(BreastplateOfAres);

        Galileous.Display();
        Appolus.Display();
        NemeanLion.Display();

        while (Appolus.IsAlive() == true && NemeanLion.IsAlive() == true) {
            Appolus.Attack(NemeanLion);
            NemeanLion.Attack(Appolus);
    
            Appolus.Attack(NemeanLion);
            NemeanLion.Attack(Appolus);
    
            Appolus.Attack(NemeanLion);
            NemeanLion.Attack(Appolus);
    
            Appolus.Attack(NemeanLion);
            NemeanLion.Attack(Appolus);

            if(Appolus.IsAlive() != true){
                System.out.println(NemeanLion.getName() + " wins");
            }
            if(NemeanLion.IsAlive() != true){
                System.out.println(Appolus.getName() + " wins");                                    
            }
        }
        
    }
}
