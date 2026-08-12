_DWORD *__thiscall sub_100B8E60(_DWORD *this, int a2, char a3, int a4, int a5, char a6)
{
  sub_10265570(a4, a5);
  this[3] = a2;
  *this = &CTraceFilterNav::`vftable';
  *((_BYTE *)this + 16) = a3;
  *((_BYTE *)this + 18) = a6;
  *((_BYTE *)this + 17) = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFFC + 20))(dword_106BAFFC, a2);
  return this;
}
