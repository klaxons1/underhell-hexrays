int __userpurge sub_10001C70@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int (__thiscall *v6)(int); // edx
  int v7; // eax
  __int16 v8; // [esp+4h] [ebp-208h]
  _WORD v9[255]; // [esp+6h] [ebp-206h] BYREF
  int v10; // [esp+204h] [ebp-8h]
  int v11; // [esp+214h] [ebp+8h]

  result = strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3), "achievement_event");
  if ( !result )
  {
    v4 = (*(int (__thiscall **)(int, const char *, const char *, int, int))(*(_DWORD *)a3 + 32))(
           a3,
           "achievement_name",
           Locale,
           a2,
           a1);
    v5 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a3 + 24))(a3, "cur_val", 0);
    v11 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a3 + 24))(a3, "max_val", 0);
    v8 = 0;
    memset(v9, 0, sizeof(v9));
    if ( !*((_DWORD *)off_103DC800 + 4) )
      Msg("Steam not running, achievement progress notification not displayed\n");
    v6 = *(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 388);
    v10 = 0;
    v7 = v6(dword_1041315C);
    *(_DWORD *)&v9[1] = v11;
    return (*(int (__thiscall **)(_DWORD, int, _DWORD, int, int, int))(**((_DWORD **)off_103DC800 + 4) + 68))(
             *((_DWORD *)off_103DC800 + 4),
             v7 & 0xFFFFFF,
             0,
             v4,
             v5,
             v11);
  }
  return result;
}
