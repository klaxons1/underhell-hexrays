int *__thiscall sub_10257800(int this, _DWORD *a2)
{
  unsigned __int8 v3; // al
  int *result; // eax
  const char *v5; // esi

  sub_1023B220((_DWORD *)this, a2);
  sub_1022ACA0(a2, "maxchars", *(_DWORD *)(this + 316));
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 212) + 128))(*(_DWORD *)(this + 212));
  result = sub_1022ACA0(a2, "scrollbar", v3);
  v5 = *(const char **)(this + 384);
  if ( v5 )
    return sub_1022ABA0(a2, "text", v5);
  return result;
}
