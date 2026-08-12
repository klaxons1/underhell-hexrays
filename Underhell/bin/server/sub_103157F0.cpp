int __cdecl sub_103157F0(int a1, float *a2, float *a3, int a4, char a5)
{
  int v5; // eax
  int v6; // edx
  int v7; // esi
  double v8; // st7
  int v9; // ecx
  int v10; // eax
  int v11; // edi
  int result; // eax
  int *v13; // edi
  int v14; // edx
  const char *v15; // [esp+34h] [ebp-38h]
  float v16[3]; // [esp+3Ch] [ebp-30h] BYREF
  float v17; // [esp+48h] [ebp-24h]
  float v18; // [esp+4Ch] [ebp-20h]
  float v19[3]; // [esp+54h] [ebp-18h] BYREF
  float v20; // [esp+60h] [ebp-Ch] BYREF
  float v21; // [esp+64h] [ebp-8h]
  float v22; // [esp+68h] [ebp-4h]

  v5 = sub_101811E0("gib", -1);
  v7 = __RTDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CGib `RTTI Type Descriptor',
         0);
  if ( !v7 )
    Warning("classname %s used to create wrong class type\n", v15);
  sub_10166E20(v7, v6, a4);
  sub_101660B0((_DWORD *)v7, -1);
  sub_100E0D20(v7, a2);
  sub_100E0EA0(v7, a3);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 76))(v7, a1);
  if ( a5 )
  {
    *(float *)(v7 + 1132) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              0.5,
                              1.0);
    sub_101129A0((unsigned __int16 *)(v7 + 320), 4);
    sub_10112C00(v7 + 320, 2);
    sub_100EAB80((_DWORD *)v7, 32);
    *(float *)(v7 + 552) = sub_10260720(400.0);
  }
  else
  {
    *(float *)(v7 + 1132) = 5.0;
  }
  sub_100EBE30(v7, 1);
  v19[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             -70.0,
             20.0);
  v19[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             0.0,
             360.0);
  v19[2] = 0.0;
  sub_10422220(v19, &v20);
  v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         550.0,
         800.0);
  v9 = *(_DWORD *)(a1 + 252) >> 12;
  v20 = v20 * v8;
  v21 = v21 * v8;
  v22 = v8 * v22;
  if ( (v9 & 1) != 0 )
    sub_100DAFD0(a1);
  v20 = v20 + *(float *)(a1 + 476);
  v21 = *(float *)(a1 + 480) + v21;
  v22 = *(float *)(a1 + 484) + v22;
  v17 = (double)sub_10219A30() * 0.000030518509 * 360.0 - 180.0;
  v18 = (double)sub_10219A30() * 0.000030518509 * 360.0 - 180.0;
  v16[0] = v17;
  v16[1] = v18;
  v16[2] = (double)sub_10219A30() * 0.000030518509 * 360.0 - 180.0;
  sub_100DD660(v7, &v20);
  if ( !a5 )
  {
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)(v7 + 320) + 48))(v7 + 320);
    v11 = sub_100E9550((_DWORD *)v7, 6, v10, 0, 0);
    if ( v11 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 60))(v11, 1);
      (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v11 + 196))(v11, &v20, v16);
    }
  }
  result = sub_10283340();
  v13 = (int *)result;
  if ( result )
  {
    sub_102851D0(result, v7, (char *)String);
    (*(void (__thiscall **)(int *, int, _DWORD))(*v13 + 140))(v13, v7, 0);
    sub_100E10C0((int)v13, &flt_106F1CA8);
    sub_100E0970((int)v13, v14, 0, 0);
    return sub_100F5880(v13, *(float *)(v7 + 1132));
  }
  return result;
}
