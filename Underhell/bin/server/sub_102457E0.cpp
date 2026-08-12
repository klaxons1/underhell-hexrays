int __thiscall sub_102457E0(char *this, int a2)
{
  int v3; // eax
  int v5; // eax

  v3 = *((_DWORD *)this + 1);
  if ( !v3 )
    return *(_DWORD *)this + 92 * a2 + *(_DWORD *)(*(_DWORD *)this + 244);
  v5 = sub_10245350(this, *(_DWORD *)(*(_DWORD *)(v3 + 48) + 8 * a2));
  return v5 + *(_DWORD *)(v5 + 244) + 92 * *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 48) + 8 * a2 + 4);
}
