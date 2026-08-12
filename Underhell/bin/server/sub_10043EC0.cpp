int __thiscall sub_10043EC0(_DWORD *this)
{
  int v1; // eax
  int v2; // ecx

  v1 = this[533];
  v2 = this[531];
  if ( v2 && v1 >= 0 && v1 < *(_DWORD *)(v2 + 8) )
    return *(_DWORD *)(v2 + 4) + 8 * v1;
  else
    return 0;
}
