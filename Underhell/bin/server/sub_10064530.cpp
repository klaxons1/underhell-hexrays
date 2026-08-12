// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_10064530(int a1@<ebp>, int a2@<esi>)
{
  int v2; // esi
  int (__thiscall *v3)(int, int *); // edx
  float *v4; // eax
  double v5; // st7
  int (__thiscall *v6)(int, _BYTE *); // edx
  float *v7; // eax
  void (__thiscall *v8)(int, float *, int); // edx
  _DWORD *v9; // eax
  int v10; // esi
  float v11[22]; // [esp+2Ch] [ebp-FCh] BYREF
  _BYTE v12[12]; // [esp+84h] [ebp-A4h] BYREF
  float v13[20]; // [esp+90h] [ebp-98h] BYREF
  _BYTE v14[12]; // [esp+E0h] [ebp-48h] BYREF
  int v15; // [esp+ECh] [ebp-3Ch] BYREF
  float v16[3]; // [esp+F8h] [ebp-30h] BYREF
  float v17[3]; // [esp+104h] [ebp-24h] BYREF
  float v18; // [esp+110h] [ebp-18h] BYREF
  float v19; // [esp+114h] [ebp-14h]
  float v20; // [esp+118h] [ebp-10h]
  int v21; // [esp+11Ch] [ebp-Ch]
  void *v22; // [esp+120h] [ebp-8h]
  void *retaddr; // [esp+128h] [ebp+0h]

  v21 = a1;
  v22 = retaddr;
  v2 = sub_10153490(a2);
  sub_100F5A30(v17, 0, 0);
  v3 = *(int (__thiscall **)(int, int *))(*(_DWORD *)v2 + 504);
  v18 = v17[0] * 56755.84;
  v19 = v17[1] * 56755.84;
  v20 = 56755.84 * v17[2];
  v4 = (float *)v3(v2, &v15);
  v5 = *v4 + v18;
  v20 = COERCE_FLOAT(v14);
  v16[0] = v5;
  v16[1] = v4[1] + v19;
  v6 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 504);
  v16[2] = v4[2] + COERCE_FLOAT(v14);
  v7 = (float *)v6(v2, v14);
  sub_1001F180(v11, v7, v16);
  sub_10265570(v2, 0);
  v8 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_106B31F4 + 16);
  v20 = COERCE_FLOAT(v12);
  v19 = COERCE_FLOAT(&v18);
  v8(dword_106B31F4, v11, 33701899);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v12, (int)v13, 255, 0, 0, 1, 5.0);
  if ( 1.0 != v13[8] )
  {
    v9 = (_DWORD *)sub_10022B00(0);
    if ( v9 )
    {
      while ( (v9[59] & 0x1000) == 0 )
      {
        v10 = sub_1012BC10(v9);
        if ( !v10 )
          return;
        while ( 1 )
        {
          v9 = (_DWORD *)__RTDynamicCast(
                           v10,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                           (int)&CAI_BaseNPC `RTTI Type Descriptor',
                           0);
          if ( v9 )
            break;
          v10 = sub_1012BC10(v10);
          if ( !v10 )
            return;
        }
      }
      (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*v9 + 416))(v9, v13, 0, 0);
    }
  }
}
