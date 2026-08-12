int __usercall sub_103BCC70@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_100E8220(a2, "models/combine_turrets/ceiling_turret.mdl");
  sub_100E8220(a2, "sprites/glow1.vmt");
  dword_106EBBF4 = sub_100032E0((int)"ACT_CEILING_TURRET_OPEN");
  sub_10008F60((int)"ACT_CEILING_TURRET_OPEN", dword_106EBBF4);
  dword_106EBBF0 = sub_100032E0((int)"ACT_CEILING_TURRET_CLOSE");
  sub_10008F60((int)"ACT_CEILING_TURRET_CLOSE", dword_106EBBF0);
  dword_106EBBE8 = sub_100032E0((int)"ACT_CEILING_TURRET_CLOSED_IDLE");
  sub_10008F60((int)"ACT_CEILING_TURRET_CLOSED_IDLE", dword_106EBBE8);
  dword_106EBBEC = sub_100032E0((int)"ACT_CEILING_TURRET_OPEN_IDLE");
  sub_10008F60((int)"ACT_CEILING_TURRET_OPEN_IDLE", dword_106EBBEC);
  dword_106EBBE4 = sub_100032E0((int)"ACT_CEILING_TURRET_FIRE");
  sub_10008F60((int)"ACT_CEILING_TURRET_FIRE", dword_106EBBE4);
  dword_106EBBE0 = sub_100032E0((int)"ACT_CEILING_TURRET_DRYFIRE");
  sub_10008F60((int)"ACT_CEILING_TURRET_DRYFIRE", dword_106EBBE0);
  sub_1023B8B0("NPC_CeilingTurret.Retire");
  sub_1023B8B0("NPC_CeilingTurret.Deploy");
  sub_1023B8B0("NPC_CeilingTurret.Move");
  sub_1023B8B0("NPC_CeilingTurret.Active");
  sub_1023B8B0("NPC_CeilingTurret.Alert");
  sub_1023B8B0("NPC_CeilingTurret.ShotSounds");
  sub_1023B8B0("NPC_CeilingTurret.Ping");
  sub_1023B8B0("NPC_CeilingTurret.Die");
  sub_1023B8B0("NPC_FloorTurret.DryFire");
  return sub_10021D80(a1);
}
