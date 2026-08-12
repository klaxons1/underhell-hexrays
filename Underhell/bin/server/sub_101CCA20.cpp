int __thiscall sub_101CCA20(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  _DWORD *v5; // ecx
  unsigned int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax

  v3 = this[78];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[78] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = (_DWORD *)*v4;
  if ( v5 )
  {
    do
    {
      v6 = v5[79];
      if ( v6 == -1 || off_1061BE18[4 * (v5[79] & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (v5[79] & 0xFFF) + 1];
      sub_100D8720(v5, a2);
      v5 = (_DWORD *)v7;
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
  v10 = this[281];
  if ( *((_BYTE *)this + 1866) )
  {
    if ( v10 )
    {
      *(_DWORD *)(*(_DWORD *)(v10 + 8) + 4) = *(_DWORD *)(v10 + 4);
      *(_DWORD *)(*(_DWORD *)(v10 + 4) + 8) = *(_DWORD *)(v10 + 8);
      --dword_106960E4;
      goto LABEL_20;
    }
  }
  else if ( v10 )
  {
    *(_DWORD *)(*(_DWORD *)(v10 + 8) + 4) = *(_DWORD *)(v10 + 4);
    *(_DWORD *)(*(_DWORD *)(v10 + 4) + 8) = *(_DWORD *)(v10 + 8);
    --dword_106960D8;
LABEL_20:
    sub_10184660(v10);
    this[281] = 0;
  }
  sub_1025FAC0(this);
  return sub_1025FAC0(this);
}
