int __usercall sub_1027CB00@<eax>(int *a1@<ecx>, int a2@<ebp>)
{
  _DWORD *v3; // esi
  _DWORD *v4; // esi

  *a1 = (int)&vgui::SectionedListPanel::`vftable';
  sub_1011A810(a1 + 76);
  v3 = a1 + 67;
  sub_1026C690(a1 + 67);
  if ( a1[69] >= 0 )
  {
    if ( *v3 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v3);
      *v3 = 0;
    }
    a1[68] = 0;
  }
  v4 = a1 + 58;
  sub_1026C690(a1 + 58);
  if ( a1[60] >= 0 )
  {
    if ( *v4 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v4);
      *v4 = 0;
    }
    a1[59] = 0;
  }
  sub_1027C7E0(a1 + 53);
  return sub_10240430((int)a1, a2, (int)a1);
}
