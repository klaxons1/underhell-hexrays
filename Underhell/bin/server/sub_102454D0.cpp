int __thiscall sub_102454D0(char *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  int v7; // edx
  int v8; // ecx

  v3 = *((_DWORD *)this + 1);
  if ( v3 )
  {
    v7 = sub_10245350(this, *(_DWORD *)(*(_DWORD *)(v3 + 28) + 8 * a2));
    v8 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 28) + 8 * a2 + 4);
    if ( v8 < 0 || v8 >= *(_DWORD *)(v7 + 180) )
      v8 = 0;
    return v7 + 100 * v8 + *(_DWORD *)(v7 + 184);
  }
  else
  {
    v4 = a2;
    v5 = *(_DWORD *)this;
    if ( a2 < 0 || a2 >= *(_DWORD *)(v5 + 180) )
      v4 = 0;
    return v5 + 100 * v4 + *(_DWORD *)(v5 + 184);
  }
}
