import React from "react";
import { Link } from "gatsby";
import styles from "./nav.module.css";

export default function Navbar() {
	return (
		<div className={styles.nav}>
			<Link to="/">Home</Link>
			<Link to="/contact">Contact</Link>
			<Link to="/about">About</Link>
		</div>
	);
}