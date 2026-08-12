_DWORD *__thiscall sub_102511C0(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // ecx
  _DWORD *result; // eax

  *a2 = this[80] + 3;
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, this[83]);
  result = a3;
  *a3 += v3 + 1;
  return result;
}
