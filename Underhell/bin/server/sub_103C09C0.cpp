int __thiscall sub_103C09C0(_DWORD *this)
{
  const char *v2; // edi
  _BYTE v4[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 28))(this, v4);
  if ( !v2 || !*v2 )
    v2 = "models/combine_turrets/floor_turret.mdl";
  sub_100E8220((int)v2, v2);
  sub_100E8220((int)v2, "sprites/glow1.vmt");
  if ( !v2 || !*v2 )
    v2 = 0;
  sub_10213890(v2);
  if ( (this[62] & 0x200) != 0 )
  {
    sub_100E8220((int)v2, "effects/laser1.vmt");
    sub_1023B8B0("NPC_FloorTurret.AlarmPing");
  }
  dword_106EBC78 = sub_100032E0((int)"ACT_FLOOR_TURRET_OPEN");
  sub_10008F60((int)"ACT_FLOOR_TURRET_OPEN", dword_106EBC78);
  dword_106EBC74 = sub_100032E0((int)"ACT_FLOOR_TURRET_CLOSE");
  sub_10008F60((int)"ACT_FLOOR_TURRET_CLOSE", dword_106EBC74);
  dword_106EBC6C = sub_100032E0((int)"ACT_FLOOR_TURRET_CLOSED_IDLE");
  sub_10008F60((int)"ACT_FLOOR_TURRET_CLOSED_IDLE", dword_106EBC6C);
  dword_106EBC70 = sub_100032E0((int)"ACT_FLOOR_TURRET_OPEN_IDLE");
  sub_10008F60((int)"ACT_FLOOR_TURRET_OPEN_IDLE", dword_106EBC70);
  dword_106EBC68 = sub_100032E0((int)"ACT_FLOOR_TURRET_FIRE");
  sub_10008F60((int)"ACT_FLOOR_TURRET_FIRE", dword_106EBC68);
  sub_1023B8B0("NPC_FloorTurret.Retire");
  sub_1023B8B0("NPC_FloorTurret.Deploy");
  sub_1023B8B0("NPC_FloorTurret.Move");
  sub_1023B8B0("NPC_Combine.WeaponBash");
  sub_1023B8B0("NPC_FloorTurret.Activate");
  sub_1023B8B0("NPC_FloorTurret.Alert");
  *((_WORD *)this + 1983) = sub_1023B8B0("NPC_FloorTurret.ShotSounds");
  sub_1023B8B0("NPC_FloorTurret.Die");
  sub_1023B8B0("NPC_FloorTurret.Retract");
  sub_1023B8B0("NPC_FloorTurret.Alarm");
  sub_1023B8B0("NPC_FloorTurret.Ping");
  sub_1023B8B0("NPC_FloorTurret.DryFire");
  sub_1023B8B0("NPC_FloorTurret.Destruct");
  sub_101543E0((int)"explosion_turret_break");
  return sub_10021D80((int)this);
}
