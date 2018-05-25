var __extends = (this && this.__extends) || (function () {
    var extendStatics = Object.setPrototypeOf ||
        ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
        function (d, b) { for (var p in b) if (b.hasOwnProperty(p)) d[p] = b[p]; };
    return function (d, b) {
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
var user = /** @class */ (function () {
    function user(name, email, num) {
        this.name = name;
        this.email = email;
        this.num = num;
        console.log("User created " + this.name);
    }
    user.prototype.register = function () {
        console.log(this.name + " is now registered");
    };
    return user;
}());
// let John = new user("John", "John@gmail.com", 1234);
// John.register();
var member = /** @class */ (function (_super) {
    __extends(member, _super);
    function member(id, name, email, num) {
        var _this = _super.call(this, name, email, num) || this;
        _this.id = 43;
        return _this;
    }
    member.prototype.pay = function () {
        _super.prototype.register.call(this);
    };
    return member;
}(user));
var Tariq = new member(12, "Tariq", "tariq@gmail.com", 1234);
Tariq.pay();
