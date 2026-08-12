int __thiscall sub_1021CFD0(_DWORD *this)
{
  int result; // eax

  result = this[8];
  if ( result )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(dword_106B31D8 + 4, result);
  this[8] = 0;
  return result;
}
