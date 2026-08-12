// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_10163400@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>, float *a4, float *a5)
{
  double v5; // st6
  double v6; // st7
  int result; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  int v12; // edx
  float v13; // eax
  double v14; // st7
  float v15[20]; // [esp+24h] [ebp-19Ch] BYREF
  float v16[22]; // [esp+74h] [ebp-14Ch] BYREF
  float v17[3]; // [esp+CCh] [ebp-F4h] BYREF
  float v18; // [esp+D8h] [ebp-E8h] BYREF
  char v19; // [esp+10Eh] [ebp-B2h]
  _DWORD v20[4]; // [esp+124h] [ebp-9Ch] BYREF
  float v21[26]; // [esp+134h] [ebp-8Ch] BYREF
  _DWORD v22[3]; // [esp+19Ch] [ebp-24h] BYREF
  float v23; // [esp+1A8h] [ebp-18h] BYREF
  float v24; // [esp+1ACh] [ebp-14h]
  float v25; // [esp+1B0h] [ebp-10h]
  int v26; // [esp+1B4h] [ebp-Ch]
  void *v27; // [esp+1B8h] [ebp-8h]
  void *retaddr; // [esp+1C0h] [ebp+0h]

  v26 = a1;
  v27 = retaddr;
  v5 = 16.0 * a5[2];
  v6 = a5[1] * 16.0;
  v23 = *a5 * 16.0 + *a4;
  v24 = v6 + a4[1];
  v25 = v5 + a4[2];
  sub_1000E430(v15, a4, &v23);
  sub_1012D400(v22, 0, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, float *, int, int))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v15,
    16395,
    v22,
    v17,
    a2,
    a3);
  result = dword_10439134;
  if ( *(_DWORD *)(dword_10439134 + 48) )
    result = sub_10130AC0(v17, &v18, 255, 0, 0, 1, 5.0);
  if ( (v19 & 4) == 0 )
  {
    v8 = *a5;
    v24 = COERCE_FLOAT(&v23);
    v23 = *(float *)&a4;
    v9 = 128.0 * a5[2];
    v10 = *a4 - v8 * 128.0;
    v11 = a5[1] * 128.0;
    v23 = v10;
    v24 = a4[1] - v11;
    v25 = a4[2] - v9;
    sub_1000E430(v16, (float *)LODWORD(v23), (float *)LODWORD(v24));
    v12 = *((_DWORD *)a4 + 1);
    v13 = a4[2];
    v23 = *a4;
    v25 = v13;
    v20[0] = &CRagdollBoltEnumerator::`vftable';
    sub_100A44E0(v21, v12);
    v21[20] = v23;
    v14 = v24;
    v24 = COERCE_FLOAT(v20);
    v21[21] = v14;
    v23 = 0.0;
    v21[22] = v25;
    (*(void (__thiscall **)(int, int, float *, _DWORD, _DWORD *))(*(_DWORD *)dword_10413184 + 56))(
      dword_10413184,
      8,
      v16,
      0,
      v20);
    return sub_101632D0(a4, a5);
  }
  return result;
}
