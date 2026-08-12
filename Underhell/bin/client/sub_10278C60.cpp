int *__thiscall sub_10278C60(_DWORD *this, _DWORD *a2)
{
  int *result; // eax
  const char *v4; // esi

  result = sub_10249DD0((int)this, a2);
  v4 = (const char *)this[72];
  if ( v4 )
    return sub_1022ABA0(a2, "URLText", v4);
  return result;
}
