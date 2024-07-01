## NODE-RED

Para acessar o fluxo do Node-RED, você precisa acionar o CMD e rodar o comando "node-red".

Ao acessar o http://localhost:1880/ terá acesso aos fluxos do NODE-RED

![fluxos](./fluxonodered.png)

Dentro dos fluxos do Node-RED. Os blocos amarelos são de funções inscritas em Javascript. Os blocos roxos são onde o MQTT foi configurado e os blocos verde é onde as operações do mongoDB foram implementadas. Por fim, os blocos em azul são os blocos que fazem a interface com o frontend onde há os botões e gráficos disponíveis na página http:/localhost:1880/ui
