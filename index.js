const ngrok = require('@ngrok/ngrok')
require('dotenv').config()

const service = require('./server')

const PORT = process.env.PORT || 8080

service.listen(PORT, async () => {
	console.log(`\nLocal server:\n\thttp://localhost:${PORT}`)
	console.log(`\nngrok server:`)
	try {
		const listener = await ngrok.connect({ 
			addr: PORT, 
			authtoken_from_env: true,
			domain: process.env.NGROK_DOMAIN
		})
		console.log(`\t${listener.url()}`)
	} catch (err) {
		console.warn('\thttps://www.youtube.com/watch?v=dQw4w9WgXcQ')
	}
})
