const express = require('express'),
    { body, validationResult } = require('express-validator'),
    service = express()

let position = 0.0, 
    cmd = 0.0

service.use(express.json())

service.get('/', (req, res) => {
    res.status(200).json({ status: 'ok' })
})

service.post('/enc_pos', 
    body('position').exists().withMessage('position required').isFloat().withMessage('position must be a float').toFloat(),
    (req, res) => {
        const errors = validationResult(req)
        if (!errors.isEmpty()) {
            return res.status(400).json({ errors: errors.array() })
        }
        position = req.body.position
        console.log(`SYS_IN:  ${position}`)
        res.status(200).json({ status: 'ok' })
    }
)

service.get('/enc_pos', (req, res) => {
    res.status(200).json({ position: position })
})

service.post('/motor_cmd',
    body('output').exists().withMessage('output required').isFloat().withMessage('output must be a float').toFloat(),
    (req, res) => {
        const errors = validationResult(req)
        if (!errors.isEmpty()) {
            return res.status(400).json({ errors: errors.array() })
        }
        cmd = req.body.output
        console.log(`SYS_OUT: ${cmd}`)
        res.status(200).json({ status: 'ok' })
    }
)

service.get('/motor_cmd', (req, res) => {
        res.status(200).json({ output: cmd })
})

module.exports = service
