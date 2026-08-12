int __usercall sub_102767A0@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  int v3; // esi
  _DWORD *v4; // esi

  v3 = *(_DWORD *)(a1 + 260);
  *(_DWORD *)a1 = &vgui::TreeView::`vftable';
  if ( v3 )
  {
    if ( (*(_BYTE *)(a1 + 208) & 4) != 0 )
    {
      sub_10279030(v3);
      sub_10034930(v3);
    }
    *(_DWORD *)(a1 + 260) = 0;
  }
  sub_1011A810((int *)(a1 + 276));
  v4 = (_DWORD *)(a1 + 212);
  sub_1026C690((_DWORD *)(a1 + 212));
  if ( *(int *)(a1 + 220) >= 0 )
  {
    if ( *v4 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v4);
      *v4 = 0;
    }
    *(_DWORD *)(a1 + 216) = 0;
  }
  return sub_10240430(a1, a2, a1);
}
