float *__userpurge sub_1034C370@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  const char *v6; // esi
  char **v8; // eax
  char *v9; // edi
  const char *v10; // esi
  _DWORD *v11; // eax
  const char *v12; // esi
  unsigned int v13; // eax
  int v14; // ecx
  void (__noreturn ***v15)(); // eax
  float v16; // [esp+10h] [ebp-Ch]

  v4 = *(_DWORD *)(a1 + 4016);
  if ( v4 != -1 && (v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 4016) & 0xFFF) + 1], v5[1] == v4 >> 12) && *v5 )
  {
    v6 = *(const char **)(a1 + 260);
    if ( !v6 )
      v6 = String;
    return (float *)Warning("npc_combinedropship %s was told to pickup, but is already carrying something.\n", v6);
  }
  else
  {
    v8 = (char **)(a3 + 8);
    if ( *(_DWORD *)(a3 + 24) != 2 )
    {
      a3 = 0;
      v8 = (char **)&a3;
    }
    v9 = *v8;
    if ( *v8 )
    {
      v11 = sub_1012BF20(&dword_1069E3E0, 0, v9, 0, 0, 0, 0);
      if ( v11 )
      {
        *(_DWORD *)(a1 + 4020) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*v11 + 8))(v11, a2);
        *(_BYTE *)(a1 + 3985) = 0;
        v13 = *(_DWORD *)(a1 + 4020);
        if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4020) & 0xFFF) + 2] != v13 >> 12 )
          v14 = 0;
        else
          v14 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4020) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 76))(v14, a1);
        if ( *(_DWORD *)(a1 + 2324) == 1 )
          sub_1002B660(a1, 2);
        if ( *(_DWORD *)(a1 + 3960) != 7 )
        {
          if ( *(_DWORD *)(a1 + 4160) )
          {
            v15 = sub_1023DBA0();
            ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v15)[12])(
              v15,
              *(_DWORD *)(a1 + 4160),
              0.0,
              0.0);
          }
          *(_DWORD *)(a1 + 3960) = 7;
        }
        if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
          sub_100DAFD0(a1);
        v16 = *(float *)(a1 + 480) * *(float *)(a1 + 480)
            + *(float *)(a1 + 476) * *(float *)(a1 + 476)
            + *(float *)(a1 + 484) * *(float *)(a1 + 484);
        *(float *)(a1 + 3992) = off_10689708(v16);
        return sub_1034B920(a1);
      }
      else
      {
        v12 = *(const char **)(a1 + 260);
        if ( !v12 )
          v12 = String;
        return (float *)Warning("npc_combinedropship %s couldn't find pickup target named %s\n", v12, v9);
      }
    }
    else
    {
      v10 = *(const char **)(a1 + 260);
      if ( !v10 )
        v10 = String;
      return (float *)Warning("npc_combinedropship %s tried to pickup with no specified pickup target.\n", v10);
    }
  }
}
