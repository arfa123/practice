import firebase from "firebase";

const firebaseConfig = {
	apiKey: "AIzaSyAEF4bdK1sQKTujSscwEyjxwtaZYWFWzOs",
	authDomain: "to-do-app-2ab0f.firebaseapp.com",
	databaseURL: "https://to-do-app-2ab0f.firebaseio.com",
	projectId: "to-do-app-2ab0f",
	storageBucket: "to-do-app-2ab0f.appspot.com",
	messagingSenderId: "1007507962543",
	appId: "1:1007507962543:web:70719bc8cc65fc59b9725a"
};

firebase.initializeApp(firebaseConfig);
const messaging = firebase.messaging();

export function initNotification() {
	Notification.requestPermission().then((permission) => {
		console.log(permission)
		if (permission === "granted") {
			messaging.getToken().then((currentToken) => {
				if (currentToken) {
					console.log("TOKEN")
					console.log(currentToken);
				} else {
					console.log('No Instance ID token available. Request permission to generate one.');

				}
			}).catch((err) => {
				console.log('An error occurred while retrieving token. ', err);
			});
		}
	})
}