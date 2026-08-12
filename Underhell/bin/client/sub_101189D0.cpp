int __thiscall sub_101189D0(_DWORD *this, int a2, float *a3)
{
  float v3; // edx
  int v4; // eax
  float *v5; // eax
  double v6; // rt0
  double v7; // st5
  float v8; // edx
  float v9; // eax
  float v11; // [esp+Ch] [ebp-Ch] BYREF
  float v12; // [esp+10h] [ebp-8h]
  float v13; // [esp+14h] [ebp-4h]

  v11 = *a3;
  v3 = a3[1];
  v13 = a3[2];
  v12 = v3;
  if ( v11 != flt_103EE008 || v3 != flt_103EE00C || v13 != flt_103EE010 )
  {
    v4 = this[7];
    if ( *(_DWORD *)(v4 + 1284) )
      v5 = (float *)(v4 + 1308);
    else
      v5 = &flt_10459240;
    v6 = v3;
    v7 = v11 - *v5;
    v8 = v5[1];
    v9 = v5[2];
    v11 = v7;
    v12 = v6 - v8;
    v13 = v13 - v9;
  }
  return (*(int (__thiscall **)(_DWORD *, int, float *))(*this + 100))(this, a2, &v11);
}
