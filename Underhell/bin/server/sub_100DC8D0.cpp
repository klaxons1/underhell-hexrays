int __thiscall sub_100DC8D0(_BYTE *this, int a2)
{
  unsigned int v2; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx

  v2 = *(_DWORD *)(a2 + 44);
  if ( v2 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    v5 = v2 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v6 + 272))(v6, this, a2);
      }
    }
  }
  if ( this[225] )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 480))(this, this + 225);
    this[225] = 0;
  }
  if ( this[224] != 2 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 472))(this, this + 224);
    this[224] = 2;
  }
  return sub_1025FAC0(this);
}
