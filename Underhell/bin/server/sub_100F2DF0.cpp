int __usercall sub_100F2DF0@<eax>(int a1@<edi>)
{
  int result; // eax

  sub_100F3A60();
  sub_100E8220(a1, "models/weapons/w_grenade.mdl");
  result = sub_100E8220(a1, "sprites/twinkle01.vmt");
  dword_10698CA0 = result;
  return result;
}
