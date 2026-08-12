unsigned int __userpurge sub_1010BB30@<eax>(int a1@<ecx>, int a2@<ebx>, float *a3, char *String1, int a5)
{
  int v6; // esi
  unsigned int result; // eax
  char *v8; // eax
  _BYTE *v9; // eax
  int v10; // eax
  int v11; // eax
  const char *v12; // eax
  double v13; // st7
  double v14; // st7
  double v15; // st7
  int v16; // eax
  int v17; // eax
  double v18; // st7
  double v19; // st7
  _BYTE *v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  float *v25; // eax
  float v26; // edx
  float v27; // ecx
  float v28; // eax
  int v29; // eax
  int v30; // edi
  double v31; // st7
  const char **v32; // edi
  const char *v33; // eax
  int X_4; // [esp+40h] [ebp-20h]
  int X_4a; // [esp+40h] [ebp-20h]
  float X_4b; // [esp+40h] [ebp-20h]
  float X_4c; // [esp+40h] [ebp-20h]
  float X_4d; // [esp+40h] [ebp-20h]
  float X_4e; // [esp+40h] [ebp-20h]
  float X_4f; // [esp+40h] [ebp-20h]
  float X_4g; // [esp+40h] [ebp-20h]
  float X_4h; // [esp+40h] [ebp-20h]
  float X_4i; // [esp+40h] [ebp-20h]
  float X_4j; // [esp+40h] [ebp-20h]
  float X_4k; // [esp+40h] [ebp-20h]
  int X_4l; // [esp+40h] [ebp-20h]
  int X_4m; // [esp+40h] [ebp-20h]
  float v48; // [esp+4Ch] [ebp-14h]
  float v49; // [esp+50h] [ebp-10h]
  float v50; // [esp+54h] [ebp-Ch]
  int v51; // [esp+58h] [ebp-8h]
  unsigned int v52; // [esp+5Ch] [ebp-4h]
  void (__thiscall **v53)(int, int); // [esp+68h] [ebp+8h]
  int v54; // [esp+68h] [ebp+8h]
  int v55; // [esp+68h] [ebp+8h]
  void (__thiscall **v56)(int, _DWORD); // [esp+68h] [ebp+8h]
  int v57; // [esp+68h] [ebp+8h]
  int v58; // [esp+68h] [ebp+8h]
  int v59; // [esp+68h] [ebp+8h]
  int v60; // [esp+68h] [ebp+8h]
  int v61; // [esp+68h] [ebp+8h]
  void (__thiscall **v62)(int, int); // [esp+68h] [ebp+8h]
  int v63; // [esp+68h] [ebp+8h]
  int v64; // [esp+68h] [ebp+8h]
  int v65; // [esp+68h] [ebp+8h]
  char *String1a; // [esp+6Ch] [ebp+Ch]

  v51 = a1;
  v6 = __RTDynamicCast(
         (int)a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
         (int)&IBreakableWithPropData `RTTI Type Descriptor',
         0);
  if ( !v6 )
    return 3;
  v52 = 0;
  v8 = (char *)sub_1022B4C0("base", (int)Locale);
  if ( !v8 || !*v8 || (result = sub_1010BFF0((int)a3, v8), v52 = result, result <= 1) )
  {
    sub_1022A940("blockLOS", -1.0);
    if ( (int)-1.0 != -1 )
      (*(void (__thiscall **)(int, bool))(*(_DWORD *)v6 + 80))(v6, (int)-1.0 != 0);
    sub_1022A940("AIWalkable", -1.0);
    if ( (int)-1.0 != -1 )
      (*(void (__thiscall **)(int, bool))(*(_DWORD *)v6 + 84))(v6, (int)-1.0 != 0);
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 44))(v6, a2) )
    {
      X_4 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6);
      v9 = (_BYTE *)sub_1022B4C0("damage_table", X_4);
    }
    else
    {
      v9 = (_BYTE *)sub_1022B4C0("damage_table", 0);
    }
    if ( v9 && *v9 )
    {
      v53 = (void (__thiscall **)(int, int))(*(_DWORD *)v6 + 40);
      X_4a = sub_100AF260(v9);
      (*v53)(v6, X_4a);
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 40))(v6, 0);
    }
    v54 = *(_DWORD *)v6;
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 100))(v6);
    v11 = sub_1022A800("physicsmode", v10);
    (*(void (__thiscall **)(int, int))(v54 + 96))(v6, v11);
    v12 = (const char *)sub_1022B4C0("multiplayer_break", 0);
    String1a = (char *)v12;
    if ( v12 )
    {
      v55 = 0;
      if ( !_stricmp(v12, "server") )
      {
        v55 = 1;
      }
      else if ( !_stricmp(String1a, "client") )
      {
        v55 = 2;
      }
      else if ( !_stricmp(String1a, "both") )
      {
        v55 = 3;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 104))(v6, v55);
    }
    v56 = *(void (__thiscall ***)(int, _DWORD))v6;
    v13 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 12))(v6);
    X_4b = v13;
    sub_1022A940("dmg.bullets", X_4b);
    X_4c = v13;
    (*v56)(v6, LODWORD(X_4c));
    v57 = *(_DWORD *)v6;
    v14 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 16))(v6);
    X_4d = v14;
    sub_1022A940("dmg.club", X_4d);
    X_4e = v14;
    (*(void (__thiscall **)(int, _DWORD))(v57 + 4))(v6, LODWORD(X_4e));
    v58 = *(_DWORD *)v6;
    v15 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 20))(v6);
    X_4f = v15;
    sub_1022A940("dmg.explosive", X_4f);
    X_4g = v15;
    (*(void (__thiscall **)(int, _DWORD))(v58 + 8))(v6, LODWORD(X_4g));
    if ( !sub_1000A4D0((int)a3, "prop_physics_override") && !sub_1000A4D0((int)a3, "prop_dynamic_override") )
    {
      v59 = *(_DWORD *)a3;
      v16 = (*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 416))(a3);
      v17 = sub_1022A800("health", v16);
      (*(void (__thiscall **)(float *, int))(v59 + 412))(a3, v17);
      v60 = *(_DWORD *)v6;
      v18 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 36))(v6);
      X_4h = v18;
      sub_1022A940("explosive_damage", X_4h);
      X_4i = v18;
      (*(void (__thiscall **)(int, _DWORD))(v60 + 28))(v6, LODWORD(X_4i));
      v61 = *(_DWORD *)v6;
      v19 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 32))(v6);
      X_4j = v19;
      sub_1022A940("explosive_radius", X_4j);
      X_4k = v19;
      (*(void (__thiscall **)(int, _DWORD))(v61 + 24))(v6, LODWORD(X_4k));
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 52))(v6) )
    {
      X_4l = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 52))(v6);
      v20 = (_BYTE *)sub_1022B4C0("breakable_model", X_4l);
    }
    else
    {
      v20 = (_BYTE *)sub_1022B4C0("breakable_model", 0);
    }
    if ( v20 && *v20 )
    {
      v62 = (void (__thiscall **)(int, int))(*(_DWORD *)v6 + 48);
      X_4m = sub_100AF260(v20);
      (*v62)(v6, X_4m);
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 48))(v6, 0);
    }
    v63 = *(_DWORD *)v6;
    v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 60))(v6);
    v22 = sub_1022A800("breakable_skin", v21);
    (*(void (__thiscall **)(int, int))(v63 + 56))(v6, v22);
    v64 = *(_DWORD *)v6;
    v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 68))(v6);
    v24 = sub_1022A800("breakable_count", v23);
    (*(void (__thiscall **)(int, int))(v64 + 64))(v6, v24);
    v25 = (float *)sub_1000ED40();
    *v25 = a3[93] - a3[90];
    v25[1] = a3[94] - a3[91];
    v25[2] = a3[95] - a3[92];
    v26 = v25[1];
    v27 = *v25;
    v28 = v25[2];
    v49 = v26;
    v48 = v27;
    v50 = v28;
    if ( v27 >= (double)v26 )
    {
      v29 = 1;
      if ( v26 < (double)v50 )
        goto LABEL_40;
    }
    else if ( v27 < (double)v50 )
    {
      v29 = 0;
      goto LABEL_40;
    }
    v29 = 2;
LABEL_40:
    v30 = *(_DWORD *)v6;
    *(&v48 + v29) = 1.0;
    v31 = floor(v49 * v48 * v50 * 0.0009765625);
    (*(void (__thiscall **)(int, int))(v30 + 72))(v6, (int)v31);
    v65 = 0;
    v32 = (const char **)off_103E2CC0;
    do
    {
      if ( sub_1022A6A0((char *)*(v32 - 2), 0) )
      {
        v33 = (const char *)sub_1022B4C0((char *)*(v32 - 1), (int)Locale);
        if ( v33 )
        {
          if ( *v33 && !_stricmp(v33, *v32) )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 88))(v6, v65);
        }
      }
      ++v65;
      v32 += 3;
    }
    while ( (int)v32 < (int)aAvcbreakparser );
    result = 1;
    if ( v52 != 1 )
      return sub_1022A800("allowstatic", 0) != 0;
  }
  return result;
}
