int __thiscall sub_100C8890(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // ebx
  int *v4; // eax
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx

  v2 = this + 477;
  v3 = 48;
  do
  {
    if ( *v2 != -1 )
    {
      v4 = &off_1061BE18[4 * (*v2 & 0xFFF) + 1];
      v5 = *v2 >> 12;
      if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] == v5 )
      {
        if ( *v4 )
        {
          if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] == v5 )
            v6 = *v4;
          else
            v6 = 0;
          sub_1025FAC0(v6);
        }
      }
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  v7 = this[103];
  if ( v7 != -1 && off_1061BE18[4 * (this[103] & 0xFFF) + 2] == v7 >> 12 )
  {
    v8 = off_1061BE18[4 * (this[103] & 0xFFF) + 1];
    if ( v8 )
    {
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v8 + 224))(v8, this);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 76))(this, 0);
    }
  }
  return sub_100E20F0(this);
}
