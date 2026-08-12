int __usercall sub_102D53F0@<eax>(int a1@<edi>)
{
  sub_100E8220(a1, "models/Weapons/w_grenade.mdl");
  sub_1023B8B0("Grenade.Blip");
  sub_100E8220(a1, "sprites/redglow1.vmt");
  sub_100E8220(a1, "sprites/bluelaser1.vmt");
  return sub_100F3A60();
}
