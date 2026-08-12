int __usercall sub_101B4790@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int result; // eax
  int v5; // ebx
  int v6; // eax
  int i; // edi
  const unsigned __int16 *v8; // edi
  int v11; // [esp+4h] [ebp-8h]
  int v12; // [esp+8h] [ebp-4h]

  result = sub_100422D0();
  if ( result )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, *(_DWORD *)(a1 + 261));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *(_DWORD *)(a1 + 232));
    v5 = (int)*(float *)(a1 + 240);
    v12 = v5;
    v11 = (int)*(float *)(a1 + 248);
    v6 = *(_DWORD *)(a1 + 276);
    for ( i = 0; i < v6; v12 = v5 )
    {
      if ( *(_BYTE *)(a1 + 285) && i == v6 - 1 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, *(_DWORD *)(a1 + 266));
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
        dword_1047CA6C,
        v5,
        v11,
        a3,
        a2);
      a2 = 0;
      if ( i >= *(_DWORD *)(a1 + 280) )
        a3 = 67;
      else
        a3 = 77;
      (*(void (**)(void))(*(_DWORD *)dword_1047CA6C + 92))();
      v5 = (int)((double)v12 + *(float *)(a1 + 256));
      v6 = *(_DWORD *)(a1 + 276);
      ++i;
    }
    if ( !*(_BYTE *)(a1 + 285) && *(_BYTE *)(a1 + 269) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, *(_DWORD *)(a1 + 266));
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v5, v11);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(dword_1047CA6C, 67, 0);
    }
    if ( *(_BYTE *)(a1 + 284) )
    {
      v8 = (const unsigned __int16 *)(*(int (__thiscall **)(int, const char *, int, int))(*(_DWORD *)dword_1047CA78 + 8))(
                                       dword_1047CA78,
                                       "#Valve_Hud_SQUAD_FOLLOWING",
                                       a3,
                                       a2);
      if ( !v8 )
        v8 = L"SQUAD FOLLOWING";
    }
    else
    {
      result = dword_1044EF54;
      if ( *(_DWORD *)(dword_1044EF54 + 48) )
        return result;
      v8 = (const unsigned __int16 *)(*(int (__thiscall **)(int, const char *, int, int))(*(_DWORD *)dword_1047CA78 + 8))(
                                       dword_1047CA78,
                                       "#Valve_Hud_SQUAD_STATIONED",
                                       a3,
                                       a2);
      if ( !v8 )
        v8 = L"SQUAD STATIONED";
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *(_DWORD *)(a1 + 208));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, *(_DWORD *)(a1 + 271));
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
      dword_1047CA6C,
      (int)*(float *)(a1 + 216),
      (int)*(float *)(a1 + 224));
    wcslen(v8);
    return (*(int (__thiscall **)(int, const unsigned __int16 *))(*(_DWORD *)dword_1047CA6C + 88))(dword_1047CA6C, v8);
  }
  return result;
}
