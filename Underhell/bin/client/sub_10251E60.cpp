int __thiscall sub_10251E60(int this)
{
  int v3; // edi

  if ( *(_BYTE *)(this + 341) )
    return 1;
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, *(_DWORD *)(this + 332));
  return sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this) / 2 - v3 / 2;
}
