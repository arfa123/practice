const functions = require('firebase-functions');
const admin = require('firebase-admin');
admin.initializeApp(functions.config().firebase)

exports.sanitize = functions.database.ref(`/user/{userId}`).onWrite((event) => {

        // let post = event.data.val();
        // post.email = "flaskdjflksdjf"
        console.log("sdsd",event)
        return
    })

