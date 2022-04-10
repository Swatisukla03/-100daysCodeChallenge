function rpsGame(yourchoice){
    console.log(yourchoice);
    var humanchoice,batchoice;
    // humanchoice=yourchoiceid
    results=decideWinner(humanchoice,batchoice);
    // message=finalmessage(result);
    rpsfrontend(yourchoice.id,batchoice,message);
    

}