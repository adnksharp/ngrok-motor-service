# ngrok-motor-service

Servidor global usando node.js ([ngrok](https://ngrok.com/docs/getting-started/cloud-endpoints-quickstart#javascript)) + sketch de ejemplo de Arduino para ESP32 ([WiFiClientSecure.h](https://github.com/espressif/arduino-esp32/tree/master/libraries/NetworkClientSecure)) + funciones de ejemplo para Matlab([webread](https://la.mathworks.com/help/matlab/ref/webread.html)/[webwrite](https://la.mathworks.com/help/matlab/ref/webwrite.html)).



## Requisitos

<details><summary><h3>VS Code</h3></summary>

<img alt="screenshot" src="./img/screenshot-code.png"/>

#### Configuración de instalación recomendada

<img alt="screenshot" width="49%" src="./img/install-code-1.png"/><img alt="screenshot" width="49%" src="./img/install-code-2.png"/>

<a href="https://code.visualstudio.com/download">
    <img src="https://img.shields.io/badge/DESCARGAR-white?style=for-the-badge&color=0090ff"/>
</a>

</details>


<details><summary><h3>Git</h3></summary>

<img alt="screenshot" src="./img/screenshot-git.png"/>

#### Configuración de instalación recomendada

<img alt="screenshot" width="19.5%" src="./img/install-git-1.png"/><img alt="screenshot" width="19%" src="./img/install-git-2.png"/><img alt="screenshot" width="19%" src="./img/install-git-3.png"/><img alt="screenshot" width="19%" src="./img/install-git-4.png"/><img alt="screenshot" width="19.5%" src="./img/install-git-5.png"/><img alt="screenshot" width="16%" src="./img/install-git-6.png"/><img alt="screenshot" width="16%" src="./img/install-git-7.png"/><img alt="screenshot" width="16%" src="./img/install-git-8.png"/><img alt="screenshot" width="16%" src="./img/install-git-9.png"/><img alt="screenshot" width="16%" src="./img/install-git-10.png"/><img alt="screenshot" width="16%" src="./img/install-git-11.png"/>

<a href="https://github.com/git-for-windows/git/releases/download/v2.53.0.windows.1/Git-2.53.0-64-bit.exe">
    <img src="https://img.shields.io/badge/DESCARGAR-white?style=for-the-badge&color=0090ff"/>
</a>

</details>


<details><summary><h3>Node.js</h3></summary>

<img alt="screenshot" src="./img/screenshot-node-js.png"/>

#### Configuración de instalación recomendada

<img alt="screenshot" width="24%" src="./img/install-node-1.png"/><img alt="screenshot" width="24%" src="./img/install-node-2.png"/><img alt="screenshot" width="24%" src="./img/install-node-3.png"/><img alt="screenshot" width="24%" src="./img/install-node-4.png"/>

<a href="https://nodejs.org/dist/v25.6.0/node-v25.6.0-x64.msi">
    <img src="https://img.shields.io/badge/DESCARGAR-white?style=for-the-badge&color=0090ff"/>
</a>

</details>


<details><summary><h3>Arduino</h3></summary>

<img alt="screenshot" src="./img/screenshot-arduino.png"/>

#### Configuración de instalación recomendada

<img alt="screenshot" width="32%" src="./img/install-arduino-1.png"/><img alt="screenshot" width="32%" src="./img/install-arduino-2.png"/><img alt="screenshot" width="32%" src="./img/install-arduino-3.png"/>

> [!IMPORTANT]
> La instalación de Arduino incluye el software para trabajar con diferentes dispositivos por puerto serial, es recomendado instalarlos todos

<img alt="screenshot" width="32%" src="./img/install-arduino-drivers-1.png"/><img alt="screenshot" width="32%" src="./img/install-arduino-drivers-2.png"/><img alt="screenshot" width="32%" src="./img/install-arduino-drivers-3.png"/>

<a href="https://downloads.arduino.cc/arduino-ide/arduino-ide_2.3.7_Windows_64bit.msi">
    <img src="https://img.shields.io/badge/DESCARGAR-white?style=for-the-badge&color=0090ff"/>
</a>

#### Drivers opcionales

En algunos casos es necesario instalar los drivers `CH340` y `CP2102`

<img alt="screenshot" width="49%" src="./img/install-drivers-1.png"/><img alt="screenshot" width="49%" src="./img/install-drivers-2.png"/>

<a href="https://www.silabs.com/documents/public/software/CP210x_Windows_Drivers.zip">
    <img src="https://img.shields.io/badge/DESCARGAR_CP2102_drivers-black?style=for-the-badge&color=0090ff"/>
</a>

<a href="https://sparks.gogo.co.nz/assets/_site_/downloads/CH34x_Install_Windows_v3_4.zip">
    <img src="https://img.shields.io/badge/DESCARGAR_CH340_Drivers-white?style=for-the-badge&color=0090ff"/>
</a>

#### ESP32 en Arduino-IDE

Los servidores de Espressif en ocasiones tardan en responer más del tiempo que tolera Arduino por defecto, para evitar errores es necesario agregar el siguiente contenido en `C:\Users\<your_username>\.arduinoIDE\arduino-cli.yaml` cambiando `<your_username>` por el nombre de la carpeta de tu usuario en `C:\Users\`:

```yaml
network:
	connection_timeout: 300s
```

<img alt="screenshot" src="./img/install-arduino-esp32-4.png"/>

Con `arduino-cli.yaml` modificado, dentro de la IDE de Arduino agrega la siguiende dirección en `File > Preferences > Additional boards manager URLs`:

```text
https://espressif.github.io/arduino-esp32/package_esp32_index.json
```

En gestor de placas de la IDE, instala **esp32 by Espressif Systems** (`esp32:esp32`)

<img alt="screenshot" width="32%" src="./img/install-arduino-esp32-1.png"/><img alt="screenshot" width="32%" src="./img/install-arduino-esp32-2.png"/><img alt="screenshot" width="32%" src="./img/install-arduino-esp32-3.png"/>


</details>


<details><summary><h3>Matlab</h3></summary>

<img alt="screenshot" src="./img/screenshot-matlab.png"/>

#### Configuración de instalación recomendada

<img alt="screenshot" width="32%" src="./img/install-matlab-1.png"/><img alt="screenshot" width="32%" src="./img/install-matlab-2.png"/><img alt="screenshot" width="32%" src="./img/install-matlab-3.png"/>

<a href="https://la.mathworks.com/downloads/">
    <img src="https://img.shields.io/badge/DESCARGAR-white?style=for-the-badge&color=0090ff"/>
</a>

</details>

### Ngrok

|1. Crear una cuenta | 2. Localiza tu token personal | 3. Identifica tu dominio estatico |
|---|---|---|
| [<img alt="screenshot" src="./img/screenshot-ngrok-0.png"/>](https://dashboard.ngrok.com/signup)| [<img alt="screenshot" src="./img/screenshot-ngrok-1.png"/>](https://dashboard.ngrok.com/get-started/your-authtoken) | [<img alt="screenshot" src="./img/screenshot-ngrok-2.png"/>](https://dashboard.ngrok.com/domains)

## Instalación

#### 1. Usando `git GUI` clona el repositorio 

```css
https://github.com/adnksharp/ngrok-motor-service.git
```

> [!TIP]
> Como recomendación elige una carpeta lo más cercana a `C:\`

<img alt="screenshot" width="45%" src="./img/screenshot-git-gui-0.png"/><img alt="screenshot" width="45%" src="./img/screenshot-git-gui-1.png"/>

#### 2. Desde VS-Code abre la carpeta donde clonaste el repositorio

<img alt="screenshot" src="./img/screenshot-vs-code-0.png"/>

#### 3. Desde el `command prompt` en la terminal instala las dependencias necesarias

```sh
npm i
```

<img alt="screenshot" width="45%" src="./img/screenshot-vs-code-1.png"/><img alt="screenshot" width="45%" src="./img/screenshot-vs-code-2.png"/>

## Configuración

> [!WARNING]
> Los pasos de esta sección se realizan una sola vez

### Servidor `@ngrok/ngrok`
En la ubicación raiz crea un nuevo archivo `.env` con el siguiente contenido:

```text
NGROK_AUTHTOKEN=tu-token-personal-de-ngrok
PORT=8000
NGROK_DOMAIN=tu-dominio-estatico-de-ngrok
```

### Variables de Matlab

#### 1. Crear el archivo de variables

Dentro de la carpeta `math` crea un archivo `env.m` con el siguiente contenido:

```matlab
NGROK_DOMAIN='https://tu-dominio-estatico-de-ngrok'

save('config.mat', 'NGROK_DOMAIN');
```

#### 2. Ejecutar el script
Al ejecutarlo desde matlab se creara un binario `config.mat` necesario para usar `get_request.m` y `post_request.m`

### Variables de arduino

En la carpeta `controller` crea un archivo `keys.h` con el siguiente contenido:

```cpp
const char* SSID = "Nombre-de-la-red-wifi";
const char* PASS = "Contraseña";

String server = "https://tu-dominio-estatico-de-ngrok";
```

La estructura de los archivos debe de quedar de la siguiente manera

```text
.
├── controller
│   ├── controller.ino
│   ├── keys.h
│   ├── web.cpp
│   └── web.h
├── math
│   ├── config.mat
│   ├── env.m
│   ├── get_request.m
│   ├── post_request.m
│   └── sample.m
├── .env
├── index.js
├── package.json
├── package-lock.json
└── server.js
```

## Uso

### Servidor

En el `command prompt` de la terminal de vs-code ejecuta `npm run start`. Si el archivo `.env` es correcto se mosotrara un mensaje similar al siguiente:

```bash
> server@1.0.0 start
> node index.js

[dotenv@17.2.4] injecting env (3) from .env -- tip: 📡 add observability to secrets: https://dotenvx.com/ops

Local server:
	http://localhost:8000

ngrok server:
	https://nonfollowing-forx-daemon.ngrok-free.dev
```

#### Microcontrolador

Desde la IDE de Arduino carga el sketch de la carpeta `controller` al ESP32. El microcontrolador muestra su estatus a traves de un led conectado al pin 11:

- Parpadea cada 50 ms al inicio cuando no se puede conectar a la red wifi.
- Enciende cuando no puede enviar mensajes al servidor.

#### Matlab

En matlab abre la carpeta `math`. El archivo [sample.m](./math/sample.m) muestra un ejemplo de como usar las funciones dentro de un proyecto de Matlab.
