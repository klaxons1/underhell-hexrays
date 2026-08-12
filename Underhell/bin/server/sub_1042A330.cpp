_DWORD *__thiscall sub_1042A330(_DWORD *this, int a2)
{
  int v3; // eax

  *this = -1;
  this[6] = 0;
  this[5] = 0;
  this[7] = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_WORD *)this + 8) = 0;
  *((_WORD *)this + 9) = 0;
  v3 = KeyValuesSystem();
  *this = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 12))(v3, a2, 1);
  return this;
}
