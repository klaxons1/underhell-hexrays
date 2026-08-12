int __thiscall sub_102FF3B0(int this)
{
  const char **v2; // esi
  const char **v3; // esi
  const char **v4; // esi
  int result; // eax
  int i; // esi
  int v7; // ecx

  if ( (*(_DWORD *)(this + 248) & 0x40000) != 0 )
  {
    sub_100E8220(this, "models/antlion_worker.mdl");
    sub_10213890("models/antlion_worker.mdl");
    sub_10260680("grenade_spit", 0);
    sub_101543E0((int)"blood_impact_antlion_worker_01");
    sub_101543E0((int)"antlion_gib_02");
    sub_101543E0((int)"blood_impact_yellow_01");
  }
  else
  {
    sub_100E8220(this, "models/antlion.mdl");
    sub_10213890("models/antlion.mdl");
    sub_101543E0((int)"blood_impact_antlion_01");
    sub_101543E0((int)"AntlionGib");
  }
  v2 = (const char **)off_1066A940;
  do
    sub_100E8220(this, *v2++);
  while ( (int)v2 < (int)off_1066A94C );
  v3 = (const char **)off_1066A94C;
  do
    sub_100E8220(this, *v3++);
  while ( (int)v3 < (int)off_1066A958 );
  v4 = (const char **)off_1066A958;
  do
    sub_100E8220(this, *v4++);
  while ( (int)v4 < (int)&dword_1066A964 );
  sub_1023B8B0("NPC_Antlion.RunOverByVehicle");
  sub_1023B8B0("NPC_Antlion.MeleeAttack");
  *(_WORD *)(this + 4156) = sub_1023B8B0("NPC_Antlion.Footstep");
  sub_1023B8B0("NPC_Antlion.BurrowIn");
  sub_1023B8B0("NPC_Antlion.BurrowOut");
  sub_1023B8B0("NPC_Antlion.FootstepSoft");
  sub_1023B8B0("NPC_Antlion.FootstepHeavy");
  sub_1023B8B0("NPC_Antlion.MeleeAttackSingle");
  sub_1023B8B0("NPC_Antlion.MeleeAttackDouble");
  sub_1023B8B0("NPC_Antlion.Distracted");
  sub_1023B8B0("NPC_Antlion.Idle");
  sub_1023B8B0("NPC_Antlion.Pain");
  sub_1023B8B0("NPC_Antlion.Land");
  sub_1023B8B0("NPC_Antlion.WingsOpen");
  sub_1023B8B0("NPC_Antlion.LoopingAgitated");
  sub_1023B8B0("NPC_Antlion.Distracted");
  sub_1023B8B0("NPC_Antlion.PoisonBurstScream");
  sub_1023B8B0("NPC_Antlion.PoisonBurstScreamSubmerged");
  sub_1023B8B0("NPC_Antlion.PoisonBurstExplode");
  sub_1023B8B0("NPC_Antlion.MeleeAttack_Muffled");
  sub_1023B8B0("NPC_Antlion.TrappedMetal");
  sub_1023B8B0("NPC_Antlion.ZappedFlip");
  sub_1023B8B0("NPC_Antlion.PoisonShoot");
  sub_1023B8B0("NPC_Antlion.PoisonBall");
  result = sub_10021D80(this);
  for ( i = 0; i < *(_DWORD *)(this + 3640); ++i )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(this + 3628) + 4 * i);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 68))(v7);
  }
  return result;
}
