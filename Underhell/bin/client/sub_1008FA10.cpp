int __cdecl sub_1008FA10(int a1, int *a2, _BYTE *a3)
{
  int result; // eax
  int v4; // esi
  unsigned __int16 v5; // ax

  result = a1;
  if ( (unsigned __int8)*a3 != *(_DWORD *)(a1 + 4) )
  {
    *a3 = *(_BYTE *)(a1 + 4);
    *(_DWORD *)(a2[1] + 312) |= 0x4000u;
    sub_1008F420(a2);
    v4 = *(_DWORD *)off_103DD080;
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)(a2[1] + 4) + 28))(a2[1] + 4);
    return (*(int (__thiscall **)(void *, _DWORD))(v4 + 140))(off_103DD080, v5);
  }
  return result;
}
