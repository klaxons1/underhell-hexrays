char *__thiscall sub_1027CDB0(_DWORD *this, _BYTE *a2, int a3)
{
  int v3; // eax
  char *v4; // eax
  char *result; // eax

  v3 = this[11];
  if ( v3 == -1 )
    return (char *)(*(int (__thiscall **)(_DWORD *, _BYTE *, int))(*this + 116))(this, a2, a3);
  v4 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA78 + 36))(dword_1047CA78, v3);
  *a2 = 35;
  result = sub_102282F0(a2 + 1, v4, a3 - 1);
  a2[a3 - 1] = 0;
  return result;
}
