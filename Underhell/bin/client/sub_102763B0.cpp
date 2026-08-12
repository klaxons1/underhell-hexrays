_DWORD *__userpurge sub_102763B0@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4)
{
  int v5; // ecx
  void *v6; // ecx

  v5 = a1[64];
  *a1 = &vgui::TreeNode::`vftable';
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 24))(v5, 1);
  v6 = (void *)a1[54];
  if ( v6 )
    sub_1022AF00(v6);
  sub_1011A810(a1 + 55);
  sub_10240430((int)a1, a2, a3);
  if ( (a4 & 1) != 0 )
    sub_10034930((int)a1);
  return a1;
}
