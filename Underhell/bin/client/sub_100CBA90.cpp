char __thiscall sub_100CBA90(void *this, int a2, int a3)
{
  char *v3; // eax
  char *v4; // ebx
  char *v5; // esi
  int v6; // edi
  bool v7; // zf
  char v8; // al
  char *v9; // ecx
  char *v10; // ecx
  _DWORD *v11; // esi
  int v12; // ecx
  int v13; // ecx
  const char **v14; // eax
  int v15; // eax
  float v16; // ecx
  int v17; // edx
  const char *v18; // eax
  double v20; // [esp+0h] [ebp-738h]
  double ArgList; // [esp+10h] [ebp-728h]
  const char *ArgList_4; // [esp+14h] [ebp-724h]
  char Str[1024]; // [esp+24h] [ebp-714h] BYREF
  char String1[512]; // [esp+424h] [ebp-314h] BYREF
  char Buffer[256]; // [esp+624h] [ebp-114h] BYREF
  void *v26; // [esp+724h] [ebp-14h]
  float v27; // [esp+728h] [ebp-10h]
  int v28; // [esp+72Ch] [ebp-Ch]
  int v29; // [esp+730h] [ebp-8h]
  char *v30; // [esp+734h] [ebp-4h]

  v26 = this;
  sub_1022D0A0((void *)Locale);
  v3 = (char *)sub_100422D0();
  v4 = v3;
  if ( v3 )
  {
    v5 = (char *)a2;
    v6 = 0;
    v7 = *(_BYTE *)a2 == 0;
    v3 = Str;
    v30 = Str;
    if ( !v7 )
    {
      do
      {
        LOBYTE(v3) = *v5;
        if ( *v5 == 40 )
        {
          v8 = *++v5;
          v9 = String1;
          if ( v8 )
          {
            while ( v8 != 41 )
            {
              ++v5;
              *v9 = v8;
              v8 = *v5;
              ++v9;
              if ( !*v5 )
                goto LABEL_10;
            }
            if ( *v5 )
              ++v5;
          }
LABEL_10:
          *v9 = 0;
          v3 = (char *)_stricmp(String1, "localplayer");
          if ( v3 )
          {
            if ( !_stricmp(String1, "localteam") )
            {
              v3 = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v4 + 292))(v4);
              v6 = (int)v3;
            }
            else if ( !_stricmp(String1, "localplayerweapon") )
            {
              v3 = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v4 + 788))(v4);
              v6 = (int)v3;
            }
            else
            {
              v3 = (char *)_stricmp(String1, "playerresource");
              if ( !v3 )
                v6 = dword_1040D3A8;
            }
          }
          else
          {
            v6 = (int)v4;
          }
        }
        else
        {
          v10 = v30;
          *v30 = (char)v3;
          v30 = v10 + 1;
          ++v5;
        }
      }
      while ( *v5 );
    }
    *v30 = 0;
    if ( v6 )
    {
      a2 = 0;
      sub_100CB9A0(Str, 0x400u, &a2);
      v11 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 60))(v6);
      v3 = strstr(Str, ".");
      if ( !v3 )
      {
        v3 = (char *)sub_100CB930(v11, Str);
        if ( v3 )
        {
          if ( *((__int16 *)v3 + 9) >= 0 )
          {
            v12 = *((_DWORD *)v3 + 2);
            Buffer[0] = 0;
            v13 = v6 + v12;
            switch ( *(_DWORD *)v3 )
            {
              case 1:
                ArgList = *(float *)(v13 + 4 * a2);
                sub_10228370(Buffer, 0x100u, "%.2f", SLOBYTE(ArgList));
                break;
              case 2:
                v14 = (const char **)(v13 + 4 * a2);
                if ( v14 )
                  ArgList_4 = *v14;
                else
                  ArgList_4 = Locale;
                goto LABEL_37;
              case 3:
                v15 = v13 + 12 * a2;
                v16 = *(float *)v15;
                v17 = *(_DWORD *)(v15 + 4);
                v29 = *(_DWORD *)(v15 + 8);
                v28 = v17;
                v27 = v16;
                v20 = v16;
                sub_10228370(Buffer, 0x100u, "%.2f %.2f %.2f", SLOBYTE(v20));
                break;
              case 5:
                sub_10228370(Buffer, 0x100u, "%i", *(_DWORD *)(v13 + 4 * a2));
                break;
              case 6:
                v18 = "true";
                if ( !*(_BYTE *)(v13 + a2) )
                  v18 = "false";
                sub_10228370(Buffer, 0x100u, "%s", (char)v18);
                break;
              case 7:
                sub_10228370(Buffer, 0x100u, "%i", *(_WORD *)(v13 + 2 * a2));
                break;
              case 8:
                LOBYTE(ArgList_4) = a2 + v13;
LABEL_37:
                sub_10228370(Buffer, 0x100u, "%s", (char)ArgList_4);
                break;
              case 9:
                sub_10228370(Buffer, 0x100u, "%d %d %d %d", *(_DWORD *)(v13 + 4 * a2));
                break;
              default:
                break;
            }
            LOBYTE(v3) = sub_1022D0A0(Buffer);
          }
        }
      }
    }
  }
  return (char)v3;
}
