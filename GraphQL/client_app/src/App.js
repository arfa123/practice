import React from 'react';
import './App.css';
import { ApolloProvider } from '@apollo/client';
import client from "./config/gql_config";
import Students from "./components/Students";

function App() {
	return (
		<ApolloProvider client={client}>
			<Students />
		</ApolloProvider>
	);
}

export default App;
