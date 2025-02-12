/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "CVehicle.h"
#include "eCheats.h"

struct Cheat {
    DWORD installAddress;
    void* method;
    const std::string methodName;
    unsigned int hash;
    eCheats type;
};

class CCheat {
public:
     static void(*(&m_aCheatFunctions)[92])();
     static int(&m_aCheatHashKeys)[92]; // static int m_aCheatHashKeys[92]
     static char(&m_CheatString)[30]; // static char m_CheatString[30]
     static bool(&m_aCheatsActive)[92]; // static bool m_aCheatsActive[92]
     static bool &m_bHasPlayerCheated;

public:
     static void InjectHooks();

     static void AddToCheatString(char LastPressedKey);
     static void ResetCheats();
     static void DoCheats();

     static void AdrenalineCheat();
     static void AllCarsAreGreatCheat();
     static void AllCarsAreShitCheat();
     static void ApacheCheat();
     static void BeachPartyCheat();
     static void BlackCarsCheat();
     static void BlowUpCarsCheat();
     static void CloudyWeatherCheat();
     static void CountrysideInvasionCheat();
     static void DozerCheat();
     static void DrivebyCheat();
     static void DuskCheat();
     static void ElvisLivesCheat();
     static void EverybodyAttacksPlayerCheat();
     static void ExtraSunnyWeatherCheat();
     static void FastTimeCheat();
     static void FatCheat();
     static void FlyboyCheat();
     static void FoggyWeatherCheat();
     static void FunhouseCheat();
     static void GangLandCheat();
     static void GangsCheat();
     static void GolfcartCheat();
     static void HandleSpecialCheats(eCheats cheatID);
     static void HealthCheat();
     static void HearseCheat();
     static void JetpackCheat();
     static void LoveConquersAllCheat();
     static void LovefistCheat();
     static void MayhemCheat();
     static void MidnightCheat();
     static void MoneyArmourHealthCheat();
     static void MonsterTruckCheat();
     static void MuscleCheat();
     static void NinjaCheat();
     static void NotWantedCheat();
     static void ParachuteCheat();
     static void PinkCarsCheat();
     static void PredatorCheat();
     static void QuadCheat();
     static void RainyWeatherCheat();
     static void RiotCheat();
     static void SandstormCheat();
     static void SkinnyCheat();
     static void SlowTimeCheat();
     static void StaminaCheat();
     static void StockCarCheat();
     static void StockCar2Cheat();
     static void StockCar3Cheat();
     static void StockCar4Cheat();
     static void StormCheat();
     static void StuntPlaneCheat();
     static void SuicideCheat();
     static void SunnyWeatherCheat();
     static void TankCheat();
     static void TankerCheat();
     static void TrashmasterCheat();
     static void VehicleCheat(int vehicleModelId);
     static void VehicleSkillsCheat();
     static void VillagePeopleCheat();
     static void VortexCheat();
     static void WantedCheat();
     static void WantedLevelDownCheat();
     static void WantedLevelUpCheat();
     static void WeaponCheat1();
     static void WeaponCheat2();
     static void WeaponCheat3();
     static void WeaponSkillsCheat();
     static bool IsZoneStreamingAllowed();
};

//#include "meta/meta.CCheat.h"
