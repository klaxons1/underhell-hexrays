int __thiscall sub_1037AEE0(int this)
{
  float v3; // [esp+8h] [ebp-Ch]

  sub_1023C380((_DWORD *)this, (int)"NPC_Hunter.FlechettePreExplode", 0.0, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_1023D4B0(67108872, (float *)(this + 580), 150, 0.5, this, 0, 0);
  sub_100EC3F0((_DWORD *)this, (int)sub_1037A480, 0.0, 0);
  v3 = *(float *)(dword_106B31C8 + 12) + 1.0;
  return sub_100EC4A0((int *)this, v3, 0);
}
