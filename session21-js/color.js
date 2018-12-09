// 1. Gerenate colors
var generateColor;
var Score = 0;

function generateColor() {
    var r = Math.floor(Math.random() * 255);
    var g = Math.floor(Math.random() * 255);
    var b = Math.floor(Math.random() * 255);

    var rightColorString = `rgb(${r}, ${g}, ${b})`;
    var ballColorString = document.getElementById('color_string');
    ballColorString.innerHTML = `rgb(${r}, ${g}, ${b})`

    var ballContainerEL = document.getElementById('ball_container');
    var ballEls = ballContainerEL.getElementsByClassName('ball');
    rightColorIndex = Math.floor(Math.random() * 3); // 0 -> 2.99999999 // 0 -> 2

    for (var i = 0; i < ballEls.length; i++) {
        if (i != rightColorIndex) {
            var error1 = Math.random() * 100 + 25;
            var x = Math.random();

            if (x > 0.5) {
                var error1 = Math.random() * 80 + 24;
                error1 = -error1;
            }

            if (x > 0.5) {
                var error2 = Math.random() * 120 + 25;
                error2 = -error2;
            }

            if (x > 0.5) {
                var error3 = Math.random() * 140 + 26;
                error3 = -error3;
            }

            var wrongColor1 = `rgb(${r + error1}, ${g + error2}, ${b = error3})`;
            ballEls[i].style.backgroundColor = wrongColor1;
        }

        else {
            ballEls[rightColorIndex].style.backgroundColor = rightColorString;
        }
    }
}

function setupEvent() {
    var ballContainerEL = document.getElementById('ball_container');
    var ballEls = document.getElementsByClassName('ball');
    for (var i = 0; i < ballEls.length; i++) {
        ballEls[i].addEventListener('click', function (e) {
            var ball = e.target;
            var ballIndex = ball.getAttribute('index');

            if (ballIndex == rightColorIndex) {
                Score++;
            }

            else {
                Score = 0;
            }
            var scoreEl = document.getElementById('score');
            scoreEl.textContent = `SCORE : ${Score}`;
            generateColor();
            timeOut();
        });
    }

}

function timeOut() {
    var maxSecond = 10;
    var countDownDiv = document.getElementById('countdown');
    countDownDiv.innerHTML = maxSecond;

    var countDown = setInterval(function () {
        maxSecond = maxSecond - 1;
        countDownDiv.innerHTML = maxSecond;
        if (maxSecond == 0) {
            clearInterval(countDown);
            countDownDiv.innerHTML = 'Time out';
        }
    }, 1000)
}

generateColor();
setupEvent();
timeOut();