int __thiscall sub_1005D6D0(_DWORD **this)
{
  int v2; // esi

  if ( *(int *)(dword_106B31C8 + 20) <= 1
    && (v2 = sub_10261B20()) != 0
    && (*(int (__thiscall **)(_DWORD *, int))(*this[1] + 1080))(this[1], v2) == 3 )
  {
    return v2;
  }
  else
  {
    return 0;
  }
}
