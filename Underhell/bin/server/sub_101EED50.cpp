void __thiscall sub_101EED50(int this, int a2)
{
  double v3; // st7
  unsigned int v4; // eax
  int v5; // ecx
  int *v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  float v9; // [esp+8h] [ebp-10h]

  if ( *(_BYTE *)(this + 2122) )
  {
    v3 = *(float *)(this + 2128);
    sub_101E9580((void *)this, COERCE_INT(*(float *)(this + 2128)), 0, 0, 0);
    v4 = *(_DWORD *)(this + 4028);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4028) & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (*(_DWORD *)(this + 4028) & 0xFFF) + 1];
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 836))(v5, 2);
    if ( *(_BYTE *)(this + 2122) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 2122);
      }
      *(_BYTE *)(this + 2122) = 0;
    }
    v7 = *(_DWORD *)(this + 4028);
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4028) & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*(_DWORD *)(this + 4028) & 0xFFF) + 1];
    sub_100D18C0(v8);
    v9 = v3 * 0.2 + *(float *)(dword_106B31C8 + 12);
    sub_100EC4A0((int *)this, v9, (int)"FlashLightContext");
  }
}
