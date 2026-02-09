function position = get_request(url)
    try
        data = webread(url);
        position = data.position; 
    catch
        position = 0.0;
    end
end
