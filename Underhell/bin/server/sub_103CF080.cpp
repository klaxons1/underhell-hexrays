__int16 __usercall sub_103CF080@<ax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  sub_1032F080(a1, a2);
  sub_100E8220(a2, "models/zombie/zombie_soldier.mdl");
  sub_1023B8B0("Zombie.FootstepRight");
  sub_1023B8B0("Zombie.FootstepLeft");
  sub_1023B8B0("Zombine.ScuffRight");
  sub_1023B8B0("Zombine.ScuffLeft");
  sub_1023B8B0("Zombie.AttackHit");
  sub_1023B8B0("Zombie.AttackMiss");
  sub_1023B8B0("Zombine.Pain");
  sub_1023B8B0("Zombine.Die");
  sub_1023B8B0("Zombine.Alert");
  sub_1023B8B0("Zombine.Idle");
  sub_1023B8B0("Zombine.ReadyGrenade");
  sub_1023B8B0("ATV_engine_null");
  sub_1023B8B0("Zombine.Charge");
  return sub_1023B8B0("Zombie.Attack");
}
