int __usercall sub_100641C0@<eax>(int a1@<edi>, int *a2)
{
  int v2; // ebx
  void (__thiscall *v3)(int); // edx
  const char *v4; // eax
  int v5; // eax
  int v6; // esi
  const char *v7; // eax
  int v8; // edi
  int (__thiscall *v9)(int, _BYTE *); // edx
  float *v10; // eax
  int (__thiscall *v11)(int); // edx
  float *v12; // eax
  void (__thiscall *v13)(int, float *); // eax
  void (__thiscall *v14)(int, float *); // edx
  float v15; // ecx
  float v16; // edx
  float *v17; // ebx
  float *v18; // eax
  int v19; // ecx
  const char *v20; // eax
  int v21; // ebx
  int v23; // [esp+1Ch] [ebp-B8h]
  float v24[3]; // [esp+2Ch] [ebp-A8h] BYREF
  _BYTE v25[12]; // [esp+38h] [ebp-9Ch] BYREF
  _BYTE v26[12]; // [esp+44h] [ebp-90h] BYREF
  float v27[2]; // [esp+50h] [ebp-84h] BYREF
  float v28; // [esp+58h] [ebp-7Ch]
  float v29; // [esp+70h] [ebp-64h]
  char v30; // [esp+7Bh] [ebp-59h]
  float *v31; // [esp+98h] [ebp-3Ch]
  int v32; // [esp+9Ch] [ebp-38h]
  float v33[3]; // [esp+A0h] [ebp-34h] BYREF
  float v34; // [esp+ACh] [ebp-28h] BYREF
  float v35; // [esp+B0h] [ebp-24h]
  float v36; // [esp+B4h] [ebp-20h]
  float v37; // [esp+B8h] [ebp-1Ch] BYREF
  float v38; // [esp+BCh] [ebp-18h]
  float v39; // [esp+C0h] [ebp-14h]
  int v40; // [esp+C4h] [ebp-10h]
  float v41; // [esp+C8h] [ebp-Ch] BYREF
  float v42; // [esp+CCh] [ebp-8h]
  float v43; // [esp+D0h] [ebp-4h]
  int savedregs; // [esp+D4h] [ebp+0h] BYREF
  int v45; // [esp+DCh] [ebp+8h]

  v2 = dword_10700AC8;
  v3 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
  v40 = dword_10700AC8;
  v3(dword_10700AC8);
  LOBYTE(v32) = sub_100E8650();
  sub_100E8660(1);
  if ( *a2 > 1 )
    v4 = (const char *)a2[259];
  else
    v4 = String;
  v5 = sub_101811E0(v4, -1);
  v6 = __RTDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CAI_BaseNPC `RTTI Type Descriptor',
         0);
  if ( v6 )
  {
    if ( (dword_1069295C & 0x1000) != 0 )
    {
      v7 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v7 = *(const char **)(dword_10692964 + 36);
      if ( !v7 )
        v7 = String;
    }
    (*(void (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)v6 + 128))(
      v6,
      "additionalequipment",
      v7,
      a1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 100))(v6);
    sub_10260750((char *)v6);
    v8 = sub_10153490();
    sub_100F5A30(&v37, 0, 0);
    sub_10422540(&v37, v33);
    v33[0] = 0.0;
    v33[2] = 0.0;
    v9 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 504);
    v41 = v37 * 56755.84;
    v42 = v38 * 56755.84;
    v43 = 56755.84 * v39;
    v10 = (float *)v9(v8, v25);
    v11 = *(int (__thiscall **)(int))(*(_DWORD *)v8 + 504);
    v34 = *v10 + v41;
    v35 = v10[1] + v42;
    v36 = v10[2] + v43;
    v12 = (float *)v11(v8);
    sub_1002A5F0((int)&savedregs, v6, v12, v24, (int)&v34, 33701899, v8, 0);
    if ( 1.0 == v29 )
    {
      (*(void (__thiscall **)(int, _DWORD, float *))(*(_DWORD *)v6 + 416))(v6, 0, v33);
    }
    else
    {
      if ( ((*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 1672))(v6, v26) & 4) != 0 )
      {
        v13 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 416);
        v34 = v27[0] - v37 * 36.0;
        v35 = v27[1] - v38 * 36.0;
        v36 = v28 - 36.0 * v39;
        v13(v6, &v34);
      }
      else
      {
        v14 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 416);
        v28 = v28 + 12.0;
        v14(v6, v27);
        sub_102615C0(v6, 33701899, 0);
      }
      if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
        sub_100DAE60(v6);
      v15 = *(float *)(v6 + 580);
      v16 = *(float *)(v6 + 584);
      v43 = *(float *)(v6 + 588);
      v23 = *(_DWORD *)(v6 + 1676);
      v41 = v15;
      v43 = v43 + 1.0;
      v42 = v16;
      v17 = (float *)sub_10073730(v23);
      v18 = (float *)sub_10073710(*(_DWORD *)(v6 + 1676));
      v19 = *(_DWORD *)(v6 + 252) >> 11;
      v31 = v18;
      if ( (v19 & 1) != 0 )
        sub_100DAE60(v6);
      sub_100231A0((int)&savedregs, v6, (float *)(v6 + 580), &v41, v31, v17, 33701899, v6, 0, (int)v26);
      if ( v30 || v29 < 1.0 )
      {
        sub_10246D70(v6, v33, 0);
        if ( *a2 > 1 )
          v20 = (const char *)a2[259];
        else
          v20 = String;
        DevMsg("Can't create %s.  Bad Position!\n", v20);
        v21 = sub_10073730(*(_DWORD *)(v6 + 1676));
        v45 = sub_10073710(*(_DWORD *)(v6 + 1676));
        if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
          sub_100DAE60(v6);
        sub_1011BB20(v6 + 580, v45, v21, 255, 0, 0, 0, 0.0);
      }
      v2 = v40;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 136))(v6);
  }
  sub_100E8660(v32);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
}
