int __stdcall sub_101B9DC0(int (__thiscall ***a1)(_DWORD), int a2)
{
  int (__thiscall ***v2)(_DWORD); // esi
  int v3; // eax
  void *v5; // edi
  int v6; // ebx
  unsigned __int16 *v7; // eax
  void *v8; // edi
  int v9; // ebx
  unsigned __int16 *v10; // eax

  v2 = a1;
  v3 = (**a1)(a1);
  sub_1009C060(off_103DCD78, (int *)&a1, v3);
  if ( *(_WORD *)(*v2)[8](v2) == 0xFFFF )
    return (*(int (__thiscall **)(void *, int (__thiscall ***)(_DWORD), int))(*(_DWORD *)off_103DCDDC + 16))(
             off_103DCDDC,
             v2,
             a2);
  v5 = off_103DCDDC;
  v6 = *(_DWORD *)off_103DCDDC;
  v7 = (unsigned __int16 *)(*v2)[8](v2);
  (*(void (__thiscall **)(void *, _DWORD, int))(v6 + 52))(v5, *v7, a2);
  v8 = off_103DCDDC;
  v9 = *(_DWORD *)off_103DCDDC;
  v10 = (unsigned __int16 *)(*v2)[8](v2);
  return (*(int (__thiscall **)(void *, _DWORD))(v9 + 48))(v8, *v10);
}
