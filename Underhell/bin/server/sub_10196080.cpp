void __thiscall sub_10196080(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax

  if ( a2 )
  {
    v3 = this[3];
    v4 = 0;
    if ( v3 <= 0 )
      goto LABEL_8;
    v5 = (_DWORD *)*this;
    while ( *v5 != a2 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_8;
    }
    if ( v4 < 0 )
    {
LABEL_8:
      v6 = this[1];
      if ( v3 + 1 > v6 )
        sub_102ABFC0(v3 - v6 + 1);
      ++this[3];
      v7 = (_DWORD *)*this;
      v8 = this[3] - v3 - 1;
      this[4] = *this;
      if ( v8 > 0 )
        memcpy(&v7[v3 + 1], &v7[v3], 4 * v8);
      v9 = (_DWORD *)(*this + 4 * v3);
      if ( v9 )
        *v9 = a2;
    }
  }
}
