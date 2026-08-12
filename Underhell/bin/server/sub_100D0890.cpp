int __thiscall sub_100D0890(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx

  v2 = this[280];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[280] & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      v4 = *v3;
      if ( v4 )
        (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 988))(v4, this);
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 1360))(this);
}
