int __thiscall sub_1025D420(int this)
{
  int result; // eax

  *(_BYTE *)(this + 32) |= 4u;
  result = *(_DWORD *)(this + 28) + (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
  *(_DWORD *)(this + 24) = result;
  return result;
}
