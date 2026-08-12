int __usercall sub_10258CC0@<eax>(int *a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int v4; // ecx
  int v6; // [esp-4h] [ebp-8h]

  v6 = a1[96];
  *a1 = (int)&vgui::RichText::`vftable';
  sub_10034930(v6);
  v4 = a1[95];
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 120))(v4, 1);
  sub_1011A810(a1 + 85);
  sub_1011A810(a1 + 66);
  sub_1011A810(a1 + 61);
  sub_1011A810(a1 + 56);
  return sub_10240430((int)a1, a2, a3);
}
