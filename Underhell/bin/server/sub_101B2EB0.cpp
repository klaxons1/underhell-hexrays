void __thiscall sub_101B2EB0(_BYTE *this, int a2)
{
  int v3; // edi
  int v4; // edi

  if ( *(_DWORD *)(a2 + 24) )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 24) + 68))(*(_DWORD *)(a2 + 24));
    if ( v3 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 24) + 4))(*(_DWORD *)(a2 + 24)) )
        sub_101C84D0(this, v3);
    }
  }
  if ( *(_DWORD *)(a2 + 28) )
  {
    v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 28) + 68))(*(_DWORD *)(a2 + 28));
    if ( v4 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 28) + 4))(*(_DWORD *)(a2 + 28)) )
        sub_101C84D0(this, v4);
    }
  }
  sub_101B08D0(this, a2);
}
