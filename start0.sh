cd axis2c/bin
export PATH="/home/akim/laba5_aipps/axis2c/bin"
export AXIS2C_HOME="/home/akim/laba5_aipps/axis2c"
export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:${AXIS2C_HOME}/lib"
export AXIS2C_INCLUDE="${AXIS2C_HOME}/include"
./axis2_http_server -p 9091 -r $AXIS2C_HOME 
