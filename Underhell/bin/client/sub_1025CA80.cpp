int __usercall sub_1025CA80@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int v4; // ecx

  v4 = a1[94];
  *a1 = &vgui::CheckButton::`vftable';
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 24))(v4, 1);
  return sub_1025AD60(a1, a2, a3);
}
