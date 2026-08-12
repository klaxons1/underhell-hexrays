void __thiscall sub_1038AA20(int this)
{
  bool v2; // bl
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // edi
  const char *v8; // eax

  if ( *(_BYTE *)(this + 4892) && sub_102A8560(this + 4876) )
  {
    v2 = 1;
  }
  else
  {
    v3 = sub_101679A0((int)"gordon_precriminal");
    v2 = sub_10167A00(v3) != 1;
  }
  v4 = *(_DWORD *)(this + 4336);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( !*(_BYTE *)(this + 4340) || (*(_DWORD *)(this + 2716) & 0x10000000) != 0 )
      {
        if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
        {
          v6 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2);
          v7 = v6;
          if ( !*(_DWORD *)(this + 2796) || v6 == 2 )
          {
            v8 = "METROPOLICE_IDLE_CR";
            if ( !v2 )
              v8 = "METROPOLICE_IDLE";
            sub_100AC410(this + 5160, v8, 0, 2);
          }
          else if ( sub_100AC410(this + 5160, (&off_1067685C[2 * v2])[v6], 0, 2) >= 0 )
          {
            sub_100B1890(*(_DWORD **)(this + 2796), dword_106E9D4C, v7 + 2, this);
            *(_DWORD *)(this + 4336) = 0;
          }
        }
      }
      else if ( sub_100AC410(this + 5160, "METROPOLICE_IDLE_HARASS_PLAYER", 0, 1) >= 0 )
      {
        v5 = *(_DWORD **)(this + 2796);
        *(_DWORD *)(this + 2716) |= 0x10000000u;
        if ( v5 )
          sub_100B19C0(v5, 0x10000000);
      }
    }
    else if ( sub_100AC410(this + 5160, (&off_1067686C[2 * v2 - 2])[*(_DWORD *)(this + 4336)], 0, 2) >= 0 )
    {
      sub_100B1890(*(_DWORD **)(this + 2796), dword_106E9D4C, 1, this);
      *(_DWORD *)(this + 4336) = 1;
    }
  }
}
