
// summary
// provide distance and speed, returns time it would take to travel
function CalculateSpeed(milesRec, speedRec) {
    var f = milesRec / speedRec;
    var u = (f % 1) * 60 / 100;
    var days = 0;
    if (u > 60) {
        u = u - 60;
        f = f + 1;
    }
    if (f > 24) {
        f = f - 24;
        days = days + 1;
    }
    return days + "d " + Math.floor(f) + "h " + u.toFixed(2).substring(2) + "m";
}

// summary
// provide 2 dates and 2 times, returns the 2 values added up
// format accepted is a string, example 1d 2h 30m
function AddTimes(time1, time2) {
    if (time2 == ' ') {
        time2 = "0:0:0";
    }
    time1 = time1.replace("d", ":");
    time1 = time1.replace("m", " ");
    time1 = time1.replace("h", ":");
    time1 = time1.replace(" ", "");
    time1 = time1.replace(" ", "");
    time2 = time2.replace("d", ":");
    time2 = time2.replace("m", " ");
    time2 = time2.replace("h", ":");
    time2 = time2.replace(" ", "");
    time2 = time2.replace(" ", "");
    theTime1 = time1.split(":");
    theTime2 = time2.split(":");
    var days = Number(theTime1[0]) + Number(theTime2[0]);
    var hours = Number(theTime1[1]) + Number(theTime2[1]);
    var mins = Number(theTime1[2]) + Number(theTime2[2]);
    if (mins > 60) {
        mins = mins - 60;
        hours = hours + 1;
    }
    if (hours > 24) {
        hours = hours - 24;
        days = days + 1;
    }
    return days + "d " + hours + "h " + mins + "m";
}