int __thiscall sub_100F1730(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int i; // esi

  result = 17 * a2;
  this[17 * a2 + 37] = a3;
  for ( i = this[1502]; i; i = *(_DWORD *)(i + 5980) )
    result = sub_100F1730(a2, a3);
  return result;
}
