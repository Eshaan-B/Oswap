#include<bits/stdc++.h>

int main(){
    string secretKey="XXXXXXXXXXXXXXX";
    var ObjData = Firebase.getInstance({'secretKey':secretKey});
    ObjData face1Data = "eEiLrQ1jpzVna3Hlm4Xm";
    ObjData face2Data= "9gZDhNyyVU8VShyMnMgm";
    ObjData temp = face1Data;
    face1Data=face2Data;
    face2Data = temp;
    return 0;
}