int __usercall sub_1025AD60@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  void *v4; // ecx

  v4 = (void *)a1[75];
  *a1 = &vgui::Button::`vftable';
  if ( v4 )
    sub_1022AF00(v4);
  return sub_1024AF70(a1, a2, a3);
}
