int __thiscall sub_100D8720(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  int v9; // ecx

  v3 = this[78];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[78] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  if ( v5 )
  {
    do
    {
      v6 = *(_DWORD *)(v5 + 316);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(v5 + 316) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(v5 + 316) & 0xFFF) + 1];
      sub_100D8720(a2);
      v5 = v7;
    }
    while ( v7 );
  }
  v8 = this[103];
  if ( v8 != -1 && off_1061BE18[4 * (this[103] & 0xFFF) + 2] == v8 >> 12 )
  {
    v9 = off_1061BE18[4 * (this[103] & 0xFFF) + 1];
    if ( v9 )
    {
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v9 + 224))(v9, this);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 76))(this, 0);
    }
  }
  return sub_1025FAC0(this);
}
