int __thiscall sub_1039CC00(int this, int a2)
{
  unsigned int v3; // eax
  _DWORD *v4; // eax

  if ( (*(_DWORD *)(a2 + 64) & 0x2040) == 0 )
    sub_1023C380((_DWORD *)this, (int)"NPC_PoisonZombie.Die", 0.0, 0);
  if ( !*(_BYTE *)(this + 3776) )
  {
    v3 = *(_DWORD *)(a2 + 44);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    sub_1039C750((_DWORD *)this, *(_DWORD *)(a2 + 64) == 64, *(float *)(a2 + 52), v4);
  }
  return sub_1032F780((_BYTE *)this, a2);
}
