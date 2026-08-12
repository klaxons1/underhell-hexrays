int __thiscall sub_10128F60(int this)
{
  double v2; // st7
  double v3; // st4
  double v4; // st7
  double v5; // st4
  double v6; // st7
  double v7; // st4
  int result; // eax
  float v9; // [esp+18h] [ebp-3Ch]
  float v10[3]; // [esp+24h] [ebp-30h] BYREF
  float v11[3]; // [esp+30h] [ebp-24h] BYREF
  int v12; // [esp+3Ch] [ebp-18h] BYREF
  float v13; // [esp+40h] [ebp-14h]
  float v14; // [esp+44h] [ebp-10h]
  int v15; // [esp+48h] [ebp-Ch] BYREF
  float v16; // [esp+4Ch] [ebp-8h]
  float v17; // [esp+50h] [ebp-4h]

  v9 = *(float *)(this + 852) + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0((int *)this, v9, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_104222B0(this + 704, &v12, v11, v10);
  v15 = v12;
  v16 = v13;
  v17 = v14;
  v2 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -1.0,
         1.0);
  v3 = *(float *)(this + 836);
  *(float *)&v15 = v11[0] * v2 * v3 + *(float *)&v15;
  v16 = v11[1] * v2 * v3 + v16;
  v17 = v2 * v11[2] * v3 + v17;
  v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -1.0,
         1.0);
  v5 = *(float *)(this + 836);
  *(float *)&v15 = *(float *)&v12 * v4 * v5 + *(float *)&v15;
  v16 = v13 * v4 * v5 + v16;
  v17 = v4 * v14 * v5 + v17;
  v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -1.0,
         1.0);
  v7 = *(float *)(this + 836);
  *(float *)&v15 = v10[0] * v6 * v7 + *(float *)&v15;
  v16 = v10[1] * v6 * v7 + v16;
  v17 = v6 * v10[2] * v7 + v17;
  off_10689714();
  result = sub_10128C80(this, (float *)&v15, *(float *)(this + 816));
  if ( (int)--*(_DWORD *)(this + 800) <= 0 )
  {
    if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    {
      *(_DWORD *)(this + 800) = *(_DWORD *)(this + 804);
      sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
    }
    else
    {
      sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
    }
    return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  }
  return result;
}
