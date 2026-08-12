int __thiscall sub_10250E90(int this)
{
  int result; // eax

  *(_BYTE *)(this + 292) = 0;
  result = *(_DWORD *)(this + 308) + (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
  *(_DWORD *)(this + 304) = result;
  return result;
}
