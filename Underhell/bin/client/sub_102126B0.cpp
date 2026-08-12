int __thiscall sub_102126B0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int result; // eax

  v3 = this[13];
  if ( v3 <= 2 )
  {
    result = v3 < 0 ? 0 : v3;
    this[13] = result;
  }
  else
  {
    result = 2;
    this[13] = 2;
  }
  return result;
}
