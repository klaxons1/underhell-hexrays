void __thiscall sub_101BA180(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // edx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax

  if ( a2 )
  {
    v2 = this + 82;
    v3 = this[85];
    v4 = 0;
    if ( v3 <= 0 )
      goto LABEL_8;
    v5 = (_DWORD *)*v2;
    while ( *v5 != a2 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_8;
    }
    if ( v4 == -1 )
    {
LABEL_8:
      v6 = v2[1];
      v7 = v3;
      if ( v3 + 1 > v6 )
        sub_102ABFC0(v3 - v6 + 1);
      ++v2[3];
      v8 = (_DWORD *)*v2;
      v9 = v2[3] - v7 - 1;
      v2[4] = *v2;
      if ( v9 > 0 )
        memcpy(&v8[v7 + 1], &v8[v7], 4 * v9);
      v10 = (_DWORD *)(*v2 + 4 * v7);
      if ( v10 )
        *v10 = a2;
    }
  }
}
