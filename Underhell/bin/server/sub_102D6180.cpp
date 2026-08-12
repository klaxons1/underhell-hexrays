int __usercall sub_102D6180@<eax>(int a1@<edi>)
{
  sub_100E8220(a1, "models/spitball_large.mdl");
  sub_100E8220(a1, "models/spitball_medium.mdl");
  sub_100E8220(a1, "models/spitball_small.mdl");
  sub_1023B8B0("GrenadeSpit.Hit");
  sub_101543E0((int)"antlion_spit_player");
  return sub_101543E0((int)"antlion_spit");
}
