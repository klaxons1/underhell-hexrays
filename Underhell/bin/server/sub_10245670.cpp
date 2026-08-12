int __thiscall sub_10245670(char *this, int a2)
{
  int v3; // eax
  int *v5; // eax
  int v6; // eax

  v3 = *((_DWORD *)this + 1);
  if ( !v3 )
    return *(_DWORD *)this + *(_DWORD *)(*(_DWORD *)this + 304) + 20 * a2;
  v5 = (int *)(*(_DWORD *)(v3 + 68) + 8 * a2);
  if ( !*v5 )
    return *(_DWORD *)this + *(_DWORD *)(*(_DWORD *)this + 304) + 20 * v5[1];
  v6 = sub_10245350(this, *v5);
  return v6 + *(_DWORD *)(v6 + 304) + 20 * *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 68) + 8 * a2 + 4);
}
