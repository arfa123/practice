interface userInterface{
    name: string;
    email: string;
    num: number;
    register();
}
class user implements userInterface{
    name: string;
    email: string;
    num: number;
    constructor(name:string, email:string, num:number){
        this.name = name;
        this.email = email;
        this.num = num;
        console.log(`User created ${this.name}`)
    }
    register(){
        console.log(`${this.name} is now registered`)
    }
}
// let John = new user("John", "John@gmail.com", 1234);
// John.register();

class member extends user{
    id: number;
    constructor(id:number, name:string, email:string, num:number){
        super(name, email, num)
        this.id = 43;
    }
    pay(){
        super.register()
    }
}

let Tariq = new member(12,"Tariq","tariq@gmail.com",1234);
Tariq.pay()