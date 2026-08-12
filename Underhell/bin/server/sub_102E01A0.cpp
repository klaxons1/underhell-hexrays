void __thiscall sub_102E01A0(_DWORD *this, int a2)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // esi

  v2 = this[248];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( *(_DWORD *)(a2 + 24) == 5 )
          v5 = *(_DWORD *)(a2 + 8);
        else
          v5 = 0;
        if ( v3[1] == v4 )
          v6 = (_DWORD *)*v3;
        else
          v6 = 0;
        v7 = v6 + 55;
        if ( v6[55] != v5 )
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 464))(v6, v6 + 55);
          *v7 = v5;
        }
      }
    }
  }
}
