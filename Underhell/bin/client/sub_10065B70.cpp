char __thiscall sub_10065B70(_BYTE *this, char *Str, char *a3)
{
  int v3; // eax
  char v5; // al
  char *v6; // esi
  char String[260]; // [esp+4h] [ebp-208h] BYREF
  char v9[260]; // [esp+108h] [ebp-104h] BYREF

  v3 = *(_DWORD *)(dword_10410CCC + 48);
  if ( v3 )
    v5 = v3 > 0;
  else
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 244))(dword_1047C97C);
  if ( !v5 || !this[1198] || !Str || !*Str )
    return 0;
  if ( strstr(Str, "/high") || strstr(Str, "\\high") )
  {
    sub_1003E1B0(a3, Str);
    return 1;
  }
  else
  {
    sub_1003E1B0(String, Str);
    v9[0] = 0;
    v6 = strtok(String, "/\\");
    if ( v6 )
    {
      while ( 1 )
      {
        if ( !_stricmp(v6, "low") )
          sub_10228100((int)v9, "high", 260, -1);
        else
          sub_10228100((int)v9, v6, 260, -1);
        v6 = strtok(0, "/\\");
        if ( !v6 )
          break;
        sub_10228100((int)v9, "\\", 260, -1);
      }
    }
    sub_1003E1B0(a3, v9);
    return 1;
  }
}
