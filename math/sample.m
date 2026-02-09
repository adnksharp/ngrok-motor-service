%%Sample for use `get_request`|`get_post` functions
clear; clc;

%%Config needed
%--------------------------------------------------
load('config.mat');
server_get = [NGROK_DOMAIN, '/enc_pos'];
server_post = [NGROK_DOMAIN, '/motor_cmd'];
%--------------------------------------------------

%% Example
%--------------------------------------------------
test = 92.0;
service = post_request(server_post, test)
value = get_request(server_get)

%--------------------------------------------------
