_DWORD *__thiscall sub_100B2200(_DWORD *this, const char *a2)
{
  _DWORD *v3; // eax
  _DWORD *result; // eax

  v3 = (_DWORD *)sub_10184390(136);
  if ( v3 )
    result = sub_100B1FF0(v3, a2);
  else
    result = 0;
  if ( a2 )
  {
    *result = *this;
    *this = result;
  }
  else
  {
    *result = 0;
  }
  return result;
}
