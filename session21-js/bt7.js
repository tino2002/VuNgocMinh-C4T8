var container = document.getElementById("song_container");
console.log(container);
var song = container.getElementsByClassName("song");
console.log(song);
for (var i = 0; i < song.length; i++) {
    console.log(song[i]);
    var title = song[i].getElementsByClassName("title")[0].textContent;
    var artist = song[i].getElementsByClassName("artist")[0].textContent;
    console.log(title);
    console.log(artist);
}
var btn = document.getElementsByClassName("delbtn");
for (var i = 0; i < btn.length ; i++) {
    var delbtn = btn[i];
    delbtn.addEventListener('click',function(e){
        var btns = e.target;
        var div = btns.parentNode;
        div.remove();
    })
}
var btn2 = document.getElementsByClassName("editbtn");
for (var i = 0; i < btn2.length; i++) {
    
    btn2[i].addEventListener('click',function(e){
        var songId = e.target.parentNode;
        console.log(songId.getAttribute("song_id"));
        
    })
}
var btn3 = document.getElementsByClassName("more");
for (var i = 0; i < song.length; i++) {
    btn3[i].addEventListener("click", function(e){
        // console.log(song[i].getAttribute("song_id"));
        // let title = song[i].getElementsByClassName("title")[0].textContent;
        // let artist = song[i].getElementsByClassName("artist")[0].textContent;
        // console.log(title);
        // console.log(artist);
        console.log(e.target.parentNode);
        
        var morein4 = e.target.parentNode;
        console.log(morein4.getAttribute("song_id"));
        console.log(morein4.getElementsByClassName("title")[0].textContent);
        console.log(morein4.getElementsByClassName("artist")[0].textContent);
        
    })
}
