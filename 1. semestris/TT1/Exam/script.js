var home = document.getElementById("home");
var scouting = document.getElementById("scouting");
var running = document.getElementById("running");
var dancing = document.getElementById("dancing");

function darkMode() {
  var element = document.body;
  element.classList.toggle("dark-mode");
}

function showHome(){
  home.style.display = "block"; scouting.style.display = "none"; running.style.display = "none"; dancing.style.display = "none";
}
function showScouting(){
  home.style.display = "none";scouting.style.display = "block";running.style.display = "none";dancing.style.display = "none";
}
function showRunning(){
  home.style.display = "none";scouting.style.display = "none";running.style.display = "block";dancing.style.display = "none";
}
function showDancing(){
  home.style.display = "none";scouting.style.display = "none";running.style.display = "none";dancing.style.display = "block";
}

document.getElementById('read-more-button').addEventListener('click', function() {
  var moreText = document.querySelector('.more-text');
  if (moreText.style.display === 'none' || moreText.style.display === '') {
    moreText.style.display = 'inline'; // Show the hidden content
    this.textContent = 'Hi Hi'; // Change button text
  } else {
    moreText.style.display = 'none'; // Hide the additional content
    this.textContent = 'Check'; // Change button text
  }
});
function changeText() {
  var password = document.getElementById("passwordInput").value;
  var newText = document.getElementById("textInput").value;
  
  if (password === "123456") {
  document.getElementById("outputText").textContent = newText;
  document.getElementById("passwordInput").value = "";
  document.getElementById("textInput").value = "";
  } else {
      alert("Incorrect password. Quote will no be changed.");
  }
}