char __thiscall sub_1014FA10(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100422D0();
  v3 = v2;
  if ( v2 )
  {
    LOBYTE(v2) = sub_10042A30(v2);
    if ( !(_BYTE)v2 || (LOBYTE(v2) = sub_10042A70(v3), (_BYTE)v2) )
    {
      if ( (dword_1042FB78 & 0x801) != 0 )
      {
        LOBYTE(v2) = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 144))(this);
        if ( (_BYTE)v2 )
        {
          if ( *(_DWORD *)(dword_1043CA1C + 48) != 2 )
          {
            dword_1042FB78 &= 0xFFFFF7FE;
            (*(void (__thiscall **)(int *, int))(*off_103ED0D8 + 188))(off_103ED0D8, 1);
            (*(void (__thiscall **)(int *, int))(*off_103ED0D8 + 188))(off_103ED0D8, 2048);
          }
          LOBYTE(v2) = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 104))(this);
        }
      }
    }
    else if ( (dword_1042FB78 & 1) != 0 )
    {
      if ( *(_DWORD *)(dword_1043CA1C + 48) != 2 )
      {
        dword_1042FB78 &= ~1u;
        (*(void (__thiscall **)(int *, int))(*off_103ED0D8 + 188))(off_103ED0D8, 1);
      }
      LOBYTE(v2) = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(
                     dword_1041315C,
                     "cancelselect\n");
    }
  }
  return (char)v2;
}
