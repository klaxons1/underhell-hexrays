char __thiscall sub_10160AB0(char *this)
{
  int v1; // esi
  int (__thiscall *v3)(int, const char *); // eax
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  char v9; // bl
  __int16 v10; // ax
  int v11; // edi
  int v13; // esi
  int v14; // eax
  char ArgList[512]; // [esp+8h] [ebp-234h] BYREF
  _DWORD v16[2]; // [esp+208h] [ebp-34h] BYREF
  int v17; // [esp+210h] [ebp-2Ch]
  int v18; // [esp+214h] [ebp-28h]
  int v19; // [esp+218h] [ebp-24h]
  int v20; // [esp+228h] [ebp-14h]
  char *v21; // [esp+238h] [ebp-4h]

  v1 = *(_DWORD *)(dword_106B31D8 + 4);
  v3 = *(int (__thiscall **)(int, const char *))(*(_DWORD *)off_10627F88 + 64);
  v21 = this;
  v4 = v3(off_10627F88, "MOD");
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(v1 + 40))(dword_106B31D8 + 4, v4) )
  {
    v5 = *(_DWORD *)dword_106B31D8;
    v6 = (*(int (__thiscall **)(int, const char *, char *, int, _DWORD, _DWORD))(*(_DWORD *)off_10627F88 + 64))(
           off_10627F88,
           "MOD",
           ArgList,
           512,
           0,
           0);
    (*(void (__thiscall **)(int, int))(v5 + 48))(dword_106B31D8, v6);
    sub_1015EFA0((int)this, "Loading stats from '%s'\n", ArgList);
  }
  sub_1042DE40(0, 0, 0);
  v7 = *(_DWORD *)(dword_106B31D8 + 4);
  v8 = (*(int (__thiscall **)(int, const char *, _DWORD *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)off_10627F88 + 64))(
         off_10627F88,
         "MOD",
         v16,
         0,
         0,
         0);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(v7 + 56))(dword_106B31D8 + 4, v8) )
  {
    v9 = 1;
    v10 = sub_1008A160(v16);
    v11 = v10;
    if ( v10 <= 6 )
    {
      dword_106B4AAC = v10;
      sub_1042D670(&byte_106B4AB0, 0x10u);
      byte_106B4AC0 = 0;
      if ( byte_106B3F00 )
      {
        if ( _stricmp(&byte_106B4AB0, &byte_106B3F00) )
        {
          v13 = *(_DWORD *)dword_106B31D8;
          v14 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)off_10627F88 + 64))(off_10627F88, "MOD");
          (*(void (__thiscall **)(int, int))(v13 + 60))(dword_106B31D8, v14);
          (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)dword_106B31D8 + 60))(
            dword_106B31D8,
            "gamestats.log",
            "MOD");
          Warning("Userid changed, clearing stats file\n");
          byte_106B4AB0 = 0;
          dword_106B4AAC = -1;
          sub_10162810(off_10627F88 + 4);
          (*(void (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 156))(off_10627F88);
          v9 = 0;
        }
        if ( v11 > 5 )
        {
          if ( *(_DWORD *)(v18 - v20 + v16[0]) == -17973521 )
          {
            sub_1008A260(v16);
          }
          else if ( !(unsigned __int8)sub_101629D0(v16, v11) )
          {
            sub_10162810(v21 + 4);
          }
          if ( v19 != v18 )
            (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)off_10627F88 + 152))(off_10627F88, v16);
        }
        else
        {
          sub_10162810(off_10627F88 + 4);
          v9 = 0;
        }
      }
      if ( v17 >= 0 && v16[0] )
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v16[0]);
      return v9;
    }
    else
    {
      if ( v17 >= 0 )
      {
        if ( v16[0] )
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v16[0]);
      }
      return 0;
    }
  }
  else
  {
    (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)dword_106B31D8 + 60))(
      dword_106B31D8,
      "gamestats.log",
      "MOD");
    if ( v17 >= 0 && v16[0] )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v16[0]);
    return 0;
  }
}
