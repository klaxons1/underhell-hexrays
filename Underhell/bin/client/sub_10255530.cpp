int __usercall sub_10255530@<eax>(int *a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int v4; // ecx
  int v5; // ecx

  v4 = a1[98];
  *a1 = (int)&vgui::TextEntry::`vftable';
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 120))(v4, 1);
  v5 = a1[230];
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 120))(v5, 1);
  sub_1011A810(a1 + 65);
  sub_1011A810(a1 + 60);
  sub_1011A810(a1 + 55);
  return sub_10240430((int)a1, a2, a3);
}
