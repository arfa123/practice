import React from 'react';

const NotFoundPage = ({staticContext = {}}) => {
    console.log("context",staticContext)
    staticContext.notFound = true;
    return <h1>This page is not available</h1>
}

export default {
    component: NotFoundPage
}