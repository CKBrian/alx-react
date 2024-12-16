import $ from 'jquery';
import _ from 'lodash';


$('body').append('<p>ALX Dashboard</p>')
$('body').append('<p>Dashboard data for the students</p>')
$('body').append('<button id="click-button">Click here to get started</button>')
$('body').append("<p id='count'></p>")
$('body').append('<p>Copyright - ALX</p>')

var count = 0;

const updateCounter = () => {
	count += 1;
	$('#count').text(`${count} clicks on the button`);
}

$('#click-button').on('click', _.debounce(updateCounter, 300));