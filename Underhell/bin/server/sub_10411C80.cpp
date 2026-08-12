__int16 __usercall sub_10411C80@<ax>(int a1@<edi>)
{
  sub_100E8220(a1, "models/missile_defense.mdl");
  sub_100E8220(a1, "models/gibs/missile_defense_gibs.mdl");
  sub_1023B8B0("NPC_MissileDefense.Attack");
  sub_1023B8B0("NPC_MissileDefense.Reload");
  return sub_1023B8B0("NPC_MissileDefense.Turn");
}
