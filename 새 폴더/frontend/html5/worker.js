
onmessage = function(event)
{
    var sendData;
    var rcvData = event.data;
    if(rcvData != "close")
    {
        sendData = rcvData + "백그라운드에서 동작합니다.";
    }
    else
    {
        sendData = "워커를 내부 종료합니다.";
        this.close();
    }
    stopOperation();
    this.postMessage(sendData);
}

function stopOperation()
{
    var endTime = new Date()
    endTime = endTime.getTime() + 5000;
    while(new Date().getTime() < endTime);
}



