// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_101B7910(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  _DWORD *v3; // esi
  int (__thiscall *v4)(_DWORD *, int *, int, int); // edx
  float *v5; // eax
  double v6; // st7
  int (__thiscall *v7)(_DWORD *, _BYTE *); // edx
  float *v8; // eax
  void (__thiscall *v9)(int, float *, int); // edx
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // eax
  const char *v14; // edi
  bool v15; // zf
  const char *v16; // eax
  int v17; // edi
  const char *v18; // eax
  const char *v19; // eax
  char v21[256]; // [esp+44h] [ebp-1FCh] BYREF
  float v22[20]; // [esp+144h] [ebp-FCh] BYREF
  int v23; // [esp+194h] [ebp-ACh] BYREF
  _BYTE v24[12]; // [esp+1A0h] [ebp-A0h] BYREF
  float v25; // [esp+1ACh] [ebp-94h] BYREF
  float v26; // [esp+1B0h] [ebp-90h]
  float v27; // [esp+1B4h] [ebp-8Ch]
  float v28; // [esp+1B8h] [ebp-88h] BYREF
  float v29; // [esp+1BCh] [ebp-84h]
  float v30; // [esp+1C0h] [ebp-80h]
  float v31; // [esp+1D8h] [ebp-68h]
  char v32; // [esp+1E2h] [ebp-5Eh]
  char v33; // [esp+1E3h] [ebp-5Dh]
  int v34; // [esp+1E8h] [ebp-58h]
  __int16 v35; // [esp+1ECh] [ebp-54h]
  _DWORD *v36; // [esp+1F8h] [ebp-48h]
  int v37; // [esp+1FCh] [ebp-44h]
  int v38; // [esp+208h] [ebp-38h] BYREF
  float v39[3]; // [esp+20Ch] [ebp-34h] BYREF
  float v40[2]; // [esp+218h] [ebp-28h] BYREF
  float v41; // [esp+220h] [ebp-20h]
  float v42; // [esp+224h] [ebp-1Ch] BYREF
  float v43; // [esp+228h] [ebp-18h]
  float v44; // [esp+22Ch] [ebp-14h]
  float v45; // [esp+230h] [ebp-10h]
  int v46; // [esp+234h] [ebp-Ch]
  void *v47; // [esp+238h] [ebp-8h]
  void *retaddr; // [esp+240h] [ebp+0h]

  v46 = a1;
  v47 = retaddr;
  v3 = (_DWORD *)sub_10153490();
  sub_100F5A30(v3, (int)v39, 0, 0);
  v4 = *(int (__thiscall **)(_DWORD *, int *, int, int))(*v3 + 504);
  v42 = v39[0] * 16384.0;
  v43 = v39[1] * 16384.0;
  v44 = 16384.0 * v39[2];
  v5 = (float *)v4(v3, &v23, a2, a3);
  v6 = *v5 + v42;
  v44 = COERCE_FLOAT(v24);
  v40[0] = v6;
  v40[1] = v5[1] + v43;
  v7 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*v3 + 504);
  v41 = v5[2] + COERCE_FLOAT(v24);
  v8 = (float *)v7(v3, v24);
  sub_1001F180(v22, v8, v40);
  sub_10265570(v3, 0);
  v9 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_106B31F4 + 16);
  v44 = COERCE_FLOAT(&v25);
  v43 = COERCE_FLOAT(&v42);
  v9(dword_106B31F4, v22, 100679691);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)&v25, (int)&v28, 255, 0, 0, 1, 5.0);
  if ( v31 < 1.0 || v32 || v33 )
  {
    v10 = *(_DWORD *)dword_106B31F0;
    v11 = (*(int (__thiscall **)(_DWORD *, float))(*v36 + 24))(v36, COERCE_FLOAT(LODWORD(v45)));
    v12 = (*(int (__thiscall **)(int, int))(v10 + 4))(dword_106B31F0, v11);
    v45 = *(float *)(*(int (__thiscall **)(_DWORD *, int *))(*v36 + 28))(v36, &v38);
    if ( v45 == 0.0 )
      v45 = COERCE_FLOAT(String);
    if ( sub_10163140(&v25) && v37 > 0 )
    {
      v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 16))(dword_106B31E0, v37 - 1);
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 28))(v13);
      v45 = COERCE_FLOAT((*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 12))(dword_106B31F0, v12));
    }
    v21[0] = 0;
    if ( v12 )
    {
      v14 = "  Two-pass.";
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 52))(dword_106B31F0, v12) )
        v14 = String;
      v15 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 48))(dword_106B31F0, v12) == 0;
      v16 = "Translucent";
      if ( v15 )
        v16 = "Opaque";
      sub_1001E280(v21, "%s.%s ", v16, v14);
    }
    v45 = (v25 - v28) * (v25 - v28) + (v26 - v29) * (v26 - v29) + (v27 - v30) * (v27 - v30);
    v17 = (int)off_10689708(v45);
    v18 = (const char *)v36[23];
    if ( !v18 )
      v18 = String;
    v19 = (const char *)(*(int (__thiscall **)(int, _DWORD, const char *, int, char *, int))(*(_DWORD *)dword_106BAFF8
                                                                                           + 28))(
                          dword_106BAFF8,
                          v35,
                          v18,
                          v34,
                          v21,
                          v34);
    Msg(
      "Hit surface \"%s\" (entity %s, model \"%s\" %s), texture \"%s\"\n",
      v19,
      (const char *)LODWORD(v41),
      (const char *)LODWORD(v42),
      (const char *)LODWORD(v43),
      (const char *)LODWORD(v44));
    Msg("Distance to surface: %d\n", v17);
  }
}
