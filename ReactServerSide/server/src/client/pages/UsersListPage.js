import React, { Component } from 'react';
import { connect } from 'react-redux';
import { fetchUsers } from '../actions';

class UsersListPage extends Component{
    componentDidMount(){
        this.props.fetchUsers();
    }
    renderUsers(){
        return this.props.users.map((users) => {
            return(
                <li key={users.id}>{users.name}</li>
            )
        })
    }

    render(){
        return(
            <div>
                Here is a big list of users:
                <ul>{this.renderUsers()}</ul>
            </div>
        )
    }
}

const mapStateToProps = (state) => {
    return {
        users: state.users
    }
}
const loadData = (store) => {
    return store.dispatch(fetchUsers())
}

export default {
    loadData,
    component: connect(mapStateToProps, {fetchUsers})(UsersListPage)
}