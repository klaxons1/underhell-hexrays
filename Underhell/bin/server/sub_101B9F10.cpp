int *__thiscall sub_101B9F10(_DWORD *this)
{
  int v1; // edi
  int *result; // eax

  sub_101B9240(this);
  result = sub_101B9330((signed __int32)&dword_106B9EC0);
  v1 = 0;
  if ( (int)this[85] <= 0 )
  {
    this[85] = 0;
  }
  else
  {
    do
      result = (int *)sub_1025FA50(*(_DWORD *)(this[82] + 4 * v1++));
    while ( v1 < this[85] );
    this[85] = 0;
  }
  return result;
}
