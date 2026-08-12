void __cdecl sub_10110560(int a1, int a2)
{
  int *v2; // edi
  const char *v3; // esi
  char *v5; // eax
  char *v6; // eax
  int v7; // esi
  int v8; // edi
  const char *v9; // ecx
  const char *v10; // eax
  int v11; // eax
  int v12; // [esp-8h] [ebp-20h]
  int v13; // [esp+0h] [ebp-18h]
  char *v14; // [esp+4h] [ebp-14h]
  char *v15; // [esp+8h] [ebp-10h]
  int v16; // [esp+20h] [ebp+8h]

  v2 = (int *)a2;
  v3 = String;
  if ( *(int *)a2 > 0 )
    v3 = *(const char **)(a2 + 1032);
  if ( a1 )
  {
    v16 = dword_10700AC8;
    (*(void (**)(void))(*(_DWORD *)dword_10700AC8 + 100))();
    if ( v3 == "killtarget" || !_stricmp(v3, "killtarget") )
    {
      if ( *(_DWORD *)(*(_DWORD *)(dword_106B2C88 + 28) + 48)
        && *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48)
        && (unsigned __int8)sub_1025EF10() )
      {
        v5 = (char *)String;
        if ( *v2 > 1 )
          v5 = (char *)v2[259];
        sub_1010E710(a1, v5);
      }
    }
    else if ( v3 == "demorestart" || !_stricmp(v3, "demorestart") )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1516))(a1);
    }
    else if ( v3 == "fade" || !_stricmp(v3, "fade") )
    {
      a2 = -932954336;
      sub_102600B0(a1, (int)&a2, 3.0, 3.0, 2);
    }
    else if ( v3 == "te" || !_stricmp(v3, "te") )
    {
      if ( *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48) && (unsigned __int8)sub_1025EF10() )
      {
        v6 = (char *)String;
        if ( *v2 > 1 )
          v6 = (char *)v2[259];
        if ( sub_10043F40(v6, "stop") )
        {
          v7 = sub_1012BC90(0, "te_tester");
          if ( v7 )
          {
            do
            {
              v8 = sub_1012BC90(v7, "te_tester");
              sub_1025FAC0(v7);
              v7 = v8;
            }
            while ( v8 );
          }
        }
        else
        {
          v9 = String;
          if ( *v2 > 2 )
            v9 = (const char *)v2[260];
          v10 = String;
          if ( *v2 > 1 )
            v10 = (const char *)v2[259];
          v15 = (char *)v9;
          v14 = (char *)v10;
          v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 508))(a1);
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
          sub_10282490(v11, v13, v14, v15);
        }
      }
    }
    else if ( !(*(unsigned __int8 (__thiscall **)(int, int, int *))(*(_DWORD *)dword_106B3CDC + 288))(
                 dword_106B3CDC,
                 a1,
                 v2) )
    {
      if ( (int)strlen(v3) <= 128 )
      {
        v12 = sub_1025F440("Unknown command: %s\n", (char)v3);
        sub_102601C0(a1, 2, v12, 0, 0, 0, 0);
      }
      else
      {
        sub_102601C0(a1, 2, "Console command too long.\n", 0, 0, 0, 0);
      }
    }
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v16 + 104))(v16, v16, a2);
  }
}
