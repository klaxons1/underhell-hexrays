BOOL __thiscall sub_101C6E40(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st4
  double v10; // st6
  float v11[3]; // [esp+4h] [ebp-1Ch] BYREF
  float v12; // [esp+10h] [ebp-10h]
  float v13; // [esp+14h] [ebp-Ch]
  float v14; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 308);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
        return *(_BYTE *)(this + 447) > 1u;
    }
  }
  v5 = sub_100E87E0((_BYTE *)this);
  if ( (v5 & 0xFC4030) != 0xFC4030 )
    return *(_BYTE *)(this + 447) > 1u;
  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  if ( (v5 & 0x40000) != 0 )
    v7 = 1.0;
  if ( (v5 & 0x80000) != 0 )
    v8 = 1.0;
  if ( (v5 & 0x100000) != 0 )
    v7 = v7 - 1.0;
  if ( (v5 & 0x200000) != 0 )
    v8 = v8 - 1.0;
  if ( (v5 & 0x400000) != 0 )
    v6 = 1.0;
  if ( (v5 & 0x800000) != 0 )
    v6 = v6 - 1.0;
  v15 = *(unsigned __int8 *)(this + 447);
  v9 = v7 * ((double)v15 * 50.0);
  v10 = (double)v15 * 50.0;
  v12 = v9 + *(float *)(this + 464);
  v11[0] = v12;
  v13 = v8 * v10 + *(float *)(this + 468);
  v11[1] = v13;
  v14 = v6 * v10 + *(float *)(this + 472);
  v11[2] = v14;
  sub_100D9710((float *)(this + 464), v11);
  return *(_BYTE *)(this + 447) > 1u;
}
