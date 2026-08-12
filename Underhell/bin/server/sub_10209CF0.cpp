bool __thiscall sub_10209CF0(_DWORD *this, int a2, int a3)
{
  bool result; // al
  int v5; // esi
  int v6; // esi

  result = 0;
  if ( (unsigned __int8)sub_102654D0(a2, a3) )
  {
    if ( (unsigned __int8)sub_10265430(a2, this[1]) )
    {
      if ( (unsigned __int8)sub_10265430(a2, this[2]) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2) )
          return 1;
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
        if ( !v5 )
          return 1;
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v5 + 68))(v5, this[3], a3) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B3CDC + 112))(
                 dword_106B3CDC,
                 this[3],
                 *(_DWORD *)(v5 + 420)) )
          {
            if ( *(_BYTE *)(v5 + 306) != 6 )
              return 1;
            v6 = *(_DWORD *)(v5 + 424);
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 40))(v6)
              || ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6) >= 32.0 )
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}
