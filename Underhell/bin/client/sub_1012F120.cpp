int *__thiscall sub_1012F120(_DWORD *this, int a2)
{
  int *v3; // eax
  int *result; // eax

  v3 = (int *)sub_100DDA40(564);
  if ( v3 )
  {
    result = sub_1012EDC0(v3, a2);
    this[1] = result;
  }
  else
  {
    result = 0;
    this[1] = 0;
  }
  return result;
}
