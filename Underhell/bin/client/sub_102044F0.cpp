int __thiscall sub_102044F0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int result; // eax

  v3 = this[12];
  if ( v3 >= 0 && v3 > this[11] )
  {
    v4 = this[11];
    this[11] = this[12];
    this[12] = v4;
  }
  if ( (int)this[14] < 0 )
    this[14] = 0x7FFFFFFF;
  v5 = this[16];
  if ( v5 <= 2 )
  {
    result = v5 < 0 ? 0 : v5;
    this[16] = result;
  }
  else
  {
    result = 2;
    this[16] = 2;
  }
  return result;
}
