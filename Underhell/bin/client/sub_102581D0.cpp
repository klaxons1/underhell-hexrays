int __thiscall sub_102581D0(_DWORD *this, int a2)
{
  int v2; // eax
  int i; // edx
  int result; // eax

  v2 = 0;
  for ( i = 0; i >= 0 && v2 < this[69] && *(_DWORD *)(this[66] + i + 28) <= a2; i += 32 )
    ++v2;
  result = v2 - 1;
  if ( result < 0 || result >= this[69] )
    return 0;
  return result;
}
