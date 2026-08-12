int __thiscall sub_1022D000(_DWORD *this, int a2)
{
  int v3; // esi
  int result; // eax

  if ( a2 <= 0 )
    v3 = 0;
  else
    v3 = a2 + 1;
  result = this[1];
  this[3] = v3;
  if ( v3 > result )
  {
    sub_1001A460(this, v3 - result);
    result = this[1];
    if ( v3 > result )
      this[3] = result;
  }
  return result;
}
