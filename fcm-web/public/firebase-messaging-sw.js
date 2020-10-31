importScripts('https://www.gstatic.com/firebasejs/7.17.1/firebase-app.js');
importScripts('https://www.gstatic.com/firebasejs/7.17.1/firebase-messaging.js');

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
firebase.messaging();