int __thiscall sub_1003C7D0(int this)
{
  unsigned int v2; // eax
  int v3; // ebx
  int result; // eax
  int v5; // edi

  sub_1000F6C0(this, 7);
  v2 = *(_DWORD *)(this + 324);
  if ( v2 != -1
    && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) == v2 >> 12
    && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 1) )
  {
    sub_1003C5D0((_DWORD *)this);
  }
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, *(__int16 *)(this + 132));
  result = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4);
  if ( result != v3 )
  {
    v5 = dword_1047CA8C;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
    sub_1003B5B0((_WORD *)this, *(_WORD *)(this + 132));
    return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  }
  return result;
}
