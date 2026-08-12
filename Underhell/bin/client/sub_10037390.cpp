int __userpurge sub_10037390@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int result; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // [esp-Ch] [ebp-10h]

  if ( !*(_BYTE *)(a1 + 116) )
    return 0;
  result = *(_DWORD *)(a1 + 88);
  v5 = 0;
  if ( result )
  {
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, result) - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
      {
        Warning("ERROR:  Sprite model's not supported any more except in legacy temp ents\n");
        sub_100364E0(a1 - 4);
        return 0;
      }
      if ( v7 == 1 )
      {
        if ( *(_DWORD *)((*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 + 4) + 8))(a1 + 4, a2) + 8) )
          v8 = *(const char **)((*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 4) + 8))(a1 + 4) + 8);
        else
          v8 = "unknown";
        v9 = (const char *)(*(int (__thiscall **)(int, _DWORD, const char *))(*(_DWORD *)dword_10413178 + 12))(
                             dword_10413178,
                             *(_DWORD *)(a1 + 88),
                             v8);
        Warning("ERROR:  Can't draw studio model %s because %s is not derived from C_BaseAnimating\n", v9, v10);
        sub_100364E0(a1 - 4);
        return 0;
      }
    }
    else
    {
      v5 = (*(int (__thiscall **)(int, bool, bool))(*(_DWORD *)(a1 - 4) + 396))(a1 - 4, a3 < 0, (a3 & 0x40000000) != 0);
    }
    sub_100364E0(a1 - 4);
    return v5;
  }
  return result;
}
