if ("serviceWorker" in navigator) {
	navigator.serviceWorker.register("serviceWorker.js")
		.then(() => {
			console.log("Service worker registered Successfully");
		})
		.catch((e) => {
			console.log("Service worker not Registered error: ", e);
		});
} else {
	console.log("Service Worker is not available");
}