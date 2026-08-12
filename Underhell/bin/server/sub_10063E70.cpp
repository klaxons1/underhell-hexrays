int __cdecl sub_10063E70(int *a1)
{
  int v1; // ebx
  void (__thiscall *v2)(int); // edx
  const char *v3; // eax
  int v4; // eax
  _DWORD *v5; // esi
  const char *v6; // eax
  int v7; // edi
  int (__thiscall *v8)(int, _BYTE *); // edx
  float *v9; // eax
  int (__thiscall *v10)(int); // edx
  float *v11; // eax
  bool v12; // zf
  void (__thiscall *v13)(_DWORD *, float *); // edx
  float v14; // ecx
  float v15; // edx
  float *v16; // ebx
  float *v17; // eax
  int v18; // ecx
  const char *v19; // eax
  int v20; // ebx
  int v22; // [esp+1Ch] [ebp-ACh]
  float v23[3]; // [esp+2Ch] [ebp-9Ch] BYREF
  _BYTE v24[12]; // [esp+38h] [ebp-90h] BYREF
  _BYTE v25[12]; // [esp+44h] [ebp-84h] BYREF
  float v26[2]; // [esp+50h] [ebp-78h] BYREF
  float v27; // [esp+58h] [ebp-70h]
  float v28; // [esp+70h] [ebp-58h]
  char v29; // [esp+7Bh] [ebp-4Dh]
  int v30; // [esp+98h] [ebp-30h]
  float v31; // [esp+9Ch] [ebp-2Ch] BYREF
  float v32; // [esp+A0h] [ebp-28h]
  float v33; // [esp+A4h] [ebp-24h]
  float v34; // [esp+A8h] [ebp-20h] BYREF
  float v35; // [esp+ACh] [ebp-1Ch]
  float v36; // [esp+B0h] [ebp-18h]
  float *v37; // [esp+B4h] [ebp-14h] BYREF
  int v38; // [esp+B8h] [ebp-10h]
  float v39; // [esp+BCh] [ebp-Ch] BYREF
  float v40; // [esp+C0h] [ebp-8h]
  float v41; // [esp+C4h] [ebp-4h]
  int savedregs; // [esp+C8h] [ebp+0h] BYREF
  int v43; // [esp+D0h] [ebp+8h]

  v1 = dword_10700AC8;
  v2 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
  v38 = dword_10700AC8;
  v2(dword_10700AC8);
  LOBYTE(v30) = sub_100E8650();
  sub_100E8660(1);
  v3 = String;
  if ( *a1 > 1 )
    v3 = (const char *)a1[259];
  v4 = sub_101811E0(v3, -1);
  v5 = (_DWORD *)__RTDynamicCast(
                   v4,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CAI_BaseNPC `RTTI Type Descriptor',
                   0);
  if ( v5 )
  {
    if ( (dword_1069295C & 0x1000) != 0 )
    {
      v6 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v6 = *(const char **)(dword_10692964 + 36);
      if ( !v6 )
        v6 = String;
    }
    (*(void (__thiscall **)(_DWORD *, const char *, const char *))(*v5 + 128))(v5, "additionalequipment", v6);
    (*(void (__thiscall **)(_DWORD *))(*v5 + 100))(v5);
    if ( *a1 == 3 )
      v5[65] = *(_DWORD *)sub_10162BE0(&v37, a1[260]);
    sub_10260750((char *)v5);
    v7 = sub_10153490();
    sub_100F5A30(&v31, 0, 0);
    v8 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v7 + 504);
    v39 = v31 * 56755.84;
    v40 = v32 * 56755.84;
    v41 = 56755.84 * v33;
    v9 = (float *)v8(v7, v24);
    v10 = *(int (__thiscall **)(int))(*(_DWORD *)v7 + 504);
    v34 = *v9 + v39;
    v35 = v9[1] + v40;
    v36 = v9[2] + v41;
    v11 = (float *)v10(v7);
    sub_1002A5F0((int)&savedregs, (int)v5, v11, v23, (int)&v34, 33701899, v7, 0);
    if ( 1.0 != v28 )
    {
      v12 = ((*(int (__thiscall **)(_DWORD *, _BYTE *))(*v5 + 1672))(v5, v25) & 4) == 0;
      v13 = *(void (__thiscall **)(_DWORD *, float *))(*v5 + 416);
      if ( v12 )
      {
        v27 = v27 + 12.0;
        v13(v5, v26);
        sub_102615C0(v5, 33701899, 0);
      }
      else
      {
        v34 = v26[0] - v31 * 36.0;
        v35 = v26[1] - v32 * 36.0;
        v36 = v27 - 36.0 * v33;
        v13(v5, &v34);
      }
      if ( (v5[63] & 0x800) != 0 )
        sub_100DAE60(v5);
      v14 = *((float *)v5 + 145);
      v15 = *((float *)v5 + 146);
      v41 = *((float *)v5 + 147);
      v22 = v5[419];
      v39 = v14;
      v41 = v41 + 1.0;
      v40 = v15;
      v16 = (float *)sub_10073730(v22);
      v17 = (float *)sub_10073710(v5[419]);
      v18 = v5[63] >> 11;
      v37 = v17;
      if ( (v18 & 1) != 0 )
        sub_100DAE60(v5);
      sub_100231A0((int)&savedregs, (int)v5, (float *)v5 + 145, &v39, v37, v16, 33701899, (int)v5, 0, (int)v25);
      if ( v29 || v28 < 1.0 )
      {
        sub_10246D70(v5, 0, 0);
        if ( *a1 > 1 )
          v19 = (const char *)a1[259];
        else
          v19 = String;
        DevMsg("Can't create %s.  Bad Position!\n", v19);
        v20 = sub_10073730(v5[419]);
        v43 = sub_10073710(v5[419]);
        if ( (v5[63] & 0x800) != 0 )
          sub_100DAE60(v5);
        sub_1011BB20((int)(v5 + 145), v43, v20, 255, 0, 0, 0, 0.0);
      }
      v1 = v38;
    }
    (*(void (__thiscall **)(_DWORD *))(*v5 + 136))(v5);
  }
  sub_100E8660(v30);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
}
