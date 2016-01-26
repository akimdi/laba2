cd axis2c_2/bin
export AXIS2C_HOME="/home/akim/laba5_aipps/axis2c_2"
export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:${AXIS2C_HOME}/lib"
export AXIS2C_INCLUDE="${AXIS2C_HOME}/include"
./axis2_http_server -p 9093 -r $AXIS2C_HOME
