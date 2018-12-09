var url = 'https://gateway.marvel.com:443/v1/public/characters';
var publicKey = '6eeaa0d51f2cbcb8540000c895d5cfa8';
var privateKey = 'e49743448603a4e1c15b0a8306aa5f44fd6a9046';
function renderCharacters(characters) {
    var content = document.getElementById("content");
    content.textContent="";
    for(var i = 0; i < characters.length; i++) {
        var character = characters[i];
        var imgScr = character.thumbnail.path + "." + character.thumbnail.extension;
        var name = character.name;
        var comicsAvailable = character.comics.available;
        var characterHTMl = `
        <a href="./char.html">
        <div id=${character.id} class="char">
        
            <img src="${imgScr}" width=200 height=200 class="pic"/>
            <h2 class="name">${name}</h2>
            <h3 class="comics"> Comics : ${comicsAvailable}</h3>
        </div>
        </a>
        `;
        
        
        content.insertAdjacentHTML("beforeend", characterHTMl);
    }
}
function fetchCharacters() {
    var key = marvelKey(privateKey, publicKey);
    var fullUrl = `${url}?${key}`;
    console.log(fullUrl);
    
    sendGetRequest(fullUrl, function (responseData) {
        var characters = responseData.data.results;
        console.log(responseData);
        
        renderCharacters(characters);
        CharIn4();

    });
}
function setupEvents() {
    var btnSearch = document.getElementById("btn_search");
    btnSearch.addEventListener("click", function(e) {
        var searchBar = document.getElementById("search_bar");
        var searchString = searchBar.value;
        var key = marvelKey(privateKey, publicKey);
        var fullUrl = `${url}?${key}`;
        if (searchString != "") {
            fullUrl += `&nameStartsWith=${searchString}`;
        }   
        sendGetRequest(fullUrl, function(responseData) {
            var characters = responseData.data.results;
            renderCharacters(characters);
            CharIn4(characters);
        });
    });
    
}
fetchCharacters();
setupEvents();


function  CharIn4(characters) {
    var chars = document.getElementsByClassName("char");
    console.log(chars);
    
    for (var i=0; i<chars.length; i++) {
        // console.log(chars[i]);
        chars[i].addEventListener('click', function(e){
            var ID = e.target.parentNode.getAttribute('id');
            if (ID !== 'content') {
                localStorage.setItem('idCharacter', ID);
            }
        })
    }
    }
