import React from 'react';

const HomePage = () => {
    return (<div>
        I am now the Home component
        <button onClick={() => console.log("Hi there!")}>Press Me!</button>
    </div>)
}

export default {component: HomePage};