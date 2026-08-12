_DWORD *__thiscall sub_10025C70(_DWORD *this, int a2, int a3)
{
  int v4; // edi

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
  sub_1015B880(this);
  *this = &CPASFilter::`vftable';
  sub_1015BB70(v4);
  *this = &CPASAttenuationFilter::`vftable';
  return this;
}
