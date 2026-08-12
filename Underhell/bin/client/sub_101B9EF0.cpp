int __stdcall sub_101B9EF0(int a1, int a2)
{
  void *v3; // edi
  int v4; // ebx
  unsigned __int16 *v5; // eax
  void *v6; // edi
  int v7; // ebx
  unsigned __int16 *v8; // eax

  if ( *(_WORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 32))(a1) == 0xFFFF )
    return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)off_103DCDDC + 16))(off_103DCDDC, a1, a2);
  v3 = off_103DCDDC;
  v4 = *(_DWORD *)off_103DCDDC;
  v5 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 32))(a1);
  (*(void (__thiscall **)(void *, _DWORD, int))(v4 + 52))(v3, *v5, a2);
  v6 = off_103DCDDC;
  v7 = *(_DWORD *)off_103DCDDC;
  v8 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 32))(a1);
  return (*(int (__thiscall **)(void *, _DWORD))(v7 + 48))(v6, *v8);
}
