int __thiscall sub_10118A90(_DWORD *this, float *a2)
{
  float v2; // edx
  int v3; // eax
  float *v4; // eax
  double v5; // rt0
  double v6; // st5
  float v7; // edx
  float v8; // eax
  double v9; // st6
  int (__thiscall *v10)(_DWORD *, float *); // edx
  float v12; // [esp+Ch] [ebp-Ch] BYREF
  float v13; // [esp+10h] [ebp-8h]
  float v14; // [esp+14h] [ebp-4h]

  v12 = *a2;
  v2 = a2[1];
  v14 = a2[2];
  v13 = v2;
  if ( v12 == flt_103EE008 && v2 == flt_103EE00C && v14 == flt_103EE010 )
    return (*(int (__thiscall **)(_DWORD *, float *))(*this + 108))(this, &v12);
  v3 = this[7];
  if ( *(_DWORD *)(v3 + 1284) )
    v4 = (float *)(v3 + 1308);
  else
    v4 = &flt_10459240;
  v5 = v2;
  v6 = v12 - *v4;
  v7 = v4[1];
  v8 = v4[2];
  v12 = v6;
  v9 = v5 - v7;
  v10 = *(int (__thiscall **)(_DWORD *, float *))(*this + 108);
  v13 = v9;
  v14 = v14 - v8;
  return v10(this, &v12);
}
