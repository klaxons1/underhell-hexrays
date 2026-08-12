_DWORD *__userpurge sub_10271A50@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4)
{
  int v5; // ecx

  v5 = a1[94];
  *a1 = &vgui::RadioButton::`vftable';
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 24))(v5, 1);
  sub_1025AD60(a1, a2, a3);
  if ( (a4 & 1) != 0 )
    sub_10034930((int)a1);
  return a1;
}
