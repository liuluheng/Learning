14.2 Socket Timesouts
--------------------
Three ways of time out:
1. Call *alarm*

2. Block waiting for IO in *select* with a time limit

3. Use the newer SO_RCTIMEO and SO_SNDTIMEO options

Item 1 in only recommmended to be used with single-thread programs
