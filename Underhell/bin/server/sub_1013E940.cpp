char __thiscall sub_1013E940(_DWORD *this, int a2)
{
  int v2; // eax
  char result; // al

  v2 = this[7];
  if ( v2 >= this[6] )
    return 0;
  *(_DWORD *)(this[5] + 4 * v2) = a2;
  result = 1;
  ++this[7];
  return result;
}
