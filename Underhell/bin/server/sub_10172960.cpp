int __usercall sub_10172960@<eax>(int a1@<edi>)
{
  sub_100E8220(a1, "models/PG_props/pg_food/pg_burrito_pack.mdl");
  sub_1023B8B0("Player.Eat");
  return sub_1023B8B0("HL2Player.PickupItems");
}
