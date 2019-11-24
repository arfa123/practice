class SmartPhone{
	bool isAndroid;
	int model;
	String brand;

	makeCall(int phoneNumber){
		print("Calling $phoneNumber from $brand smartphone");
	}

	installApp(String appName){
		print("Installing $appName on $brand smartphone");
	}
}

void main(){
	SmartPhone galaxy = new SmartPhone();
	galaxy.isAndroid = true;
	galaxy.model = 2019;
	galaxy.brand = "Samsung";
	print("Is Android: ${galaxy.isAndroid}\nModel: ${galaxy.model}\nBrand: ${galaxy.brand}");
	galaxy.makeCall(1234567);
	galaxy.installApp("Google Chrome");

	SmartPhone iphone = new SmartPhone();
	iphone.isAndroid = false;
	iphone.model = 2015;
	iphone.brand = "Apple";
	print("\nIs Android: ${iphone.isAndroid}\nModel: ${iphone.model}\nBrand: ${iphone.brand}");
	iphone.makeCall(1234567);
	iphone.installApp("Google Chrome");
}