const cacheName = "demoApp";
const filesToCache = [
	"/",
	"/app.js",
	"/style.css",
	"/index.html"
];

self.addEventListener("activate", (e) => {
	console.log("Service Worker activated");
});

self.addEventListener("install", (e) => {
	console.log("Service Worker Install");
	e.waitUntil(
		caches.open(cacheName)
			.then((cache) => {
				console.log("Service Worker Caching app shell");
				return cache.addAll(filesToCache);
			})
	);
});

self.addEventListener("fetch", (e) => {
	console.log("Service Worker Fetch: ", e.request.url);
	e.respondWith(
		caches.match(e.request)
			.then((response) => {
				return response || fetch(e.request);
			})
	);
});