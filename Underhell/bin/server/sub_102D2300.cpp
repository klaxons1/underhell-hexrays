void __thiscall sub_102D2300(int this, int a2, float *a3, float *a4, int a5, int a6)
{
  double v7; // st7
  int v8; // eax
  double v9; // st6
  double v10; // st7
  double v11; // st7
  double v12; // st7
  int v13; // eax
  _BYTE v14[12]; // [esp+18h] [ebp-24h] BYREF
  float v15[3]; // [esp+24h] [ebp-18h] BYREF
  float v16; // [esp+30h] [ebp-Ch] BYREF
  float v17; // [esp+34h] [ebp-8h]
  float v18; // [esp+38h] [ebp-4h]

  v7 = a4[2] * 0.0;
  v8 = *(_DWORD *)(this + 1404) + 1;
  v9 = v7 - a4[1];
  v10 = *a4 - v7;
  v18 = 1.0;
  v16 = v9 * flt_10664D74[v8];
  v11 = v10 * flt_10664D74[v8];
  *(_DWORD *)(this + 1404) = v8;
  v17 = v11;
  if ( v8 >= 6 )
    *(_DWORD *)(this + 1404) = 0;
  off_10689714();
  v12 = *(float *)(this + 1400);
  v15[0] = v16 * v12;
  v15[1] = v17 * v12;
  v15[2] = v12 * v18;
  sub_10422540(&v16, v14);
  v13 = sub_10403C30(a3, v14, v15, this);
  sub_104083B0(v13);
  sub_102D19C0((char *)this, a2, a3, a4, this, a6);
  if ( (int)--*(_DWORD *)(this + 916) <= 0 )
  {
    *(_DWORD *)(this + 916) = *(_DWORD *)(this + 1408);
    *(float *)(this + 800) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                               dword_106B31E4,
                               2.0,
                               3.0)
                           + *(float *)(this + 800);
  }
  sub_1023C380((_DWORD *)this, (int)"PropAPC.FireCannon", 0.0, 0);
}
