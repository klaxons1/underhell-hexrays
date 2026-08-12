char __thiscall sub_10001520(_BYTE *this)
{
  int v3; // ecx

  if ( *(_DWORD *)off_10627B10
    && *((_DWORD *)off_10627B10 + 4)
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)off_10627B10 + 4))(*(_DWORD *)off_10627B10) )
  {
    if ( (unsigned __int8)sub_101172D0() )
    {
      Msg("Achievements disabled: in commentary mode.\n");
      return 0;
    }
    else
    {
      if ( !this[458] )
        return 1;
      if ( *(_DWORD *)(dword_106CE684 + 48)
        && (v3 = *((_DWORD *)off_10627B10 + 2)) != 0
        && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3) != 1 )
      {
        return 1;
      }
      else
      {
        Msg("Achievements disabled: cheats turned on in this app session.\n");
        return 0;
      }
    }
  }
  else
  {
    Msg("Achievements disabled: Steam not running.\n");
    return 0;
  }
}
