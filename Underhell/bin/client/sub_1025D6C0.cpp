int __thiscall sub_1025D6C0(_BYTE *this)
{
  int result; // eax
  int v3; // eax

  result = sub_10237C80(dword_103FD3B0);
  if ( result )
  {
    v3 = sub_10237C80(dword_103FD3B0);
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 124))(v3, 0);
  }
  this[32] = this[32] & 0xFA | 4;
  return result;
}
