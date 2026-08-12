_DWORD *__usercall sub_101AD580@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>)
{
  int v3; // eax
  _DWORD *v4; // esi
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax

  v3 = sub_100422D0();
  v4 = (_DWORD *)v3;
  if ( v3
    && (v5 = *(_DWORD *)(v3 + 4128), v5 != -1)
    && *((_DWORD *)off_103DCD74 + 4 * (v4[1032] & 0xFFF) + 2) == v5 >> 12
    && (v6 = *((_DWORD *)off_103DCD74 + 4 * (v4[1032] & 0xFFF) + 1)) != 0
    && (v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 332))(v6)) != 0 )
  {
    return sub_101AD3F0(a1, (int)v4, v7);
  }
  else
  {
    return sub_101AD160(a1, a2, v4);
  }
}
