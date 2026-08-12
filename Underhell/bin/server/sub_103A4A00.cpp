int __thiscall sub_103A4A00(_DWORD *this, int a2)
{
  int result; // eax

  if ( !*((_BYTE *)this + 3968) )
    return sub_1002CC40(this, a2);
  result = 71;
  if ( a2 != 71 )
    return *((_BYTE *)this + 3969) != 0 ? 76 : 1;
  return result;
}
