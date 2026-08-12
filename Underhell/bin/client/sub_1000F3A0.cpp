int __thiscall sub_1000F3A0(_DWORD *this, int a2, float a3)
{
  int result; // eax

  if ( -1.0 == a3 )
    result = -1;
  else
    result = (int)(a3 / *((float *)off_103DC81C + 7) + 0.5);
  if ( a2 >= 0 )
    *(_DWORD *)(this[49] + 32 * a2 + 24) = result;
  else
    this[32] = result;
  return result;
}
