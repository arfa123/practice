import React from "react";
import Navbar from "./nav";

export default function ({ children }) {
	return (
		<div>
			<Navbar />
			{children}
		</div>
	);
}