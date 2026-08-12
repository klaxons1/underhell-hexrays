_DWORD *__stdcall sub_10272400(int a1)
{
  int v1; // eax
  _DWORD *v2; // ecx
  _DWORD *result; // eax

  v1 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1);
  v2 = (_DWORD *)((char *)&unk_106CF8DC + 4 * v1);
  dword_106CF894[(v1 - 1) >> 5] |= 1 << ((v1 - 1) & 0x1F);
  if ( v2 )
    *v2 = 0;
  result = (_DWORD *)((char *)&unk_106CF924 + 4 * v1);
  if ( result )
    *result = 0;
  return result;
}
