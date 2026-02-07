const ngrok = require('@ngrok/ngrok')
require('dotenv').config()

const service = require('./server')

const PORT = process.env.PORT || 8080

service.listen(PORT, async () => {
	console.log(`\nLocal server:\n\thttp://localhost:${PORT}`)
	try {
		const listener = await ngrok.connect({ addr: PORT, authtoken_from_env: true })
		console.log(`\nngrok server:\n\t${listener.url()}`)
	} catch (err) {
		console.warn('https://www.youtube.com/watch?v=dQw4w9WgXcQ&list=RDdQw4w9WgXcQ&start_radio=1')
	}
})