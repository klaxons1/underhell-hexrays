_DWORD *__thiscall sub_101FFC90(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  if ( a2[6] == 5 )
  {
    result = (_DWORD *)a2[2];
    if ( (unsigned int)result > 5 )
      return result;
  }
  else
  {
    result = 0;
  }
  a2 = result;
  return sub_10031670(this + 212, &a2);
}
