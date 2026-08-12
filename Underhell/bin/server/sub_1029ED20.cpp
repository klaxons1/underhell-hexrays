bool __thiscall sub_1029ED20(_DWORD **this)
{
  int v2; // esi

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v2 = sub_10261B20();
  else
    v2 = 0;
  return (*(int (__thiscall **)(_DWORD *, int))(*this[1] + 1080))(this[1], v2) == 1
      || (*(int (__thiscall **)(_DWORD *, int))(*this[1] + 1080))(this[1], v2) == 2;
}
