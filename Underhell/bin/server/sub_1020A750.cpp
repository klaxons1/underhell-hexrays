void __usercall sub_1020A750(int a1@<ebx>, int a2@<esi>, int *a3)
{
  _DWORD *v3; // esi
  int (__thiscall *v4)(_DWORD *, _BYTE *, int); // edx
  float *v5; // eax
  int (__thiscall *v6)(_DWORD *); // edx
  float *v7; // eax
  int v8; // ebx
  const char *v9; // eax
  unsigned __int16 v10; // ax
  int v11; // esi
  int v12; // eax
  int v13; // edi
  double v14; // st7
  int v15; // eax
  char *v16; // esi
  const char *v17; // eax
  double ArgList; // [esp+18h] [ebp-518h]
  double v19; // [esp+20h] [ebp-510h]
  int v21; // [esp+30h] [ebp-500h]
  char Buffer[512]; // [esp+3Ch] [ebp-4F4h] BYREF
  char v24[512]; // [esp+23Ch] [ebp-2F4h] BYREF
  _BYTE v25[12]; // [esp+43Ch] [ebp-F4h] BYREF
  float v26[3]; // [esp+448h] [ebp-E8h] BYREF
  float v27[16]; // [esp+454h] [ebp-DCh] BYREF
  _BYTE v28[12]; // [esp+494h] [ebp-9Ch] BYREF
  float v29; // [esp+4A0h] [ebp-90h]
  float v30; // [esp+4ACh] [ebp-84h] BYREF
  float v31; // [esp+4B0h] [ebp-80h]
  float v32; // [esp+4B4h] [ebp-7Ch]
  float v33; // [esp+4C0h] [ebp-70h]
  float v34[3]; // [esp+4E8h] [ebp-48h] BYREF
  float v35[3]; // [esp+4F4h] [ebp-3Ch] BYREF
  float v36; // [esp+500h] [ebp-30h] BYREF
  float v37; // [esp+50Ch] [ebp-24h]
  float v38; // [esp+510h] [ebp-20h]
  float v39; // [esp+514h] [ebp-1Ch]
  float v40; // [esp+518h] [ebp-18h] BYREF
  float v41; // [esp+51Ch] [ebp-14h]
  float v42; // [esp+520h] [ebp-10h]
  float v43; // [esp+524h] [ebp-Ch] BYREF
  float v44; // [esp+528h] [ebp-8h]
  float v45; // [esp+52Ch] [ebp-4h]
  int savedregs; // [esp+530h] [ebp+0h] BYREF
  char v47; // [esp+538h] [ebp+8h]

  if ( *a3 == 2 )
  {
    v3 = (_DWORD *)sub_10153490();
    sub_100F5A30(v3, (int)v35, 0, 0);
    v4 = *(int (__thiscall **)(_DWORD *, _BYTE *, int))(*v3 + 504);
    v37 = v35[0] * 56755.84;
    v38 = v35[1] * 56755.84;
    v39 = 56755.84 * v35[2];
    v5 = (float *)v4(v3, v25, a2);
    v6 = *(int (__thiscall **)(_DWORD *))(*v3 + 504);
    v34[0] = *v5 + v37;
    v34[1] = v5[1] + v38;
    v34[2] = v5[2] + v39;
    v7 = (float *)v6(v3);
    sub_1002A5F0((int)&savedregs, (int)v3, v7, v26, (int)v34, 33701899, (int)v3, 0);
    if ( 1.0 != v33 )
    {
      v8 = dword_10700AC8;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8, a1);
      v9 = String;
      if ( *a3 > 1 )
        v9 = (const char *)a3[259];
      sub_10429A00(Buffer, 0x200u, "models/%s", (char)v9);
      sub_10429820((int)Buffer, ".mdl", 512);
      v10 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_10700AC8 + 24))(dword_10700AC8, Buffer);
      v11 = v10;
      if ( v10 != 0xFFFF )
      {
        v47 = sub_100E8650();
        sub_100E8660(1);
        v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10700AC8 + 48))(dword_10700AC8, v11);
        v43 = 1.0;
        v13 = v12;
        v44 = 0.0;
        v45 = 0.0;
        v40 = v31 * 0.0 - v32 * 0.0;
        v14 = 0.0 * v30;
        v41 = v32 - v14;
        v42 = v14 - v31;
        if ( off_10689714() < 0.001 )
        {
          v43 = 0.0;
          v44 = 0.0;
          v45 = 1.0;
          sub_1001EFB0(&v30, &v43, &v40);
          off_10689714();
        }
        v43 = v32 * v41 - v31 * v42;
        v44 = v42 * v30 - v32 * v40;
        v45 = v40 * v31 - v30 * v41;
        off_10689714();
        v27[0] = v43;
        v27[4] = v44;
        v27[8] = v45;
        v27[1] = v40;
        v27[5] = v41;
        v27[9] = v42;
        v27[2] = v30;
        v27[6] = v31;
        v27[10] = v32;
        sub_10421A90(v27, &v36);
        v15 = sub_101811E0("dynamic_prop", -1);
        v16 = (char *)__RTDynamicCast(
                        v15,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                        (int)&CDynamicProp `RTTI Type Descriptor',
                        0);
        if ( v16 )
        {
          ArgList = v29;
          sub_10429A00(v24, 0x200u, "%.10f %.10f %.10f", SLOBYTE(ArgList));
          (*(void (__thiscall **)(char *, const char *, char *, int, _BYTE *))(*(_DWORD *)v16 + 128))(
            v16,
            "origin",
            v24,
            v21,
            v28);
          v19 = v36;
          sub_10429A00(v24, 0x200u, "%.10f %.10f %.10f", SLOBYTE(v19));
          (*(void (__thiscall **)(char *, const char *, char *))(*(_DWORD *)v16 + 128))(v16, "angles", v24);
          (*(void (__thiscall **)(char *, const char *, char *))(*(_DWORD *)v16 + 128))(v16, "model", Buffer);
          v17 = "6";
          if ( !v13 )
            v17 = "2";
          (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v16 + 128))(v16, "solid", v17);
          (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v16 + 128))(v16, "fademindist", "-1");
          (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v16 + 128))(v16, "fademaxdist", "0");
          (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v16 + 128))(v16, "fadescale", "1");
          (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v16 + 128))(v16, "MinAnimTime", "5");
          (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v16 + 128))(v16, "MaxAnimTime", "10");
          (*(void (__thiscall **)(char *))(*(_DWORD *)v16 + 100))(v16);
          sub_10260750(v16);
          (*(void (__thiscall **)(char *))(*(_DWORD *)v16 + 136))(v16);
        }
        sub_100E8660(v47);
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
    }
  }
}
