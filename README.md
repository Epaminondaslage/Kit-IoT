<td style="width: 10%;"><img src="/img/Logo_CEFET-MG.png" width="10%" /></td>

## Laboratório de IoT do Curso de Eletrotécnica
<p><strong><span style="color: #0000ff;">Internet das Coisas - Kit de desenvolvimento em Arduino, Wemos D1 e NodeMCU</span></strong></p>
<p><strong><span style="color: #0000ff;">Prof Epaminondas Lage</span></strong></p>
<a href="http://lattes.cnpq.br/7787341723868111"> Currículo Lattes LAGE, E. S.</a> 

## Introdução
A evolução tecnológica surpreende e até mesmo nos assusta, seja por sua sua velocidade ou pelas mudanças repentinas. Acompanhamos a miniaturização da tecnologia e o aumento assintótico da capacidade de processamento e armazenamento de dados dos computadores. Como consequência, áreas como automação, instrumentação industrial e telecomunicações têm espaço garantidos nesta corrida e cada vez mais podemos observar diferentes grandezas físicas e oferecer acesso simultâneo a estas informações para diferentes públicos. 

Em uma indústria 4.0, podemos monitorar grandezas como campo eletromagnético, corrente elétrica, vazão, pressões, grandezas quimicas, temperatura entre outras e os sistema supervisórios indicando o melhor momento de realizar uma atuação. No setor automobilistico e de transporte, veículos completamente autônomos, carros com inúmeros sensores, o controle on-line de movimentação de carga. No setor médico, sensores podem permitir a avaliação de dados de pacientes de forma remota e preventiva, integrado com roupas e dispositivos de uso pessoal. Ou seja, todas as “coisas” podem ser monitoradas ou fornecer dados instantaneamente onde quer que estejam. 

Neste contexto apresentamos a era da “Internet das Coisas”. Ela proporciona o acesso a dados por meio de redes interconectadas com a internet, seja fins de automação ou para a otimização do dia-a-dia das pessoas. Este KIT apresenta informações introdutórias de como fazer com que este mundo seja apresentado aos nossos alunos, utilizando das tecnologias embarcadas mais difundidas, a plataforma de microprcessadores Arduino. O nosso objetivo é despertar o interesse do aluno do Curso de Eletrotécnica do CEFET-MG para as mais diferentes aplicações baseadas nos conceitos da Internet das Coisas.
<p style="text-align: center;"><img src="img/iot.png" width="50%" />

Neste repositório o aluno encontrará uma descrição completa do KIT de sensores do Laboratório de IoT do Curso de Eletrotécnica do CEFET-MG. Fundamente-se no aprendizado básico do microcontrolador Arduino com  sensores. Reunimos 37 sensores e módulos básicos, visando o aprendizado conveniente para iniciantes. Neste kit, existem sensores/atuadores digitais e analógicos e também alguns módulos especiais, como ultrassom, Bluetooth, módulo de aceleração, WIFI, entre outros.

Para cada módulo, há um diagrama de conexão e um código de exemplo. Portanto, mesmo se você seja totalmente novo, pode começar facilmente. Os códigos de exemplo para este kit de sensores são baseados no ARDUINO, porque é de código aberto e fácil de usar. Se você tiver conhecimentos prévios, também pode aplicar este kit a outras plataformas de desenvolvimento de MCU, Raspberries Pi, etc. O princípio de funcionamento é praticamente o mesmo.

Agora, vamos abraçar este mundo fascinante do ARDUINO e aprender juntos!
## Microcontroladores disponibilizados no Kit
## Arduino UNO
https://github.com/arduino/Arduino
<table>
<tbody>
<tr>
<td style="width: 30%;"><img src="https://github.com/Epaminondaslage/Arduino-Uno/blob/master/Figuras/Arduino%20Uno%20R3.png" width="100%" /></td>
<td style="width: 70%;">
<p>Arduino é uma plataforma de prototipagem eletrônica de hardware livre e de placa única, projetada com um microcontrolador Atmel AVR com suporte de entrada/saída embutido, uma linguagem de programação padrão, a qual tem origem em Wiring, e é essencialmente C/C++. O objetivo do projeto é criar ferramentas que são acessíveis, com baixo custo, flexíveis e fáceis de se usar por principiantes e profissionais. Principalmente para aqueles que não teriam alcance aos controladores mais sofisticados e ferramentas mais complicadas.</p>
</td>
</tr>
</tbody>
</table>

## Wemos D1
https://github.com/wemos
<table>
<tbody>
<tr>
<td style="width: 30%;"><img src="https://github.com/Epaminondaslage/Wemos-D1/blob/master/Figuras/Placa%20Wemos%20D1%20R2.png" width="100%" /></td>
<td style="width: 70%;">
<p>É uma plataforma de prototipagem que possui as mesmas dimensões do Arduino Uno R3. As diferenças mais básicas em relação ao Arduino são o conector micro USB e um ESP8266-12E. A Wemos D1 já conta com WiFi nativo, o que a torna uma plataforma extremamente atraente para desenvolvimento de projetos Iot.</p>
</td>
</tr>
</tbody>
</table>

## NodeMCU
https://github.com/nodemcu
<table>
<tbody>
<tr>
<td style="width: 30%;"><img src="https://github.com/Epaminondaslage/NodeMCU/blob/master/Figuras/NodeMcu%20ESP-12.png" width="100%" /></td>
<td style="width: 70%;">
<p>O NodeMCU &eacute; uma plataforma open source da fam&iacute;lia ESP8266 criado para ser utilizado no desenvolvimento de projetos ioT. Esta placa foi iniciada em 2014 e &eacute; bem interessante, pois ao contr&aacute;rio de alguns m&oacute;dulos desta fam&iacute;lia que necessitam de um conversor USB serial externo para que haja troca de informa&ccedil;&otilde;es entre computador e o m&oacute;dulo, o NodeMCU j&aacute; vem com um conversor USB serial integrado.</p>
<p>Esta plataforma &eacute; composta basicamente por um chip controlador (ESP8266 ESP-12E), uma porta micro USB para alimenta&ccedil;&atilde;o e programa&ccedil;&atilde;o, conversor USB serial integrado e j&aacute; possui WiFi nativo.</p>
</td>
</tr>
</tbody>
</table>

## Kit - Parte física
<table>
<tbody>
<tr>
<td style="width: 30%;"><img src="/img/kit.jpeg" width="100%" /></td>
<td style="width: 70%;">
<p> A caixa do KIT foi projetada e construída usando a tecnologia de impressão 3D. Já utilizada em diversos segmentos, em especial, para pequenas produções. Todas as peças plásticas foram feitas em impressoras tridimensionais com o objetivo de facilitar a montagem dos sensores aos microcontroladores e fonte de alimentação.</p>
</td>
</tr>
</tbody>
</table>

## Sensores/Atuadores
<td style="width: 30%;"><img src="/img/sensores.jpg" width="50%" /></td>

Reunimos sensores, atuadores, displays, LEDs, resistores e módulos básicos, visando o aprendizado conveniente para iniciantes. Dentro desta caixa, existem diversos módulos de sensores digitais e analógicos, atuadores e também alguns módulos especiais, como ultrassom, Bluetooth, WIFI, módulo de aceleração, displays de LED e LCD, etc.

Para cada módulo, há um diagrama de conexão e um código de exemplo. Portanto, mesmo se você for um iniciante, você pode começar facilmente. Os códigos de exemplo para este kit de sensores são baseados no ARDUINO e são fáceis de usar. Pode aplicar este kit a outras plataformas de desenvolvimento de MCU e WEMOS D1 os quais compões este kit. O princípio de funcionamento é praticamente o mesmo.

Agora, vamos abraçar este mundo fascinante de ARDUINO e IoT e aprender juntos!

## Sensores/atuadores/módulos que compõem o kit
* <a href="sensores/Botao">Botão</a> 
* <a href="sensores/Buzzer">Buzzer</a>        		
* <a href="sensores/Chave_de_mercurio">Chave de mercúrio</a>          	
* <a href="sensores/Emissor_de_infravermelho">Emissor de infravermelho</a>          	
* <a href="sensores/Emissor_de_laser"> Emissor de laser</a>          	
* <a href="sensores/Fotoresistor">Fotoresistor</a>         	
* <a href="sensores/Interruptor_de_inclinacao_do_mercurio"> Interruptor de inclinação do mercúrio</a>          	
* <a href="sensores/Interruptor_reed"> Interruptor reed</a>         	
* <a href="sensores/JoyStick"> JoyStick</a>         	
* <a href="sensores/LED_Flash_de_7_Colore"> LED Flash de 7 Colores</a>         	
* <a href="sensores/LED_de_duas_coreso"> LED de duas cores</a>       	
* <a href="sensores/Mini_interruptor_reed"> Mini interruptor reed</a>          	
* <a href="sensores/RGB_Led"> LED RGB</a>     	
* <a href="sensores/Receptor_de_infravermelho"> Receptor de infravermelho</a>         	
* <a href="sensores/Rele"> Relé</a>          	
* <a href="sensores/Rotary_Encoder"> Encoder rotativo</a>          		
* <a href="sensores/SMD_RGB_LED"> LED RGB SMD</a>       	
* <a href="sensores/Sensor_Hall_Linear"> Sensor Hall Linear</a>          		
* <a href="sensores/Sensor_Hall_Magnetico"> Sensor Hall Magnético</a>         	
* <a href="sensores/Sensor_Hall_analogico"> Sensor Hall analógico</a>         	
* <a href="sensores/Sensor_de_batimentos_cardiacos"> Sensor de batimentos cardíacos</a>          	
* <a href="sensores/Sensor_de_bloqueio_de_luz"> Sensor de bloqueio de luz</a>         		
* <a href="sensores/Sensor_de_chamas"> Sensor de chamas</a>      	
* <a href="sensores/Sensor_de_vibracao"> Sensor de vibração</a>     	
* <a href="sensores/Sensor_de_obstaculo"> Sensor de obstáculo</a>
* <a href="sensores/Sensor_de_rastreamento"> Sensor de rastreamento</a>         		
* <a href="sensores/Sensor_de_temperatura"> Sensor de temperatura</a>        	
* <a href="sensores/Sensor_de_temperatura_analogico"> Sensor de temperatura analógico</a>          		
* <a href="sensores/Sensor_de_temperatura_digital "> Sensor de temperatura digital</a>       	
* <a href="sensores/Sensor_de_temperatura_e_humidade"> Sensor de temperatura e humidade</a>         		
* <a href="sensores/Sensor_de_toque"> Sensor de toque</a>
* <a href="sensores/Sensor_grande_de_som"> Sensor de som alto</a>        		
* <a href="sensores/Sensor_pequeno_de_som"> Sensor de som baixo</a>         		
* <a href="sensores/Tilt_Switch"> Tilt Switch</a>

## Topologia de Rede do Laboratório

O laboratório de IoT está localizado na sala 702 do prédio 19 do Campus2 do CEFET-MG. É utilizado em conjunto com outras disciplinas e possue 10 microcomputadores ligados em uma rede local isolada por um firewall da rede institucional do CEFETMG conforme topologia abaixo:
<td style="width: 30%;"><img src="/img/Rede IOT CEFET.png" width="50%" /></td>

## Informaçoes Gerais de Operação

- 01 servidor de rede 
- 01 roteador de WIFI
- 10 KITs de trabalho e seus respectivos módulos/sensores.
- 10 Estações de Trabalho - Windows 7
- IP's Fixos faixa 10.0.0.10 a 10.0.0.18. através de placa WIFI.
- IDE Arduino com drives atualizados .
- IDE com suporte às placas Arduino UNO, ESP 8266, Wemos D1, NodeMCU V2
- Drives de comunicação serial/USB atualizados para os processoadores em uso.
- Acesso ao repositório de arquivos no servidor 10.0.0.1.
- Os dispositivos somente conectam à rede WIFI apenas com SSID e senha.
- Esta rede não tem conexão com a Internet salvo momentos de atualização da IDE/libs e será feita através de liberação no firewall.
- A rede tem ip fixo nas estações de trabalho e DHCP para os demais dispositivos.
- O servidor de rede é um edgecomputer com Linux e serve como broker de MQTT, servidor de arquivos, Firewall, DHCP Server, PROXY Server, etc.
 
## Material Didático

Neste <a href="/material_didatico"> repositório</a>  está disponibilizado ppt, apostilas, manuais, etc.

## Trabalhos publicados na área com participação do autor 

* <a href="https://ieeexplore.ieee.org/document/8263304"> Improving the consumption and water heating efficiency in smart buildings</a>         		
* <a href="https://ieeexplore.ieee.org/abstract/document/8767325"> Low-Cost IoT Surveillance System Using Hardware-Acceleration and Convolutional Neural Networks</a>

## Status

Este repositório é para alunos do Curso de Eletrotécnica do CEFET-MG

## Contato

Criado/adaptado por Epaminondas de Souza Lage - epaminondaslage@gmail.com ou epaminondaslage@cefetmg.br
