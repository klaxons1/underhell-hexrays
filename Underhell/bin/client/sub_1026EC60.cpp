int __usercall sub_1026EC60@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  void *v7; // ecx
  int v8; // ecx

  v4 = a1[93];
  *a1 = &vgui::MenuItem::`vftable';
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 120))(v4, 1);
  v5 = a1[95];
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 24))(v5, 1);
  v6 = a1[96];
  if ( v6 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 24))(v6, 1);
  v7 = (void *)a1[99];
  if ( v7 )
    sub_1022AF00(v7);
  v8 = a1[98];
  if ( v8 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 24))(v8, 1);
  return sub_1025AD60(a1, a2, a3);
}
