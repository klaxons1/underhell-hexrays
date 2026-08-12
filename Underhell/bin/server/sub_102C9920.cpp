__int16 __usercall sub_102C9920@<ax>(int a1@<ecx>, int a2@<edi>)
{
  *(float *)(a1 + 1424) = *(float *)(a1 + 804);
  sub_100E8220(a2, "effects/blueblacklargebeam.vmt");
  sub_101543E0((int)"Weapon_Combine_Ion_Cannon");
  return sub_102C8DA0(a1, a2);
}
