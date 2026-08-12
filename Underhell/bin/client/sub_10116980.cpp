int __thiscall sub_10116980(_DWORD *this)
{
  int result; // eax

  result = this[8];
  if ( result )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_10413188 + 4) + 12))(dword_10413188 + 4, result);
  this[8] = 0;
  return result;
}
