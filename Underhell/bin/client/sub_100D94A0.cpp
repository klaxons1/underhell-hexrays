void __thiscall sub_100D94A0(_BYTE *this)
{
  int v2; // eax
  int v3; // edx
  char v4; // bl
  int i; // esi
  int v6; // ecx
  const char *v7; // eax
  char Buffer[256]; // [esp+4h] [ebp-10Ch] BYREF
  _DWORD v9[3]; // [esp+104h] [ebp-Ch]

  if ( this[49] && this[48] && this[107] && this[76] )
  {
    v2 = *(_DWORD *)(dword_104338B4 + 48);
    v9[2] = *(_DWORD *)(dword_10433C14 + 48);
    v3 = *(_DWORD *)(dword_1043386C + 48);
    v4 = 0;
    v9[0] = v2;
    v9[1] = v3;
    for ( i = 0; i < 3; ++i )
    {
      if ( this[i + 104] )
      {
        v6 = v9[i];
        if ( v6 != *(_DWORD *)&this[4 * i + 92] )
        {
          v4 = 1;
          *(_DWORD *)&this[4 * i + 92] = v6;
          if ( i )
          {
            if ( i == 1 )
              v7 = "m_mouseaccel2";
            else
              v7 = "m_mousespeed";
          }
          else
          {
            v7 = "m_mouseaccel1";
          }
          sub_10228370(Buffer, 0x100u, "Mouse parameter '%s' set to %i\n", (char)v7);
          DevMsg("%s", Buffer);
        }
      }
    }
    if ( v4 )
      this[76] = SystemParametersInfoA(4u, 0, this + 92, 0);
  }
}
