function status = post_request(url, val)
    options = weboptions('HeaderFields', {'Content-Type', 'application/json'; 'ngrok-skip-browser-warning', 'true'}, 'RequestMethod', 'post');
    data = struct('output', val);

    try
        response = webwrite(url, data, options);
        status = 1;
    catch
        status = 0;
    end
end
