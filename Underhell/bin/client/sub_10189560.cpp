int __usercall sub_10189560@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v2; // edi
  int v3; // esi
  int result; // eax
  int i; // ebx
  int v6; // edi
  char *v7; // eax
  _BYTE *v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // edi
  int v14; // eax
  int v15; // edi
  int v16; // eax
  void *v17; // eax
  int v18; // edi
  int v19; // eax
  const char *v20; // ebx
  int v21; // esi
  const char *v22; // eax
  _BYTE v24[128]; // [esp+8h] [ebp-1F4h] BYREF
  _BYTE v25[160]; // [esp+88h] [ebp-174h] BYREF
  _BYTE v26[128]; // [esp+128h] [ebp-D4h] BYREF
  char Buffer[64]; // [esp+1A8h] [ebp-54h] BYREF
  char v28[16]; // [esp+1E8h] [ebp-14h] BYREF
  int v29; // [esp+1F8h] [ebp-4h]

  v2 = a1;
  v29 = a1;
  v3 = sub_1005CDB0();
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  if ( *(_DWORD *)(v2 + 40) == -1 )
  {
    result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_104131A4 + 8))(dword_104131A4, "duck");
    *(_DWORD *)(v2 + 40) = result;
  }
  if ( v3 )
  {
    for ( i = 1; i <= *((_DWORD *)off_103DC81C + 5); ++i )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 16))(v3, i)
        && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 28))(v3, i)
        && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 20))(v3, i) )
      {
        v6 = *(_DWORD *)dword_1047CA78;
        v7 = (char *)(*(int (__thiscall **)(int, int, _BYTE *, int, int))(*(_DWORD *)v3 + 32))(v3, i, v26, 128, a2);
        v8 = sub_10076950(v7);
        (*(void (__thiscall **)(int, _BYTE *))(v6 + 12))(dword_1047CA78, v8);
        v9 = *(_DWORD *)v3;
        v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 52))(v3, i);
        v11 = (*(int (__thiscall **)(int, int))(v9 + 4))(v3, v10);
        v12 = v11;
        if ( v11 )
        {
          sub_10228370(Buffer, 0x40u, "#%s", v11);
          if ( !(*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, Buffer) )
            (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
              dword_1047CA78,
              v12,
              v24,
              128);
          v13 = *(_DWORD *)dword_1047CA78;
          v14 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                  dword_1047CA78,
                  "#Spec_PlayerItem_Team");
          (*(void (__cdecl **)(int, _BYTE *, int, int))(v13 + 32))(dword_1047CA78, v25, 160, v14);
        }
        else
        {
          v15 = *(_DWORD *)dword_1047CA78;
          v16 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                  dword_1047CA78,
                  "#Spec_PlayerItem");
          (*(void (__cdecl **)(int, _BYTE *, int, int))(v15 + 32))(dword_1047CA78, v25, 160, v16);
        }
        sub_10228370(v28, 0x10u, "%d", i);
        if ( sub_10229D00(32) )
        {
          v17 = (void *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 32))(v3, i);
          v18 = sub_1022B200((int)"UserData", "player", v17, "index", v28);
        }
        else
        {
          v18 = 0;
        }
        a2 = v18;
        (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v29 + 16) + 1068))(*(_DWORD *)(v29 + 16), v25);
        sub_1022AF00(v18);
        v2 = v29;
      }
    }
    v19 = sub_100766B0();
    v20 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 32))(v3, v19);
    v21 = 0;
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 16) + 1076))(*(_DWORD *)(v2 + 16));
    if ( result > 0 )
    {
      while ( 1 )
      {
        if ( sub_1025F540(v21) )
        {
          v22 = (const char *)sub_1022B4C0("player", (int)Locale);
          if ( !_stricmp(v22, v20) )
            break;
        }
        ++v21;
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 16) + 1076))(*(_DWORD *)(v2 + 16));
        if ( v21 >= result )
          return result;
      }
      return sub_1025F470(*(_DWORD *)(v2 + 16), v21);
    }
  }
  return result;
}
