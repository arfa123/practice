if ("serviceWorker" in navigator) {
	navigator.serviceWorker.register("./serviceWorker.js")
		.then(() => {
			console.log("Service Worker Registered Successfully");
		})
		.catch((error) => {
			console.log("Service Worker not Registered Error: ", error);
		});
} else {
	console.log("Service Worker not available");
}