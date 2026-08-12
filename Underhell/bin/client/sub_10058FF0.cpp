int __thiscall sub_10058FF0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int i; // esi

  result = 17 * a2;
  this[17 * a2 + 38] = a3;
  for ( i = this[1502]; i; i = *(_DWORD *)(i + 5980) )
    result = sub_10058FF0(a2, a3);
  return result;
}
