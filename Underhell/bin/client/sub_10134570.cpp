int __thiscall sub_10134570(_DWORD *this, int a2)
{
  int v3; // eax
  int result; // eax

  v3 = sub_100DDA40(57772);
  if ( v3 )
  {
    result = sub_10134320(v3, a2);
    this[1] = result;
  }
  else
  {
    result = 0;
    this[1] = 0;
  }
  return result;
}
