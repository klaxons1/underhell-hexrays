int __usercall sub_10171D00@<eax>(int a1@<edi>)
{
  sub_100E8220(a1, "models/PG_props/pg_food/pg_apple.mdl");
  sub_1023B8B0("Player.Eat.Apple");
  return sub_1023B8B0("HL2Player.PickupItems");
}
