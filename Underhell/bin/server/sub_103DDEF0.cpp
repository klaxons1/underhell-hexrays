int __thiscall sub_103DDEF0(_DWORD *this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
    result = *(_DWORD *)(a2 + 8);
  else
    result = 0;
  this[230] = result;
  if ( *(_DWORD *)(dword_106EDBC4 + 48) )
    return DevMsg(1, "%.2f INPUT: Next Blend mode set to %d\n", *(float *)(dword_106B31C8 + 12), result);
  return result;
}
