int __usercall sub_10025310@<eax>(int a1@<ecx>, int a2@<esi>)
{
  int v3; // eax
  int v4; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  const char *v14; // eax
  const char *v15; // [esp-Ch] [ebp-1Ch]
  int v16; // [esp-8h] [ebp-18h]
  int v18; // [esp+Ch] [ebp-4h]

  v3 = sub_100378C0();
  v4 = v3;
  if ( !v3 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(v3 + 8) + 32))(v3 + 8) )
    return 0;
  v6 = v4 + 4;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v4 + 4) + 36))(v4 + 4) )
  {
    v18 = *(_DWORD *)dword_10413178;
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 36))(v4 + 4);
    if ( (*(int (__thiscall **)(int, int))(v18 + 36))(dword_10413178, v7) == 3 )
    {
      return v4;
    }
    else
    {
      v8 = *(_DWORD *)dword_10413178;
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 36))(v6, a2);
      v10 = (*(int (__thiscall **)(int, int))(v8 + 36))(dword_10413178, v9);
      v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 36))(v6, v10);
      v12 = (*(int (__thiscall **)(int, int))(v8 + 12))(dword_10413178, v11);
      v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 + 4) + 36))(a1 + 4, v12);
      v14 = (const char *)(*(int (__thiscall **)(int, int))(v8 + 12))(dword_10413178, v13);
      Warning("Attached %s (mod_studio) to %s (%d)\n", v14, v15, v16);
      return 0;
    }
  }
  else
  {
    Warning("mod_studio: MOVETYPE_FOLLOW with no model.\n");
    return 0;
  }
}
