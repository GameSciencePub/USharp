// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Commandlets/Commandlet.h"

#include "USharpCommandlet.generated.h"


UCLASS()
class UUSharpCommandlet
	: public UCommandlet
{
	GENERATED_BODY()

public:

	/** Default constructor. */
	UUSharpCommandlet();

public:

	//~ UCommandlet interface

	virtual int32 Main(const FString& Params) override;
};
