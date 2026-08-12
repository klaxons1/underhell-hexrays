int __thiscall sub_10188DD0(_BYTE *this, int a2)
{
  int result; // eax

  if ( (_BYTE)a2 && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*((_DWORD *)this - 63) + 128))(this - 252) )
    this[28] = 0;
  result = (*(int (__thiscall **)(_BYTE *, int))(*((_DWORD *)this - 63) + 124))(this - 252, a2);
  if ( !(_BYTE)a2 )
  {
    if ( this[28] )
      return (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104453A8 + 8))(
               dword_104453A8,
               "scores",
               0);
  }
  return result;
}
