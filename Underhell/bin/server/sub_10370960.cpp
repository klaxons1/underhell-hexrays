int __usercall sub_10370960@<eax>(int a1@<edi>)
{
  sub_100E8220(a1, off_1067424C[0]);
  sub_100E8220(a1, "sprites/light_glow02_noz.vmt");
  sub_1023B8B0("NPC_Hunter.FlechetteNearmiss");
  sub_1023B8B0("NPC_Hunter.FlechetteHitBody");
  sub_1023B8B0("NPC_Hunter.FlechetteHitWorld");
  sub_1023B8B0("NPC_Hunter.FlechettePreExplode");
  sub_1023B8B0("NPC_Hunter.FlechetteExplode");
  sub_101543E0((int)"hunter_flechette_trail_striderbuster");
  sub_101543E0((int)"hunter_flechette_trail");
  return sub_101543E0((int)"hunter_projectile_explosion_1");
}
