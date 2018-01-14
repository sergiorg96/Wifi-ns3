//simulacion.cc

/********************************************************
**
**  Autores: Valle Naranjo Cano, Jesús Macías Félix, Sergio Román González y Francisco Javier Gómez Bellido
**  Grupo de Trabajo: 1
**  Fecha: XX/01/2018
**
********************************************************/

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "Observador.h"

using namespace ns3;

#define NWIFI 5
#define NAP 1

RESULTADOS simulacion(uint32_t nWifi, uint32_t nAp);

NS_LOG_COMPONENT_DEFINE("Simulacion");

void main(int argc, char * argv[]){
	
	// Se ajusta la resolucion general de la simulacion a microsegundos
	Time::SetResolution(Time::US);
	uint32_t	nWifi=(NWIFI>=1)?NWIFI:1; //Si el número de estaciones wifi (STAs) que debemos crear es menor que 1, crea 1 como mínimo.
	uint32_t	nAp=(NWIFI>=1)?NWIFI:1; //Si el número de puntos de acceso (APs) que debemos crear es menor que 1, crea 1 como mínimo.
	GlobalValue::Bind ("ChecksumEnabled", BooleanValue(true));

	//Configuramos los parámetros del modelos configurables a través
  	//de la línea de comandos.
  	CommandLine cmd;

  	//cmd.AddValue("","",);

	cmd.Parse(argc,argv);
}

RESULTADOS simulacion(uint32_t nWifi, uint32_t nAp){
	
	NodeContainer nodosSTA;
	nodosSTA.Create(nWifi);

	NodeContainer nodosAP;
	nodosAP.Create(nAp);

	WifiHelper wifi;
}