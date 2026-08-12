void __usercall sub_10403D00(_DWORD *a1@<ecx>, int a2@<edi>)
{
  sub_100D3140(a1);
  sub_1023B8B0("Missile.Ignite");
  sub_1023B8B0("Missile.Accelerate");
  sub_100E8220(a2, "sprites/redglow1.vmt");
  sub_100E8220(a2, "sprites/redglow1.vmt");
  sub_100E8220(a2, "effects/laser1_noz.vmt");
  sub_100E8220(a2, "sprites/laserpointer.vmt");
  sub_10260680("rpg_missile", 0);
}
