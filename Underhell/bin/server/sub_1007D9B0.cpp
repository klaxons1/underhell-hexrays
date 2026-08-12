_DWORD *__thiscall sub_1007D9B0(_DWORD *this)
{
  int v2; // eax

  v2 = sub_10184390(4);
  if ( v2 )
    *this = sub_10244D70(v2);
  else
    *this = 0;
  this[1] = 1000000000;
  return this;
}
