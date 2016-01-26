export AXIS2C_HOME="/home/andrey/laba5_aipps/axis2c"

gcc -g -shared -olibSubscribers.so -I $AXIS2C_HOME/include/  -L$AXIS2C_HOME/lib \
    -laxutil \
    -laxis2_axiom \
    -laxis2_engine \
    -laxis2_parser \
    -lpthread \
    -laxis2_http_sender \
    -laxis2_http_receiver \
    -lguththila \
    *.c 
