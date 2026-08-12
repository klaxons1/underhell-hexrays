int __thiscall sub_10030ED0(unsigned __int16 *this, int a2)
{
  int v2; // eax
  int v3; // edx

  v2 = this[3] + a2;
  v3 = this[2];
  if ( v2 >= v3 )
    v2 -= v3;
  return *(_DWORD *)this + 36 * v2;
}
