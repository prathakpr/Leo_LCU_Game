#pragma once
#define Draw_Sphere(Location) if(GetWorld()) DrawDebugSphere(GetWorld(),Location,30.f,30,FColor::Green,true);
#define Draw_Sphere_SingleFrame(Location) if(GetWorld()) DrawDebugSphere(GetWorld(),Location,30.f,30,FColor::Black,false,-1.f)
#define Draw_Line(Location) if(GetWorld()) DrawDebugLine(GetWorld(), Location, Location+GetActorForwardVector()*100.f,FColor::Red,false,-1.f,0,1.f);
#define Draw_Line_SingleFrame(Location) if(GetWorld()) DrawDebugLine(GetWorld(), Location, Location+GetActorForwardVector()*100.f,FColor::Red,false,-1.f,0,1.f);
#define Draw_Point(Location) if(GetWorld()) DrawDebugPoint(GetWorld(),Location+GetActorForwardVector()*100.f,15.f,FColor::Purple,true);
#define Draw_Point_SingleFrame(Location) if(GetWorld()) DrawDebugPoint(GetWorld(),Location+GetActorForwardVector()*100.f,15.f,FColor::Purple,false,-1.f);
#define Draw_VectorBhai(Location, World) if(World) \
    {\
       DrawDebugLine(GetWorld(), Location, Location+GetActorForwardVector()*200.f,FColor::Blue,false,10.f,0,1.f);\
       DrawDebugPoint(GetWorld(),Location+GetActorForwardVector()*200.f,15.f,FColor::Black,true);\
    }
#define Draw_VectorBhai_SingleFrame(Location, World) if(World) \
    {\
       DrawDebugLine(GetWorld(), Location, Location+GetActorForwardVector()*200.f,FColor::Blue,false,-1.f,0,1.f);\
       DrawDebugPoint(GetWorld(),Location+GetActorForwardVector()*200.f,15.f,FColor::Black,false,-1.f);\
    }

