int __usercall sub_1039BB00@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  sub_100E8220(a2, "models/zombie/poison.mdl");
  sub_1023B8B0("NPC_PoisonZombie.Die");
  sub_1023B8B0("NPC_PoisonZombie.ThrowWarn");
  sub_1023B8B0("NPC_PoisonZombie.Throw");
  sub_1023B8B0("NPC_PoisonZombie.Idle");
  sub_1023B8B0("NPC_PoisonZombie.Pain");
  sub_1023B8B0("NPC_PoisonZombie.Alert");
  sub_1023B8B0("NPC_PoisonZombie.FootstepRight");
  sub_1023B8B0("NPC_PoisonZombie.FootstepLeft");
  sub_1023B8B0("NPC_PoisonZombie.Attack");
  sub_1023B8B0("NPC_PoisonZombie.FastBreath");
  sub_1023B8B0("NPC_PoisonZombie.Moan1");
  sub_1023B8B0("Zombie.AttackHit");
  sub_1023B8B0("Zombie.AttackMiss");
  return sub_1032F080(a1, a2);
}
