int __thiscall sub_1012D2D0(int this)
{
  int v2; // eax
  unsigned int v3; // esi
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int result; // eax
  int v9; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)(this + 65540);
  *(_BYTE *)(this + 65568) = 1;
  if ( v2 )
  {
    v3 = ((v2 - this - 4) >> 4) | (*(_DWORD *)(this + 16 * ((v2 - this - 4) >> 4) + 8) << 12);
    if ( v3 != -1 )
    {
      do
      {
        if ( v3 != -1 )
        {
          v4 = (_DWORD *)(this + 16 * (v3 & 0xFFF) + 4);
          if ( *(_DWORD *)(this + 16 * (v3 & 0xFFF) + 8) == v3 >> 12 )
          {
            if ( *v4 )
            {
              v9 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v4 + 16))(*v4);
              if ( v9 )
              {
                v5 = dword_10700AC8;
                (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
                sub_1025FA50(v9);
                (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
              }
            }
          }
        }
        v6 = *(_DWORD *)(this + 16 * ((v3 & 0xFFF) + 1));
        if ( v6 )
          v7 = ((v6 - this - 4) >> 4) | (*(_DWORD *)(this + 16 * ((v6 - this - 4) >> 4) + 8) << 12);
        else
          v7 = -1;
        v3 = v7;
      }
      while ( v7 != -1 );
    }
  }
  sub_1012CE60();
  result = dword_1069E3B8;
  dword_1069E3C4 = 0;
  if ( dword_1069E3C0 >= 0 )
  {
    if ( dword_1069E3B8 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_1069E3B8);
      result = 0;
      dword_1069E3B8 = 0;
    }
    dword_1069E3BC = 0;
  }
  dword_1069E3C8 = result;
  dword_1060F300 = -1;
  byte_10697278 = 0;
  *(_DWORD *)(this + 65556) = 0;
  *(_DWORD *)(this + 65560) = 0;
  *(_BYTE *)(this + 65568) = 0;
  return result;
}
