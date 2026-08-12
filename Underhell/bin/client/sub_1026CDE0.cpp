int __usercall sub_1026CDE0@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>)
{
  int v3; // ecx
  _DWORD *v4; // edi

  v3 = a1[57];
  *a1 = &vgui::Menu::`vftable';
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 120))(v3, 1);
  sub_1011A810(a1 + 82);
  sub_1011A810(a1 + 77);
  sub_1011A810(a1 + 72);
  sub_1011A810(a1 + 67);
  v4 = a1 + 58;
  sub_1026C690(a1 + 58);
  if ( (int)a1[60] >= 0 )
  {
    if ( *v4 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v4);
      *v4 = 0;
    }
    a1[59] = 0;
  }
  return sub_10240430((int)a1, a2, (int)v4);
}
