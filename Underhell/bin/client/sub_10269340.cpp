int __usercall sub_10269340@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  int v3; // ecx
  int v4; // edi
  _DWORD *v5; // edi

  *(_DWORD *)a1 = &vgui::ListViewPanel::`vftable';
  sub_10268FF0((_DWORD *)a1);
  v3 = *(_DWORD *)(a1 + 208);
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 120))(v3, 1);
  if ( *(_BYTE *)(a1 + 317) )
  {
    v4 = *(_DWORD *)(a1 + 320);
    if ( v4 )
    {
      sub_10279030(*(_DWORD *)(a1 + 320));
      sub_10034930(v4);
    }
    *(_DWORD *)(a1 + 320) = 0;
  }
  sub_1011A810((int *)(a1 + 288));
  sub_1011A810((int *)(a1 + 248));
  v5 = (_DWORD *)(a1 + 212);
  sub_1026C690(a1 + 212);
  if ( *(int *)(a1 + 220) >= 0 )
  {
    if ( *v5 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v5);
      *v5 = 0;
    }
    *(_DWORD *)(a1 + 216) = 0;
  }
  return sub_10240430(a1, a2, (int)v5);
}
