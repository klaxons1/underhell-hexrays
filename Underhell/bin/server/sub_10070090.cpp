int __thiscall sub_10070090(_DWORD *this)
{
  int v1; // eax

  v1 = this[205];
  if ( v1 < 0 || v1 >= *(_DWORD *)(dword_106935D8 + 4) )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * v1);
}
