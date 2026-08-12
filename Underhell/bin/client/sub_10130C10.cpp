_DWORD *__thiscall sub_10130C10(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *result; // eax

  v3 = (_DWORD *)sub_100DDA40(208);
  if ( v3 )
  {
    result = sub_10130B30(v3, a2);
    this[1] = result;
  }
  else
  {
    result = 0;
    this[1] = 0;
  }
  return result;
}
