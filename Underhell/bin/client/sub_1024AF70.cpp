int __usercall sub_1024AF70@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int v4; // ecx

  v4 = a1[54];
  *a1 = &vgui::Label::`vftable';
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 24))(v4, 1);
  sub_10034930(a1[68]);
  sub_10034930(a1[69]);
  sub_1011A810(a1 + 55);
  return sub_10240430((int)a1, a2, a3);
}
