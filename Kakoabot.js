var game369arr = []; 
//game369arr.push( {name : ____, now : ___} );
//game369arr[index].now
//push()메서드는 배열에 끝에 새 항목을 추가하고 새로운 길이를 반환한다.

function WWW(url) {
    var ret = "asdf";
    var isFinished = false;
    try {
        new java.lang.Thread({run: function () {
            if (url.indexOf("http://") !== -1 || url.indexOf("https://") !== -1) {
                var URLContent = "";
                var bufferedReader = new java.io.BufferedReader(new java.io.InputStreamReader(java.net.URL(url).openStream()));
                var temp = "";
                while ((temp = bufferedReader.readLine()) != null) {
                    URLContent += (temp + "\n");
                }
                bufferedReader.close();
                ret = URLContent;
                isFinished = true;
            }
            if (url.indexOf("file://") != -1) {
                const file = new java.io.File(url.replace("file://", ""));
                if (!(file.exists())) {
                    return "";
                }
                const fis = new java.io.FileInputStream(file);
                const isr = new java.io.InputStreamReader(fis);
                const br = new java.io.BufferedReader(isr);
                var str = br.readLine();
                var line = "";
                while ((line = br.readLine()) != null) {
                    str += "\n" + line;
                }
                fis.close();
                isr.close();
                br.close();
                ret = str;
                isFinished = true;
            }
        }}).start();
    }
    catch (e) {
        send("Error on WWW function" + "\n" + e);
    }
    while (1) {
        if (isFinished) {
            return ret;
        }
    }
}

function response(room, msg, sender, isGroupChat, replier, imageDB) 
{   
    //1.일단 사용자가 369게임을 입력한다.
    //2.그러면 game369메서드가 실행된다.
    //3.

    function game369(){
    	let x=1;
    
        
        }
    
   if (msg.indexOf("369게임")!=-1)
   {
       replier.reply("369게임을 시작합니다.");
       game369();
   }
   if (msg.indexOf("naver html 태그")!=-1){
   WWW();
   replier.reply(WWW("https://m.naver.com"));
   }
}
