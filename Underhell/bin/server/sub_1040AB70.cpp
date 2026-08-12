int __thiscall sub_1040AB70(_DWORD *this)
{
  int result; // eax

  result = this[427];
  if ( result )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, result);
    this[427] = 0;
  }
  return result;
}
