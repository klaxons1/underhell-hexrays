void __thiscall sub_101B08D0(_BYTE *this, int a2)
{
  int v3; // eax
  int v4; // eax

  if ( *(_DWORD *)(a2 + 24) && *(_DWORD *)(a2 + 28) )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 24) + 68))(*(_DWORD *)(a2 + 24));
    if ( v3 )
      ((void (__thiscall *)(int (__stdcall ***)(int, int), _BYTE *, int))**off_1061BE1C)(off_1061BE1C, this, v3);
    v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 28) + 68))(*(_DWORD *)(a2 + 28));
    if ( v4 )
      ((void (__thiscall *)(int (__stdcall ***)(int, int), _BYTE *, int))**off_1061BE1C)(off_1061BE1C, this, v4);
  }
  if ( (this[248] & 1) != 0 )
    sub_101DAA50(*(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 28));
}
