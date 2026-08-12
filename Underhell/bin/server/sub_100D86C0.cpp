int __thiscall sub_100D86C0(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx

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
  return sub_1025FAC0(this);
}
