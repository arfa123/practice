import React from "react";
import { useQuery, gql } from '@apollo/client';

const GET_STUDENTS = gql`
	query GetAllStudents {
		students {
			id,
			name,
			email,
			age
		}
	}
`;

function Students() {
	const { loading, error, data } = useQuery(GET_STUDENTS);

	if (loading) return <h1>Loading....</h1>

	if (error) return <h1>Error</h1>

	const { students } = data;

	return (
		<div>
			<h1>Students List</h1>
			<table>
				<thead>
					<tr>
						<th>Name</th>
						<th>Email</th>
						<th>Age</th>
					</tr>
				</thead>
				<tbody>
					{
						students.map((student) => {
							return (
								<tr key={student.id}>
									<td>{student.name}</td>
									<td>{student.email}</td>
									<td>{student.age}</td>
								</tr>
							);
						})
					}
				</tbody>
			</table>
		</div>
	);
}

export default Students;