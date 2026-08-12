int *__thiscall sub_1025E0F0(_DWORD *this, _DWORD *a2)
{
  int *result; // eax
  const char *v4; // esi

  result = sub_1023B220(this, a2);
  v4 = (const char *)this[60];
  if ( v4 )
    return sub_1022ABA0(a2, "image", v4);
  return result;
}
