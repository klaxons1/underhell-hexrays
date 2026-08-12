int *__thiscall sub_10270C70(int this, _DWORD *a2)
{
  int *result; // eax
  const char *v4; // esi

  sub_1023B220((_DWORD *)this, a2);
  result = sub_1022ACC0(a2, "progress", *(float *)(this + 216));
  v4 = *(const char **)(this + 236);
  if ( v4 )
    return sub_1022ABA0(a2, "variable", v4);
  return result;
}
