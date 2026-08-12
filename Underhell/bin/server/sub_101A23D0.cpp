int __usercall sub_101A23D0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_1032F080();
  sub_100E8220(a2, "models/butcher.mdl");
  *(_DWORD *)(a1 + 808) = 11;
  sub_1023B8B0("NPC_Butcher.FootstepRight");
  sub_1023B8B0("NPC_Butcher.FootstepLeft");
  sub_1023B8B0("Zombie.AttackMiss");
  sub_1023B8B0("Zombie.Die");
  sub_1023B8B0("NPC_Butcher.Alert");
  sub_1023B8B0("NPC_Butcher.Idle");
  sub_1023B8B0("Metal.Door_Breach");
  sub_1023B8B0("ATV_engine_null");
  sub_1023B8B0("NPC_Butcher.Charge");
  sub_1023B8B0("NPC_Butcher.ChargeHit");
  sub_1023B8B0("NPC_Butcher.Melee");
  return sub_101543E0((int)"door_explosion_shockwave");
}
