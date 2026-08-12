__int16 *__thiscall sub_1042F670(_DWORD *this, __int16 *a2, int a3)
{
  __int16 *result; // eax

  if ( a3 )
  {
    this[8] = a3;
    a3 = -1;
    *a2 = sub_1042EE90((int)this, (unsigned __int16 *)&a3);
    return a2;
  }
  else
  {
    result = a2;
    *a2 = -1;
  }
  return result;
}
