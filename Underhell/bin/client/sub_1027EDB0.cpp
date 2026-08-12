_DWORD *__userpurge sub_1027EDB0@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4)
{
  int v5; // edx

  v5 = a1[53];
  *a1 = &vgui::HTML::`vftable';
  a1[51] = &vgui::HTML::`vftable';
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 108))(dword_1047CA6C, v5);
  sub_1011A810(a1 + 69);
  sub_10240430((int)a1, a2, a3);
  if ( (a4 & 1) != 0 )
    sub_10034930((int)a1);
  return a1;
}
