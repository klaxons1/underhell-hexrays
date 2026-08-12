int __thiscall sub_10116950(_DWORD *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)(dword_10413188 + 4) + 8))(
             dword_10413188 + 4,
             a2,
             "w",
             0);
  this[8] = result;
  return result;
}
