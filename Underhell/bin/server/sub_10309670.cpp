int __usercall sub_10309670@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_100E8220(a2, "models/antlion_guard.mdl");
  sub_1023B8B0("NPC_AntlionGuard.Shove");
  sub_1023B8B0("NPC_AntlionGuard.HitHard");
  if ( (*(_DWORD *)(a1 + 248) & 0x20000) != 0 )
  {
    sub_1023B8B0("NPC_AntlionGuard.Inside.StepLight");
    sub_1023B8B0("NPC_AntlionGuard.Inside.StepHeavy");
  }
  else
  {
    sub_1023B8B0("NPC_AntlionGuard.StepLight");
    sub_1023B8B0("NPC_AntlionGuard.StepHeavy");
  }
  sub_1023B8B0("NPC_AntlionGuard.NearStepLight");
  sub_1023B8B0("NPC_AntlionGuard.NearStepHeavy");
  sub_1023B8B0("NPC_AntlionGuard.FarStepLight");
  sub_1023B8B0("NPC_AntlionGuard.FarStepHeavy");
  sub_1023B8B0("NPC_AntlionGuard.BreatheLoop");
  sub_1023B8B0("NPC_AntlionGuard.ShellCrack");
  sub_1023B8B0("NPC_AntlionGuard.Pain_Roar");
  sub_100E8220(a2, "sprites/grubflare1.vmt");
  sub_1023B8B0("NPC_AntlionGuard.Anger");
  sub_1023B8B0("NPC_AntlionGuard.Roar");
  sub_1023B8B0("NPC_AntlionGuard.Die");
  sub_1023B8B0("NPC_AntlionGuard.GrowlHigh");
  sub_1023B8B0("NPC_AntlionGuard.GrowlIdle");
  sub_1023B8B0("NPC_AntlionGuard.BreathSound");
  sub_1023B8B0("NPC_AntlionGuard.Confused");
  sub_1023B8B0("NPC_AntlionGuard.Fallover");
  sub_1023B8B0("NPC_AntlionGuard.FrustratedRoar");
  sub_101543E0((int)"blood_antlionguard_injured_light");
  sub_101543E0((int)"blood_antlionguard_injured_heavy");
  return sub_10021D80(a1);
}
