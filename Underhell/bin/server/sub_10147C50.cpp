int __thiscall sub_10147C50(_DWORD *this, int a2)
{
  BOOL v2; // edx

  v2 = this[203] != 1;
  this[203] = v2;
  return (*(int (__thiscall **)(int, _DWORD, BOOL))(*(_DWORD *)dword_106B31D0 + 240))(dword_106B31D0, this[200], v2);
}
