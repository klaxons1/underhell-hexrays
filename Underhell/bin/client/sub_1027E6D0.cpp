int __thiscall sub_1027E6D0(_DWORD *this)
{
  char *v1; // esi
  int result; // eax

  v1 = (char *)(this - 51);
  result = (*(int (__thiscall **)(_DWORD *))(*(this - 51) + 128))(this - 51);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 7);
    if ( !(_BYTE)result )
      return (*(int (__thiscall **)(char *, int))(*(_DWORD *)v1 + 232))(v1, 2);
  }
  return result;
}
