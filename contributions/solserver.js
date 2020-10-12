var http = require('http');

// Configure our HTTP server to respond with Hello World to all requests.
var server = http.createServer(function (request, response) {
  response.writeHead(200, {"Content-Type": "text/plain"});
  response.end("Hello World\n");
});

// Listen on port 8000, IP defaults to 127.0.0.1
server.listen(8000);

console.log("Server running at http://127.0.0.1:8000/");

//open http://127.0.0.1:8000/ in the browser
//ctrl+c in the terminal where the server is running to shut it down