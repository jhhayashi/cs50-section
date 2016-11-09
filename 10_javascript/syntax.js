var firstName = "Jordan";
var lastName = 'Hayashi';
var interests = ["coding", 42, true, function() { console.log("lolz"); }];

var jordan = {
    name: firstName + " " + lastName,
    interests: []
};

for (var i = 0; i < interests.length; i++) {
    jordan.interests.push(interests[i]);
}

jordan.interests[2]();
