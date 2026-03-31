#include "MySparta.h"

IMPLEMENT_MODULE(FMySparta, MySparta)

void FMySparta::StartupModule()
{
    UE_LOG(LogTemp, Warning, TEXT("MySparta is activated."));
}

void FMySparta::ShutdownModule()
{
    UE_LOG(LogTemp, Warning, TEXT("MySparta is shutdowned."));
}