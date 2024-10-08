/******************************************************************************/
/* File   : aapFunctionalCluster_RawDataStream.cpp                            */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "interface_RawDataStream_RawDataStreamClient.hpp"
#include "interface_RawDataStream_RawDataStreamServer.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class aapFunctionalCluster_RawDataStream:
      public interface_RawDataStream_RawDataStreamClient
   ,  public interface_RawDataStream_RawDataStreamServer
{
   public:
      void Connect           (void);
      void ReadData          (void);
      void Shutdown          (void);
      void WriteData         (void);
/*
      void ReadData          (void);
      void Shutdown          (void);
*/
      void WaitForConnection (void);
/*
      void WriteData         (void);
*/
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void aapFunctionalCluster_RawDataStream::Connect(void){
}

void aapFunctionalCluster_RawDataStream::ReadData(void){
}

void aapFunctionalCluster_RawDataStream::Shutdown(void){
}

void aapFunctionalCluster_RawDataStream::WriteData(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
