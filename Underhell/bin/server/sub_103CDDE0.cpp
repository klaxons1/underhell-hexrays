__int16 __usercall sub_103CDDE0@<ax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  sub_1032F080(a1, a2);
  sub_100E8220(a2, "models/zombie/classic.mdl");
  sub_100E8220(a2, "models/zombie/classic_torso.mdl");
  sub_100E8220(a2, "models/zombie/classic_legs.mdl");
  v3 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 28))(a1, v5);
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  sub_1023B8B0("Zombie.FootstepRight");
  sub_1023B8B0("Zombie.FootstepLeft");
  sub_1023B8B0("Zombie.FootstepLeft");
  sub_1023B8B0("Zombie.ScuffRight");
  sub_1023B8B0("Zombie.ScuffLeft");
  sub_1023B8B0("Zombie.AttackHit");
  sub_1023B8B0("Zombie.AttackMiss");
  sub_1023B8B0("Zombie.Pain");
  sub_1023B8B0("Zombie.Die");
  sub_1023B8B0("Zombie.Alert");
  sub_1023B8B0("Zombie.Idle");
  sub_1023B8B0("Zombie.Attack");
  sub_1023B8B0("NPC_BaseZombie.Moan1");
  sub_1023B8B0("NPC_BaseZombie.Moan2");
  sub_1023B8B0("NPC_BaseZombie.Moan3");
  return sub_1023B8B0("NPC_BaseZombie.Moan4");
}
