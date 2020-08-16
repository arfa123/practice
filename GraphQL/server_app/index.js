const { ApolloServer, gql } = require('apollo-server');

const students = [
	{
		"id": 0,
		"name": "Ahmed",
		"email": "ahmed@gamil.com",
		"age": 21
	},
	{
		"id": 1,
		"name": "Ali",
		"email": "ali@gamil.com",
		"age": 24
	},
	{
		"id": 2,
		"name": "Mohsin",
		"email": "Mohsin@gamil.com",
		"age": 26
	},
	{
		"id": 3,
		"name": "Wasim",
		"email": "Wasim@gamil.com",
		"age": 23
	}
];

const resolvers = {
	Query: {
		students: () => students
	}
};

const typeDefs = gql`
	type Student {
		id: Int
		name: String
		email: String
		age: Int
	}
	type Query {
		students: [Student]
	}
`;

// The ApolloServer constructor requires two parameters: your schema
// definition and your set of resolvers.
const server = new ApolloServer({ typeDefs, resolvers });

// The `listen` method launches a web server.
server.listen().then(({ url }) => {
	console.log(`🚀  Server ready at ${url}`);
});