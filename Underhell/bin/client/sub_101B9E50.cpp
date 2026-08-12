int __stdcall sub_101B9E50(int a1)
{
  int v1; // eax
  int v2; // eax
  _DWORD *v3; // eax

  v1 = *(unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 32))(a1);
  if ( (_WORD)v1 != 0xFFFF )
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)off_103DCDDC + 4))(off_103DCDDC, v1);
  v2 = (**(int (__thiscall ***)(int))a1)(a1);
  v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  return sub_1009C130(off_103DCD78, *v3);
}
