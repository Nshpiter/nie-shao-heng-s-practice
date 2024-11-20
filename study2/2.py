docker run -d \
-e ACCOUNT=3874902276 \
-e WSR_ENABLE=true \
-e WS_URLS='["ws://127.0.0.1:8096/onebot/v11/ws"]' \
-e ONEAPI_KEY="sk-pvOzGrTysEKqya6XRNKej5up4wQEADjMo8cUTmnEB0mZyJez" \
-e ONEAPI_URL="https://api.chatanywhere.tech" \
-e ONEAPI_MODEL="gpt-3.5-turbo" \
--name napcat1 \
--restart=always \
nowindandmoon/napcat-qqgptbot:1.0