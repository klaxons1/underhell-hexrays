__int16 __usercall sub_10316800@<ax>(int a1@<ecx>, int a2@<edi>)
{
  nullsub_4();
  if ( (*(_DWORD *)(a1 + 248) & 0x20000) != 0 )
    sub_100E8220(a2, "models/combine_helicopter/helicopter_bomb01.mdl");
  else
    sub_100E8220(a2, "models/combine_helicopter.mdl");
  sub_100E8220(a2, "sprites/redglow1.vmt");
  if ( !*(_BYTE *)(a1 + 4181) )
  {
    sub_10260680("grenade_helicopter", 0);
    sub_10260680("env_fire_trail", 0);
    sub_10312F20(a2);
    sub_100E8220(a2, "models/combine_soldier.mdl");
  }
  sub_1023B8B0("NPC_AttackHelicopter.ChargeGun");
  if ( (*(_BYTE *)(a1 + 250) & 1) != 0 )
    sub_1023B8B0("NPC_AttackHelicopter.RotorsLoud");
  else
    sub_1023B8B0("NPC_AttackHelicopter.Rotors");
  sub_1023B8B0("NPC_AttackHelicopter.DropMine");
  sub_1023B8B0("NPC_AttackHelicopter.BadlyDamagedAlert");
  sub_1023B8B0("NPC_AttackHelicopter.CrashingAlarm1");
  sub_1023B8B0("NPC_AttackHelicopter.MegabombAlert");
  sub_1023B8B0("NPC_AttackHelicopter.RotorBlast");
  sub_1023B8B0("NPC_AttackHelicopter.EngineFailure");
  sub_1023B8B0("NPC_AttackHelicopter.FireGun");
  sub_1023B8B0("NPC_AttackHelicopter.Crash");
  sub_1023B8B0("HelicopterBomb.HardImpact");
  sub_1023B8B0("ReallyLoudSpark");
  return sub_1023B8B0("NPC_AttackHelicopterGrenade.Ping");
}
