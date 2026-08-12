int __thiscall sub_10245BF0(char *this, int a2)
{
  int v3; // eax
  int v5; // eax

  v3 = *((_DWORD *)this + 1);
  if ( !v3 )
    return *(_DWORD *)this + 32 * a2 + *(_DWORD *)(*(_DWORD *)this + 324);
  v5 = sub_10245350(this, *(_DWORD *)(*(_DWORD *)(v3 + 128) + 8 * a2));
  return v5 + *(_DWORD *)(v5 + 324) + 32 * *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 128) + 8 * a2 + 4);
}
