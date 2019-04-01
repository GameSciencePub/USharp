// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "USharpCommandlet.h"


UUSharpCommandlet::UUSharpCommandlet()
{
	IsClient = false;
	IsEditor = true;
	IsServer = false;
	LogToConsole = true;
}


int32 UUSharpCommandlet::Main(const FString& Params)
{
	UE_LOG(LogTemp, Display, TEXT("Hello world!"));

#if UE_EDITOR
    // run USharpGen game
    UWorld* EditorWorld = GEditor->GetWorld();
    //EditorWorld->Exec(EditorWorld, TEXT("USharpGen game"));
    GEngine->Exec(EditorWorld, TEXT("USharpGen game"));
#endif

	return 0;
}
