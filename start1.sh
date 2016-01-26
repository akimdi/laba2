cd axis2c_1/bin
export AXIS2C_HOME="/home/akim/laba5_aipps/axis2c_1"
export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:${AXIS2C_HOME}/lib"
export AXIS2C_INCLUDE="${AXIS2C_HOME}/include"
./axis2_http_server -p 9092 -r $AXIS2C_HOME
