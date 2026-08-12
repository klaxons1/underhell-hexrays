char __userpurge sub_101B2600@<al>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v4 = *(_DWORD *)(a1 + 248) >> 4;
  if ( (*(_DWORD *)(a1 + 248) & 0x10) != 0 )
    LOBYTE(v4) = sub_101B1470(a1, a2);
  if ( *(_DWORD *)(a1 + 800) )
  {
    v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 800) + 20))(*(_DWORD *)(a1 + 800));
    if ( v4 )
    {
      v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 800) + 24))(*(_DWORD *)(a1 + 800));
      if ( v4 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 800) + 4))(*(_DWORD *)(a1 + 800));
        v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 800) + 20))(*(_DWORD *)(a1 + 800));
        (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5);
        v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 800) + 24))(*(_DWORD *)(a1 + 800));
        LOBYTE(v4) = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 96))(v6);
      }
    }
  }
  return v4;
}
