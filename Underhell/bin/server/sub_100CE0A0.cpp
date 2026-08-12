int __thiscall sub_100CE0A0(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  int v3; // edi
  int *v5; // ecx
  int v6; // edi
  int v7; // eax
  const char *v8; // eax
  int v9; // edi
  int v10; // edi
  int v11; // edx
  int *v12; // ecx
  int v13; // ebx
  int v14; // edi
  int v15; // edi
  int v16; // edx
  int *v17; // ecx
  int v18; // edi
  int v19; // ebx
  unsigned int v20; // eax
  int *v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // edi
  unsigned int v28; // eax
  int v29; // ecx
  unsigned int v30; // edx
  int *v31; // ecx
  unsigned int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  int v35; // ecx
  const char *v36; // edi
  const char *v37; // eax
  unsigned int v38; // eax
  int v39; // ecx
  int v41; // [esp-10h] [ebp-24h]
  int v42; // [esp-Ch] [ebp-20h]
  int v43; // [esp-8h] [ebp-1Ch]
  int v44; // [esp-4h] [ebp-18h]
  int v45; // [esp+0h] [ebp-14h]
  int v46; // [esp+0h] [ebp-14h]
  unsigned int v48; // [esp+Ch] [ebp-8h]
  int v49; // [esp+Ch] [ebp-8h]
  _DWORD *v50; // [esp+10h] [ebp-4h]
  int v51; // [esp+1Ch] [ebp+8h]
  int v52; // [esp+1Ch] [ebp+8h]
  int v53; // [esp+1Ch] [ebp+8h]
  int v54; // [esp+1Ch] [ebp+8h]
  const char *v55; // [esp+1Ch] [ebp+8h]

  v2 = this;
  v3 = 0;
  v50 = this + 477;
  while ( *v50 != -1 && off_1061BE18[4 * (*v50 & 0xFFF) + 2] == *v50 >> 12 && off_1061BE18[4 * (*v50 & 0xFFF) + 1] )
  {
    ++v50;
    if ( ++v3 >= 48 )
      goto LABEL_16;
  }
  if ( a2 )
    v51 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v51 = -1;
  if ( v2[v3 + 477] != v51 )
  {
    if ( *((_BYTE *)v2 + 84) )
    {
      *((_BYTE *)v2 + 88) |= 1u;
    }
    else
    {
      v5 = (int *)v2[6];
      if ( v5 )
        sub_100194B0(v5, 4 * v3 + 1908);
    }
    v2[v3 + 477] = v51;
  }
LABEL_16:
  v6 = *(_DWORD *)a2;
  v7 = sub_100D8840(v2);
  (*(void (__thiscall **)(int, int))(v6 + 348))(a2, v7);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1216))(a2) == -1 )
  {
    v8 = *(const char **)(dword_106B31C8 + 60);
    if ( !v8 )
      v8 = String;
    if ( (v8 == "d3_c17_09" || !_stricmp(v8, "d3_c17_09"))
      && (*(char **)(a2 + 92) == "weapon_rpg" || (unsigned __int8)sub_100D6240("weapon_rpg"))
      && (*(const char **)(a2 + 260) == "player_spawn_items" || (unsigned __int8)sub_100D6190("player_spawn_items")) )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, const char *))(*v2 + 928))(
        v2,
        0,
        *(_DWORD *)(a2 + 1192),
        0,
        "BaseCombatCharacter.AmmoPickup");
      goto LABEL_36;
    }
    v9 = *v2;
    v41 = (*(int (__thiscall **)(int, _DWORD, _DWORD, const char *))(*(_DWORD *)a2 + 1224))(
            a2,
            *(_DWORD *)(a2 + 1192),
            0,
            "BaseCombatCharacter.AmmoPickup");
  }
  else
  {
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1224))(a2);
    if ( v10 <= (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1216))(a2) )
      goto LABEL_36;
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1216))(a2);
    v52 = v11;
    if ( *(_DWORD *)(a2 + 1200) != v11 )
    {
      if ( *(_BYTE *)(a2 + 84) )
      {
        *(_BYTE *)(a2 + 88) |= 1u;
      }
      else
      {
        v12 = *(int **)(a2 + 24);
        if ( v12 )
        {
          sub_100194B0(v12, 1200);
          v11 = v52;
        }
      }
      *(_DWORD *)(a2 + 1200) = v11;
    }
    v9 = *v2;
    v13 = (*(int (__thiscall **)(int, _DWORD, _DWORD, const char *))(*(_DWORD *)a2 + 1224))(
            a2,
            *(_DWORD *)(a2 + 1192),
            0,
            "BaseCombatCharacter.AmmoPickup");
    v41 = v13 - (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1216))(a2);
    v2 = this;
  }
  (*(void (__thiscall **)(_DWORD *, int, int, int, int))(v9 + 928))(v2, v41, v42, v43, v44);
LABEL_36:
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1220))(a2) == -1 )
  {
    v14 = *v2;
    v45 = (*(int (__thiscall **)(int, _DWORD, _DWORD, const char *))(*(_DWORD *)a2 + 1228))(
            a2,
            *(_DWORD *)(a2 + 1196),
            0,
            "BaseCombatCharacter.AmmoPickup");
    (*(void (__thiscall **)(_DWORD *, int))(v14 + 928))(v2, v45);
  }
  else
  {
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1228))(a2);
    if ( v15 > (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1220))(a2) )
    {
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1220))(a2);
      v53 = v16;
      if ( *(_DWORD *)(a2 + 1204) != v16 )
      {
        if ( *(_BYTE *)(a2 + 84) )
        {
          *(_BYTE *)(a2 + 88) |= 1u;
        }
        else
        {
          v17 = *(int **)(a2 + 24);
          if ( v17 )
          {
            sub_100194B0(v17, 1204);
            v16 = v53;
          }
        }
        *(_DWORD *)(a2 + 1204) = v16;
      }
      v18 = *v2;
      v19 = (*(int (__thiscall **)(int, _DWORD, _DWORD, const char *))(*(_DWORD *)a2 + 1228))(
              a2,
              *(_DWORD *)(a2 + 1196),
              0,
              "BaseCombatCharacter.AmmoPickup");
      v46 = v19 - (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1220))(a2);
      v2 = this;
      (*(void (__thiscall **)(_DWORD *, int))(v18 + 928))(this, v46);
    }
  }
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 864))(a2, v2);
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 320))(v2) )
  {
    v20 = v2[525];
    if ( v20 != -1 )
    {
      v21 = &off_1061BE18[4 * (v2[525] & 0xFFF) + 1];
      v22 = v20 >> 12;
      if ( off_1061BE18[4 * (v2[525] & 0xFFF) + 2] == v22 )
      {
        if ( *v21 )
        {
          if ( off_1061BE18[4 * (v2[525] & 0xFFF) + 2] == v22 )
            v23 = *v21;
          else
            v23 = 0;
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 996))(v23, 0);
          v24 = v2[525];
          if ( v24 == -1 || off_1061BE18[4 * (v2[525] & 0xFFF) + 2] != v24 >> 12 )
            v25 = 0;
          else
            v25 = off_1061BE18[4 * (v2[525] & 0xFFF) + 1];
          sub_100EAB80(v25, 32);
        }
      }
    }
    v26 = v2[525];
    if ( v26 == -1 || off_1061BE18[4 * (v2[525] & 0xFFF) + 2] != v26 >> 12 )
      v27 = 0;
    else
      v27 = off_1061BE18[4 * (v2[525] & 0xFFF) + 1];
    if ( a2 != v27 )
    {
      sub_100C9FD0(v2 + 525, a2);
      (*(void (__thiscall **)(_DWORD *, int, int))(*v2 + 1132))(v2, v27, a2);
    }
    v28 = v2[525];
    if ( v28 == -1 || off_1061BE18[4 * (v2[525] & 0xFFF) + 2] != v28 >> 12 )
      v54 = 0;
    else
      v54 = off_1061BE18[4 * (v2[525] & 0xFFF) + 1];
    v29 = v54;
    v30 = *(_DWORD *)(v54 + 192) & 0xFFFFFFDF;
    v48 = v30;
    if ( *(_DWORD *)(v54 + 192) != v30 )
    {
      if ( *(_BYTE *)(v54 + 84) )
      {
        *(_BYTE *)(v54 + 88) |= 1u;
      }
      else
      {
        v31 = *(int **)(v54 + 24);
        if ( v31 )
        {
          sub_100194B0(v31, 192);
          v30 = v48;
        }
      }
      v29 = v54;
      *(_DWORD *)(v54 + 192) = v30;
    }
    if ( *(_DWORD *)(v29 + 24) )
      **(_DWORD **)(v29 + 24) |= 0x80u;
    sub_100D8500(v54);
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 320))(v2) && (v2[62] & 0x100) != 0 )
  {
    v32 = v2[525];
    if ( v32 == -1 || off_1061BE18[4 * (v2[525] & 0xFFF) + 2] != v32 >> 12 )
      v33 = 0;
    else
      v33 = off_1061BE18[4 * (v2[525] & 0xFFF) + 1];
    *(float *)(v33 + 1220) = 1000000000.0;
    v34 = v2[525];
    if ( v34 == -1 || off_1061BE18[4 * (v2[525] & 0xFFF) + 2] != v34 >> 12 )
      v35 = 0;
    else
      v35 = off_1061BE18[4 * (v2[525] & 0xFFF) + 1];
    *(float *)(v35 + 1224) = 1000000000.0;
  }
  v49 = (*(int (__thiscall **)(_DWORD *, int))(*v2 + 1104))(v2, a2);
  if ( *(_DWORD *)(dword_10696BCC + 48) )
  {
    v55 = *(const char **)(a2 + 92);
    if ( !v55 )
      v55 = String;
    v36 = (const char *)v2[23];
    if ( !v36 )
      v36 = String;
    v37 = (const char *)sub_10276110(v49);
    Msg("%s equipped with %s, proficiency is %s\n", v36, v55, v37);
  }
  v2[439] = v49;
  v38 = v2[261];
  if ( v38 == -1 || off_1061BE18[4 * (v2[261] & 0xFFF) + 2] != v38 >> 12 )
    v39 = 0;
  else
    v39 = off_1061BE18[4 * (v2[261] & 0xFFF) + 1];
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 828))(a2, v39);
}
