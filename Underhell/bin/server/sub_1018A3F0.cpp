int __stdcall sub_1018A3F0(char *Destination, size_t Count, char a3)
{
  const char *v3; // edi
  int v4; // eax
  char *v5; // edi
  char *v6; // eax
  int v7; // esi
  char **v8; // eax
  int v9; // esi
  char *v10; // eax
  char *v11; // esi
  int v12; // edi
  const char *v13; // esi
  char *i; // eax
  char *v15; // ecx
  char v16; // al
  const char *v17; // esi
  char *j; // eax
  char *v19; // ecx
  char v20; // al
  char *v21; // edi
  char *v22; // eax
  int v23; // esi
  char **v24; // eax
  char Buffer[260]; // [esp+8h] [ebp-10Ch] BYREF
  int v27; // [esp+10Ch] [ebp-8h] BYREF
  char *v28; // [esp+110h] [ebp-4h]

  if ( (dword_106B2CEC & 0x1000) != 0 )
  {
    v3 = "FCVAR_NEVER_AS_STRING";
  }
  else
  {
    v3 = *(const char **)(dword_106B2CF4 + 36);
    if ( !v3 )
      v3 = String;
  }
  v4 = (*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)dword_106B31D8 + 356))(
         dword_106B31D8,
         v3,
         "GAME");
  if ( !v4 )
  {
    v5 = (char *)sub_10184390(32);
    v6 = *(char **)(dword_106B31C8 + 60);
    if ( !v6 )
      v6 = (char *)String;
    sub_104299C0(v5, v6, 0x20u);
    v7 = dword_106B7738;
    if ( dword_106B7738 + 1 > dword_106B7730 )
      sub_102ABFC0(dword_106B7738 - dword_106B7730 + 1);
    ++dword_106B7738;
    dword_106B773C = dword_106B772C;
    if ( dword_106B7738 - v7 - 1 > 0 )
      memcpy(
        (void *)(dword_106B772C + 4 * v7 + 4),
        (const void *)(dword_106B772C + 4 * v7),
        4 * (dword_106B7738 - v7 - 1));
    v8 = (char **)(dword_106B772C + 4 * v7);
    if ( v8 )
      *v8 = v5;
    goto LABEL_37;
  }
  if ( dword_106B7718 != v4 )
  {
    v9 = 0;
    dword_106B7718 = v4;
    for ( dword_106B771C = 0; v9 < dword_106B7738; ++v9 )
      sub_10184660(*(_DWORD *)(dword_106B772C + 4 * v9));
    dword_106B7738 = 0;
    v10 = (char *)sub_1025F7A0(v3, &v27);
    v11 = v10;
    v28 = v10;
    if ( v10 )
    {
      if ( v27 )
      {
        sub_10429FB0(v10, (int)"\n", (int)&dword_106B772C);
        v12 = 0;
        if ( dword_106B7738 <= 0 )
          goto LABEL_36;
        while ( 1 )
        {
          v13 = *(const char **)(dword_106B772C + 4 * v12);
          for ( i = strchr(v13, 13); i; i = strchr(v13, 13) )
          {
            v15 = i + 1;
            do
            {
              v16 = *v15;
              *(v15 - 1) = *v15;
              ++v15;
            }
            while ( v16 );
          }
          v17 = *(const char **)(dword_106B772C + 4 * v12);
          for ( j = strchr(v17, 32); j; j = strchr(v17, 32) )
          {
            v19 = j + 1;
            do
            {
              v20 = *v19;
              *(v19 - 1) = *v19;
              ++v19;
            }
            while ( v20 );
          }
          if ( !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 4))(
                  dword_106B31D0,
                  *(_DWORD *)(dword_106B772C + 4 * v12)) )
            break;
          if ( !sub_104291C0(*(_DWORD *)(dword_106B772C + 4 * v12), &unk_104F26B0, 2) )
            goto LABEL_31;
LABEL_34:
          if ( ++v12 >= dword_106B7738 )
          {
            v11 = v28;
LABEL_36:
            sub_1025F7F0(v11);
            goto LABEL_37;
          }
        }
        sub_10429A00(
          Buffer,
          0x104u,
          "Invalid map '%s' included in map cycle file. Ignored.\n",
          *(_DWORD *)(dword_106B772C + 4 * v12));
        Warning(Buffer);
LABEL_31:
        sub_10184660(*(_DWORD *)(dword_106B772C + 4 * v12));
        if ( dword_106B7738 - v12 - 1 > 0 )
          memcpy(
            (void *)(dword_106B772C + 4 * v12),
            (const void *)(dword_106B772C + 4 * v12 + 4),
            4 * (dword_106B7738 - v12 - 1));
        --dword_106B7738;
        --v12;
        goto LABEL_34;
      }
    }
  }
LABEL_37:
  if ( !dword_106B7738 )
  {
    v21 = (char *)sub_10184390(32);
    v22 = *(char **)(dword_106B31C8 + 60);
    if ( !v22 )
      v22 = (char *)String;
    sub_104299C0(v21, v22, 0x20u);
    v23 = dword_106B7738;
    if ( dword_106B7738 + 1 > dword_106B7730 )
      sub_102ABFC0(dword_106B7738 - dword_106B7730 + 1);
    ++dword_106B7738;
    dword_106B773C = dword_106B772C;
    if ( dword_106B7738 - v23 - 1 > 0 )
      memcpy(
        (void *)(dword_106B772C + 4 * v23 + 4),
        (const void *)(dword_106B772C + 4 * v23),
        4 * (dword_106B7738 - v23 - 1));
    v24 = (char **)(dword_106B772C + 4 * v23);
    if ( v24 )
      *v24 = v21;
  }
  if ( a3 )
    dword_106B771C = RandomInt(0, dword_106B7738 - 1);
  return sub_104299C0(Destination, *(char **)(dword_106B772C + 4 * dword_106B771C), Count);
}
