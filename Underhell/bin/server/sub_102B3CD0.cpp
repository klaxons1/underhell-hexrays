void __thiscall sub_102B3CD0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx

  v2 = this[103];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      v4 = *v3;
      if ( v4 )
      {
        (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 224))(v4, this);
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 76))(this, 0);
      }
    }
  }
  sub_1025FAC0((int)this);
}
