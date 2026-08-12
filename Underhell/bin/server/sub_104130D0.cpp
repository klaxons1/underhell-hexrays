int __thiscall sub_104130D0(int this, float *a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  double v10; // st7
  int v11; // eax
  float *v12; // eax
  int result; // eax
  const char *v14; // [esp+3Ch] [ebp-48h]
  float v15[3]; // [esp+48h] [ebp-3Ch] BYREF
  float v16[3]; // [esp+54h] [ebp-30h] BYREF
  float v17[3]; // [esp+60h] [ebp-24h] BYREF
  float v18[3]; // [esp+6Ch] [ebp-18h] BYREF
  float v19; // [esp+78h] [ebp-Ch] BYREF
  float v20; // [esp+7Ch] [ebp-8h]
  float v21; // [esp+80h] [ebp-4h]

  sub_1013D350(a2, &flt_106F1CB4, this, 232, 500, 1321, 0.0, 0, -1, 0, 0);
  sub_10261B70(a2, 25.0, 150.0, 1.0, 750.0, 0, 0);
  v3 = sub_101811E0("gib", -1);
  v5 = __RTDynamicCast(
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CGib `RTTI Type Descriptor',
         0);
  if ( !v5 )
    Warning("classname %s used to create wrong class type\n", v14);
  sub_10166E20(v5, v4, (int)"models/gibs/hgibs.mdl");
  sub_101660B0((_DWORD *)v5, -1);
  v18[0] = (double)sub_10219A30() * 0.000030518509 * 180.0 - 90.0;
  v18[1] = (double)sub_10219A30() * 0.000030518509 * 180.0 - 90.0;
  v18[2] = (double)sub_10219A30() * 0.000030518509 * 180.0 - 90.0;
  sub_100E0D20(v5, a2);
  sub_100E0EA0(v5, v18);
  v6 = ((__int64 (__thiscall *)(int, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2);
  sub_10166E20(v5, SHIDWORD(v6), (int)off_10688A80[(_DWORD)v6]);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 76))(v5, this);
  *(float *)(v5 + 1132) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                            dword_106B31E4,
                            6.0,
                            8.0);
  sub_100EBE30(v5, 1);
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 320) + 48))(v5 + 320);
  v8 = sub_100E9550((_DWORD *)v5, 6, v7, 0, 0);
  v9 = v8;
  if ( v8 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 60))(v8, 1);
    v17[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               -40.0,
               0.0);
    v17[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               0.0,
               360.0);
    v17[2] = 0.0;
    sub_10422220(v17, &v19);
    v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            300.0,
            900.0);
    v11 = *(_DWORD *)(this + 252) >> 12;
    v19 = v19 * v10;
    v20 = v20 * v10;
    v21 = v10 * v21;
    if ( (v11 & 1) != 0 )
      sub_100DAFD0(this);
    v19 = v19 + *(float *)(this + 476);
    v20 = *(float *)(this + 480) + v20;
    v21 = *(float *)(this + 484) + v21;
    v12 = sub_1001F010(v15, -180.0, 180.0);
    v16[0] = *v12;
    v16[1] = v12[1];
    v16[2] = v12[2];
    sub_100DD660(v5, &v19);
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v9 + 196))(v9, &v19, v16);
  }
  result = sub_1012B790(v5, 0);
  if ( result )
    return sub_1012B210(result, *(float *)(v5 + 1132));
  return result;
}
