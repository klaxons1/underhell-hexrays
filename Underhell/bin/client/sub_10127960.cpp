int __thiscall sub_10127960(char *this, int a2)
{
  int v2; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // esi
  int v9; // edi
  int v10; // ecx
  int v11; // eax

  v2 = a2;
  if ( a2 < 0
    || ((v4 = *((_DWORD *)this + 1)) != 0 ? (v5 = *(_DWORD *)(v4 + 20)) : (v5 = *(_DWORD *)(*(_DWORD *)this + 188)),
        a2 >= v5) )
  {
    v2 = 0;
  }
  v6 = *((_DWORD *)this + 1);
  if ( v6 )
  {
    v9 = 16 * v2;
    v10 = sub_10127760(this, *(_DWORD *)(*(_DWORD *)(v6 + 8) + 16 * v2 + 8));
    v11 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 8) + v9 + 12);
    if ( v11 < 0 || v11 >= *(_DWORD *)(v10 + 188) )
      v11 = 0;
    return v10 + *(_DWORD *)(v10 + 192) + 212 * v11;
  }
  else
  {
    v7 = *(_DWORD *)this;
    if ( v2 < 0 || v2 >= *(_DWORD *)(v7 + 188) )
      v2 = 0;
    return v7 + *(_DWORD *)(v7 + 192) + 212 * v2;
  }
}
