int __thiscall sub_10068620(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this[363];
  if ( *(_DWORD *)v2 )
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v2 + 64) + 4 * a2);
  else
    return 0;
}
