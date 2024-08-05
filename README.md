# Kit-Arduino - Programas de Exemplo

<td style="width: 20%;"><img src="/img/top_kit_iot.png" width="50%" /></td>

## Introdução

A evolução tecnológica surpreende e até mesmo nos assusta, seja por sua velocidade ou pelas mudanças repentinas. Acompanhamos a miniaturização da tecnologia e o aumento assintótico da capacidade de processamento e armazenamento de dados dos computadores. Como consequência, áreas como automação, instrumentação industrial e telecomunicações têm espaço garantido nesta corrida, e cada vez mais podemos observar diferentes grandezas físicas e oferecer acesso simultâneo a essas informações para diferentes públicos.

Em uma Indústria 4.0, podemos monitorar grandezas como campo eletromagnético, corrente elétrica, vazão, pressões, grandezas químicas, temperatura, entre outras, com sistemas supervisórios indicando o melhor momento de realizar uma atuação. No setor automobilístico e de transporte, temos veículos totalmente autônomos, carros com inúmeros sensores, e controle on-line de movimentação de carga. No setor médico, sensores permitem a avaliação remota e preventiva de dados de pacientes, integrados com roupas e dispositivos de uso pessoal. Ou seja, todas as “coisas” podem ser monitoradas ou fornecer dados instantaneamente onde quer que estejam.

Neste contexto, apresentamos a era da “Internet das Coisas”. Ela proporciona o acesso a dados por meio de redes interconectadas com a internet, seja para automação ou para a otimização do dia-a-dia das pessoas. Este KIT apresenta informações introdutórias sobre como introduzir este mundo aos nossos alunos, utilizando as tecnologias embarcadas mais difundidas, a plataforma de microcontroladores Arduino. Nosso objetivo é despertar o interesse do aluno do Curso de Eletrotécnica do CEFET-MG para as mais diversas aplicações baseadas nos conceitos da Internet das Coisas.

<p style="text-align: center;"><img src="img/iot.png" width="25%" /></p>

Neste repositório, o aluno encontrará uma descrição completa do KIT de sensores para o aprendizado básico do microcontrolador Arduino com sensores. Reunimos 37 sensores e módulos básicos, visando o aprendizado conveniente para iniciantes. O kit inclui sensores/atuadores digitais e analógicos, além de módulos especiais como ultrassom, Bluetooth, módulo de aceleração e WIFI.

Para cada módulo, há um diagrama de conexão e um código de exemplo. Portanto, mesmo se você for um iniciante, pode começar facilmente. Os códigos de exemplo são baseados no ARDUINO, porque é de código aberto e fácil de usar. Com conhecimentos prévios, você pode aplicar este kit a outras plataformas de desenvolvimento de MCU, Raspberries Pi, etc. O princípio de funcionamento é praticamente o mesmo.

Agora, vamos abraçar este projeto com o ARDUINO e aprender juntos!

## Microcontroladores Disponibilizados no Kit

### Arduino UNO
[Arduino UNO](https://github.com/arduino/Arduino)

<td style="width: 30%;"><img src="https://github.com/Epaminondaslage/Arduino-Uno/blob/master/Figuras/Arduino%20Uno%20R3.png" width="50%" /></td>
<td style="width: 70%;">
Arduino é uma plataforma de prototipagem eletrônica de hardware livre e de placa única, projetada com um microcontrolador Atmel AVR com suporte de entrada/saída embutido, uma linguagem de programação padrão (originada em Wiring), essencialmente C/C++. O objetivo do projeto é criar ferramentas acessíveis, com baixo custo, flexíveis e fáceis de usar por iniciantes e profissionais. Principalmente para aqueles que não teriam acesso a controladores mais sofisticados e ferramentas mais complicadas.
</td>

### Wemos D1
[Wemos D1](https://github.com/wemos)

<td style="width: 30%;"><img src="https://github.com/Epaminondaslage/Wemos-D1/blob/master/Figuras/Placa%20Wemos%20D1%20R2.png" width="50%" /></td>
<td style="width: 70%;">
É uma plataforma de prototipagem que possui as mesmas dimensões do Arduino Uno R3. As principais diferenças são o conector micro USB e um ESP8266-12E. A Wemos D1 já conta com WiFi nativo, tornando-a uma plataforma extremamente atraente para desenvolvimento de projetos IoT.
</td>

### ESP32 DEVKIT V1
[ESP32 DEVKIT V1](https://github.com/espressif/arduino-esp32)

<td style="width: 30%;"><img src="https://github.com/Epaminondaslage/Lab-IoT-ELE-CEFET/blob/master/img/DOIT_ESP32-DevKit-V1_Top3.jpg" width="50%" /></td>
<td style="width: 70%;">
**Características do Chip ESP32**

Esse **ESP32** é um super chip! Possui dois microprocessadores Xtensa® 32-bit LX6 com até 600 DMIPS (velocidade de processamento). A frequência do clock pode ser de até 240 MHz, dependendo do modelo. A frequência mais comum é 160 MHz (10 vezes o clock do Arduino Uno).

- Memória ROM interna de 448K Bytes (para Boot e Core)
- Memória RAM estática interna de 520K Bytes
- Memória externa (total 4) – suporte para até 16M Bytes Flash e 16M Bytes SRAM
- 1 K Bit de Fusíveis eletrônicos (para segurança e criptografia)
- Real Time Clock com 16K Bytes de SRAM
- Interface WIFI 802.11 b/g/n – 802.11 n (2.4 GHz), até 150 Mbps
- Interface Bluetooth v4.2 BR/EDR e Bluetooth LE (low energy)
- Dois grupos de Timers – 4 timers de 64 Bits
- Aceleradores de hardware (criptografia) – AES, SHA, RSA e ECC
- Alimentação VCC de 2,3V a 3,6V CC
- Consumo de corrente max com WIFI – 240 mA

**Periféricos do Chip ESP32**

- 34 × Portas programáveis GPIOs
- 2 x Conversores ADC SAR 12-bits com até 18 canais
- 2 × Conversores DAC de 8-bits
- 10 × sensores de toque
- Sensor de Temperatura
- 4 × interfaces SPI – clock até 40 MHz!
- 2 × interfaces I2S – clock até 40 MHz!
- 2 × interfaces I2C – até 5 Mbps
- 3 × interfaces seriais UART – até 5 Mbps!
- 1 Host (SD/eMMC/SDIO) para controle de SD Cards
- 1 Escravo (SDIO/SPI)
- Interface Ethernet MAC (necessita acessório)
- Interface CAN 2.0
- Interface Infra-vermelho (Tx/Rx)
- Controle de Motor PWM
- Controle de LED PWM até 16 canais
- Sensor interno Hall
</td>

## Kit - Parte Física

<table style="width: 566px;">
<tbody>
<tr>
<td style="width: 160px;"><img src="img/kit1.png" alt="" width="175" height="175" /></td>
<td style="width: 211px;"><img src="img/kit2.png" alt="" width="175" height="175" /></td>
</tr>
</tbody>
</table>

A caixa do KIT foi projetada e construída usando tecnologia de impressão 3D, já utilizada em diversos segmentos, especialmente para pequenas produções. Todas as peças plásticas foram feitas em impressoras tridimensionais com o objetivo de facilitar a montagem dos sensores aos microcontroladores e fonte de alimentação.

## Sensores/Atuadores/Módulos

<td style="width: 30%;"><img src="/img/sensores.jpg" width="25%" /></td>

Reunimos sensores, atuadores, displays, LEDs, resistores e módulos básicos, visando o aprendizado conveniente para iniciantes. O kit inclui diversos módulos de sensores digitais e analógicos, atuadores e módulos especiais, como ultrassom, Bluetooth, WIFI, módulo de aceleração, displays de LED e LCD, etc.

Para cada módulo, há um diagrama de conexão e um código de exemplo. Mesmo que você seja um iniciante, pode começar facilmente. Os códigos de exemplo para este kit de sensores são baseados no ARDUINO e são fáceis de usar. Pode aplicar este kit a outras plataformas de desenvolvimento de MCU e WEMOS D1, as quais compõem este kit. O princípio de funcionamento é praticamente o mesmo.

Agora, vamos abraçar este mundo fascinante de ARDUINO e IoT e aprender juntos!

## Sensores/Atuadores/Módulos que Compoem o Kit

* [Botão](sensores/Botao)
* [Buzzer](sensores/Buzzer)
* [Chave de Mercúrio](sensores/Chave_de_mercurio)
* [Emissor de Infravermelho](sensores/Emissor_de_infravermelho)
* [Emissor de Laser](sensores/Emissor_de_laser)
* [Fotoresistor](sensores/Fotoresistor)
* [Interruptor de Inclinação do Mercúrio](sensores/Interruptor_de_inclinacao_do_mercurio)
* [Interruptor Reed](sensores/Interruptor_reed)
* [JoyStick](sensores/JoyStick)
* [LED Flash de 7 Cores](sensores/Flash_de_7_Colores)
* [LED de Duas Cores](sensores/LED_de_duas_cores)
* [Mini Interruptor Reed](sensores/Mini_interruptor_reed)
* [LED RGB](sensores/RGB_Led)
* [Receptor de Infravermelho](sensores/Receptor_de_infravermelho)
* [Relé](sensores/Rele)
* [Encoder Rotativo](sensores/Rotary_Encoder)
* [LED RGB SMD](sensores/SMD_RGB_LED)
* [Sensor Hall Linear](sensores/Sensor_Hall_Linear)
* [Sensor Hall Magnético](sensores/Sensor_Hall_Magnetico)
* [Sensor Hall Analógico](sensores/Sensor_Hall_analogico)
* [Sensor de Batimentos Cardíacos](sensores/Sensor_de_batimentos_cardiacos)
* [Sensor de Bloqueio de Luz](sensores/Sensor_de_bloqueio_de_luz)
* [Sensor de Chamas](sensores/Sensor_de_chamas)
* [Sensor de Vibração](sensores/Sensor_de_vibracao)
* [Sensor de Obstáculo](sensores/Sensor_de_obstaculo)
* [Sensor de Rastreamento](sensores/Sensor_de_rastreamento)
* [Sensor de Temperatura](sensores/Sensor_de_temperatura)
* [Sensor de Temperatura Analógico](sensores/Sensor_de_temperatura_analogico)
* [Sensor de Temperatura Digital](sensores/Sensor_de_temperatura_digital)
* [Sensor de Temperatura e Umidade](sensores/Sensor_de_temperatura_e_humidade)
* [Sensor de Toque](sensores/Sensor_de_toque)
* [Sensor de Som Alto](sensores/Sensor_grande_de_som)
* [Sensor de Som Baixo](sensores/Sensor_pequeno_de_som)
* [Tilt Switch](sensores/Tilt_Switch)

## Topologia de Rede do Laboratório

O laboratório de IoT está localizado na sala XXXX do prédio 19 do Campus2 do CEFET-MG. É utilizado em conjunto com outras disciplinas e possui microcomputadores ligados em uma rede local isolada por um firewall da rede institucional do CEFET-MG, conforme a topologia abaixo:

<td style="width: 30%;"><img src="/img/Rede IOT CEFET.png" width="25%" /></td>

## Informações Gerais de Operação

- 01 servidor de rede
- 01 roteador de WIFI
- 10 KITs de trabalho e seus respectivos módulos/sensores
- 10 Estações de Trabalho - Windows 7
- IPs Fixos na faixa 10.0.0.10 a 10.0.0.18, através de placa WIFI
- IDE Arduino com drivers atualizados
- IDE com suporte às placas Arduino UNO, ESP 8266, Wemos D1, NodeMCU V2
- Drivers de comunicação serial/USB atualizados para os processadores em uso
- Acesso ao repositório de arquivos no servidor 10.0.0.1
- Os dispositivos somente conectam à rede WIFI com SSID e senha
- Esta rede não tem conexão com a Internet, exceto em momentos de atualização da IDE/libs, feita através de liberação no firewall
- A rede tem IP fixo nas estações de trabalho e DHCP para os demais dispositivos
- O servidor de rede é um edge computer com Linux e serve como broker de MQTT, servidor de arquivos, firewall, DHCP Server, PROXY Server, etc.

## Material Didático

Neste [repositório](material_didatico) está disponível ppt, apostilas, manuais, etc.

## Trabalhos Publicados na Área com Participação do Autor

* [Improving the Consumption and Water Heating Efficiency in Smart Buildings](https://ieeexplore.ieee.org/document/8263304)
* [Low-Cost IoT Surveillance System Using Hardware-Acceleration and Convolutional Neural Networks](https://ieeexplore.ieee.org/abstract/document/8767325)

## Status

Este repositório é para alunos do DEE / Curso de Eletrotécnica do CEFET-MG
