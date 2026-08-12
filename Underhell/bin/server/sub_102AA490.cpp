char __thiscall sub_102AA490(int this, float *a2)
{
  int v3; // eax
  int v4; // esi
  char result; // al
  double v6; // st6
  double v7; // st7
  double v8; // st5
  float v9; // [esp+0h] [ebp-8Ch]
  _BYTE v10[48]; // [esp+10h] [ebp-7Ch] BYREF
  int v11[4]; // [esp+40h] [ebp-4Ch] BYREF
  _BYTE v12[12]; // [esp+50h] [ebp-3Ch] BYREF
  float v13[3]; // [esp+5Ch] [ebp-30h] BYREF
  float v14[3]; // [esp+68h] [ebp-24h] BYREF
  int v15[3]; // [esp+74h] [ebp-18h] BYREF
  float v16; // [esp+80h] [ebp-Ch] BYREF
  float v17; // [esp+84h] [ebp-8h]
  float v18; // [esp+88h] [ebp-4h]

  v3 = *(_DWORD *)(this + 56);
  if ( v3 )
  {
    sub_100BD6D0(*(void **)(this + 4), v3, (int)v12, &v16, 0, 0);
  }
  else
  {
    v4 = *(_DWORD *)(this + 4);
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)(this + 4));
    v13[0] = *(float *)(v4 + 704);
    v13[1] = *(float *)(v4 + 708);
    v13[2] = *(float *)(v4 + 712);
    sub_10422220(v13, &v16);
  }
  if ( 0.0 == *(float *)(this + 48) )
  {
    *a2 = v16;
    a2[1] = v17;
    a2[2] = v18;
    return 1;
  }
  else
  {
    v6 = v17;
    v7 = v16;
    v8 = v18;
    if ( cos(*(float *)(this + 48) * 0.017453292) > a2[2] * v18 + *a2 * v16 + a2[1] * v17 )
    {
      *(float *)v15 = a2[1] * v8 - a2[2] * v6;
      *(float *)&v15[1] = a2[2] * v7 - v8 * *a2;
      *(float *)&v15[2] = v6 * *a2 - v7 * a2[1];
      off_10689714();
      v9 = -*(float *)(this + 48);
      sub_104230F0((int)v15, v9, (int)v11);
      sub_10422FA0(v11, v10);
      sub_10421C00(&v16, v10, v14);
      off_10689714();
      *a2 = v14[0];
      result = 1;
      a2[1] = v14[1];
      a2[2] = v14[2];
    }
    else
    {
      return 0;
    }
  }
  return result;
}
