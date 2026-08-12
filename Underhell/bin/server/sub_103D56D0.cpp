void __thiscall sub_103D56D0(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  unsigned int v6; // esi
  int *v7; // eax
  unsigned int v8; // esi

  v3 = this[103];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1];
    if ( v4[1] == v3 >> 12 )
    {
      v5 = *v4;
      if ( v5 )
      {
        (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 224))(v5, this);
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 76))(this, 0);
      }
    }
  }
  sub_1025FAC0((int)this);
  v6 = this[292];
  if ( v6 != -1 )
  {
    v7 = &off_1061BE18[4 * (v6 & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( v7[1] == v8 )
    {
      if ( *v7 )
      {
        if ( v7[1] == v8 )
          sub_103D3960(*v7);
        else
          sub_103D3960(0);
      }
    }
  }
}
