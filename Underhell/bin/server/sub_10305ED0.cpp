int __thiscall sub_10305ED0(int this, int a2)
{
  sub_100EAB80((_DWORD *)this, 32);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_101AB000(
    "antlion_spit_player",
    *(float *)(this + 580),
    *(float *)(this + 584),
    *(float *)(this + 588),
    -90.0,
    0.0,
    0.0,
    0);
  sub_1023C380((_DWORD *)this, (int)"NPC_Antlion_Grub.Explode", 0.0, 0);
  return sub_100DC8D0((_BYTE *)this, a2);
}
