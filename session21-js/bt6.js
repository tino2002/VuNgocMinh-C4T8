var btn = document.getElementsByClassName("remove_button");
for (var i = 0; i < btn.length ; i++) {
    var delbtn = btn[i];
    delbtn.addEventListener('click',function(e){
        var btns = e.target;
        var div = btns.parentNode;
        div.remove();
    })
}