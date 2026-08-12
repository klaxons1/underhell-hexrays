unsigned int __stdcall sub_10215EB0(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // esi
  unsigned int result; // eax
  char *v6; // eax
  _BYTE *v7; // eax
  const char *v8; // eax
  int v9; // ebx
  _DWORD *v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  const char *v14; // eax
  char *v15; // ebx
  void (__thiscall **v16)(int, _DWORD); // ebx
  double v17; // st7
  int v18; // ebx
  double v19; // st7
  int v20; // ebx
  double v21; // st7
  int v22; // eax
  int v23; // ebx
  double v24; // st7
  int v25; // ebx
  double v26; // st7
  int v27; // edx
  _BYTE *v28; // eax
  const char *v29; // eax
  int v30; // ebx
  _DWORD *v31; // eax
  int v32; // ebx
  int v33; // eax
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  int v37; // eax
  float *v38; // eax
  float v39; // edx
  float v40; // ecx
  float v41; // eax
  int v42; // eax
  int v43; // edi
  double v44; // st7
  int v45; // ebx
  const char **v46; // edi
  const char *v47; // eax
  float X_4; // [esp+48h] [ebp-24h]
  float X_4a; // [esp+48h] [ebp-24h]
  float X_4b; // [esp+48h] [ebp-24h]
  float X_4c; // [esp+48h] [ebp-24h]
  float X_4d; // [esp+48h] [ebp-24h]
  float X_4e; // [esp+48h] [ebp-24h]
  float X_4f; // [esp+48h] [ebp-24h]
  float X_4g; // [esp+48h] [ebp-24h]
  float X_4h; // [esp+48h] [ebp-24h]
  float X_4i; // [esp+48h] [ebp-24h]
  float v58; // [esp+58h] [ebp-14h]
  float v59; // [esp+5Ch] [ebp-10h]
  float v60; // [esp+60h] [ebp-Ch]
  int v61; // [esp+64h] [ebp-8h] BYREF
  unsigned int v62; // [esp+68h] [ebp-4h]

  v3 = a1;
  v4 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&IBreakableWithPropData `RTTI Type Descriptor',
         0);
  if ( !v4 )
    return 3;
  v62 = 0;
  v6 = (char *)sub_1042B460("base", (int)String);
  if ( !v6 || !*v6 || (result = sub_10216390(v3, v6), v62 = result, result <= 1) )
  {
    sub_1042AE90("blockLOS", -1.0);
    if ( (int)-1.0 != -1 )
      (*(void (__thiscall **)(int, bool))(*(_DWORD *)v4 + 80))(v4, (int)-1.0 != 0);
    sub_1042AE90("AIWalkable", -1.0);
    if ( (int)-1.0 != -1 )
      (*(void (__thiscall **)(int, bool))(*(_DWORD *)v4 + 84))(v4, (int)-1.0 != 0);
    if ( *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 44))(v4, &a1) )
    {
      v8 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 44))(v4, &a1);
      if ( !v8 )
        v8 = String;
      v7 = (_BYTE *)sub_1042B460("damage_table", (int)v8);
    }
    else
    {
      v7 = (_BYTE *)sub_1042B460("damage_table", 0);
    }
    if ( v7 && *v7 )
    {
      v9 = *(_DWORD *)v4;
      v10 = sub_10162BE0(&v61, v7);
      (*(void (__thiscall **)(int, _DWORD))(v9 + 40))(v4, *v10);
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 40))(v4, 0);
    }
    v11 = *(_DWORD *)v4;
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 100))(v4);
    v13 = sub_1042AE10("physicsmode", v12);
    (*(void (__thiscall **)(int, int))(v11 + 96))(v4, v13);
    v14 = (const char *)sub_1042B460("multiplayer_break", 0);
    v15 = (char *)v14;
    if ( v14 )
    {
      a1 = 0;
      if ( v14 == "server" || !_stricmp(v14, "server") )
      {
        a1 = 1;
      }
      else if ( sub_10043F40(v15, "client") )
      {
        a1 = 2;
      }
      else if ( sub_10043F40(v15, "both") )
      {
        a1 = 3;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 104))(v4, a1);
    }
    v16 = *(void (__thiscall ***)(int, _DWORD))v4;
    v17 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 12))(v4);
    X_4 = v17;
    sub_1042AE90("dmg.bullets", X_4);
    X_4a = v17;
    (*v16)(v4, LODWORD(X_4a));
    v18 = *(_DWORD *)v4;
    v19 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 16))(v4);
    X_4b = v19;
    sub_1042AE90("dmg.club", X_4b);
    X_4c = v19;
    (*(void (__thiscall **)(int, _DWORD))(v18 + 4))(v4, LODWORD(X_4c));
    v20 = *(_DWORD *)v4;
    v21 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 20))(v4);
    X_4d = v21;
    sub_1042AE90("dmg.explosive", X_4d);
    X_4e = v21;
    (*(void (__thiscall **)(int, _DWORD))(v20 + 8))(v4, LODWORD(X_4e));
    if ( *(char **)(v3 + 92) != "prop_physics_override"
      && !sub_100D6240((_DWORD *)v3, "prop_physics_override")
      && *(char **)(v3 + 92) != "prop_dynamic_override"
      && !sub_100D6240((_DWORD *)v3, "prop_dynamic_override") )
    {
      v22 = sub_1042AE10("health", *(_DWORD *)(v3 + 220));
      sub_10064870((_DWORD *)v3, v22);
      v23 = *(_DWORD *)v4;
      v24 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 36))(v4);
      X_4f = v24;
      sub_1042AE90("explosive_damage", X_4f);
      X_4g = v24;
      (*(void (__thiscall **)(int, _DWORD))(v23 + 28))(v4, LODWORD(X_4g));
      v25 = *(_DWORD *)v4;
      v26 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 32))(v4);
      X_4h = v26;
      sub_1042AE90("explosive_radius", X_4h);
      X_4i = v26;
      (*(void (__thiscall **)(int, _DWORD))(v25 + 24))(v4, LODWORD(X_4i));
      if ( *(_DWORD *)(v3 + 220) )
        sub_100352C0(v3, v27, 2);
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 52))(v4, &a1) )
    {
      v29 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 52))(v4, &a1);
      if ( !v29 )
        v29 = String;
      v28 = (_BYTE *)sub_1042B460("breakable_model", (int)v29);
    }
    else
    {
      v28 = (_BYTE *)sub_1042B460("breakable_model", 0);
    }
    if ( v28 && *v28 )
    {
      v30 = *(_DWORD *)v4;
      v31 = sub_10162BE0(&v61, v28);
      (*(void (__thiscall **)(int, _DWORD))(v30 + 48))(v4, *v31);
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 48))(v4, 0);
    }
    v32 = *(_DWORD *)v4;
    v33 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 60))(v4);
    v34 = sub_1042AE10("breakable_skin", v33);
    (*(void (__thiscall **)(int, int))(v32 + 56))(v4, v34);
    v35 = *(_DWORD *)v4;
    v36 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 68))(v4);
    v37 = sub_1042AE10("breakable_count", v36);
    (*(void (__thiscall **)(int, int))(v35 + 64))(v4, v37);
    v38 = (float *)sub_10022D70();
    *v38 = *(float *)(v3 + 340) - *(float *)(v3 + 328);
    v38[1] = *(float *)(v3 + 344) - *(float *)(v3 + 332);
    v38[2] = *(float *)(v3 + 348) - *(float *)(v3 + 336);
    v39 = v38[1];
    v40 = *v38;
    v41 = v38[2];
    v59 = v39;
    v58 = v40;
    v60 = v41;
    if ( v40 >= (double)v39 )
    {
      v42 = 1;
      if ( v39 < (double)v60 )
        goto LABEL_48;
    }
    else if ( v40 < (double)v60 )
    {
      v42 = 0;
      goto LABEL_48;
    }
    v42 = 2;
LABEL_48:
    v43 = *(_DWORD *)v4;
    *(&v58 + v42) = 1.0;
    v44 = floor(v59 * v58 * v60 * 0.0009765625);
    (*(void (__thiscall **)(int, int))(v43 + 72))(v4, (int)v44);
    v45 = 0;
    v46 = (const char **)off_10645888;
    do
    {
      if ( sub_1042ACB0((char *)*(v46 - 2), 0) )
      {
        v47 = (const char *)sub_1042B460((char *)*(v46 - 1), (int)String);
        if ( v47 )
        {
          if ( *v47 && !_stricmp(v47, *v46) )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 88))(v4, v45);
        }
      }
      v46 += 3;
      ++v45;
    }
    while ( (int)v46 < (int)&off_10645948 );
    result = 1;
    if ( v62 != 1 )
      return sub_1042AE10("allowstatic", 0) != 0;
  }
  return result;
}
