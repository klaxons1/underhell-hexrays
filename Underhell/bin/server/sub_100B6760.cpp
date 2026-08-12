double __thiscall sub_100B6760(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // edi
  double v11; // st6
  unsigned int v12; // eax
  double v13; // st5
  _BYTE v15[12]; // [esp+4h] [ebp-10h] BYREF
  float v16; // [esp+10h] [ebp-4h] BYREF

  if ( !*(_BYTE *)(this + 3695) )
    return 0.0;
  if ( *(_BYTE *)(this + 3692) )
    return 0.0;
  v2 = *(_DWORD *)(this + 3644);
  if ( v2 == -1 )
    return 0.0;
  v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
  v4 = v2 >> 12;
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v4 || !*v3 )
    return 0.0;
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] == v4 )
    v5 = *v3;
  else
    v5 = 0;
  if ( *(_BYTE *)(this + 3732) )
    v6 = sub_101ACCC0(v5);
  else
    v6 = sub_101ACC90(v5);
  v7 = sub_101ACC70(v6, 1);
  if ( !v7 )
  {
    v8 = *(_DWORD *)(this + 3644);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
    v7 = v9;
  }
  if ( *(_DWORD *)(this + 3644) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != *(_DWORD *)(this + 3644) >> 12 )
  {
    v10 = 0;
  }
  else
  {
    v10 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
  }
  if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
    sub_100DAE60(v10);
  if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
    sub_100DAE60(v7);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10424590(this + 580, v7 + 580, v10 + 580, v15, &v16);
  v11 = v16;
  if ( v16 <= 1.0 )
  {
    if ( v11 < 0.0 )
    {
      v11 = 0.0;
      v16 = 0.0;
    }
  }
  else
  {
    v11 = 1.0;
    v16 = 1.0;
  }
  v12 = *(_DWORD *)(this + 3644);
  v13 = *(float *)(v7 + 812);
  if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v12 >> 12 )
    return v13 * (1.0 - v11) + v11 * MEMORY[0x32C];
  else
    return v13 * (1.0 - v11) + v11 * *(float *)(off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1] + 812);
}
