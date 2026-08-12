char __thiscall sub_103C10F0(int this, int a2, int a3, int a4)
{
  int v6[20]; // [esp+14h] [ebp-74h] BYREF
  float v7[3]; // [esp+64h] [ebp-24h] BYREF
  float v8[3]; // [esp+70h] [ebp-18h] BYREF
  int v9[3]; // [esp+7Ch] [ebp-Ch] BYREF

  if ( a2 != dword_106E6540 )
    return sub_10038420((int *)this, a2, a3, a4);
  if ( *(_DWORD *)(this + 3776) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 3776) & 0xFFF) + 2] != *(_DWORD *)(this + 3776) >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 3776) & 0xFFF) + 1] )
  {
    if ( a4 )
      *(_DWORD *)(this + 3776) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
    else
      *(_DWORD *)(this + 3776) = -1;
    *(float *)(this + 3780) = *(float *)(dword_106B31C8 + 12) + 3.0;
  }
  sub_104222B0(a4 + 728, v9, 0, v8);
  v7[0] = v8[0] * 50.0 + *(float *)v9 * 100.0;
  v7[1] = v8[1] * 50.0 + *(float *)&v9[1] * 100.0;
  v7[2] = 100.0 * *(float *)&v9[2] + 50.0 * v8[2];
  sub_100EA150(this, v7);
  sub_10248110((int)v6, a4, a4, 30.0, 128, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10248690((float *)v6, (float *)v9, (float *)(this + 580), 1.0);
  sub_100D9E70((int *)this, this, v6);
  sub_1023C380((_DWORD *)this, (int)"NPC_Combine.WeaponBash", 0.0, 0);
  return 1;
}
