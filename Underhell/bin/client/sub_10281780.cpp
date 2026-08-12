int __usercall sub_10281780@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>)
{
  int v3; // eax
  void *v4; // ecx
  void *v5; // ecx

  v3 = a1[118];
  *a1 = &vgui::BuildModeDialog::`vftable';
  sub_1022AF00(*(void **)(v3 + 20));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1[118] + 24) + 784))(*(_DWORD *)(a1[118] + 24));
  v4 = (void *)a1[127];
  if ( v4 )
    sub_1022AF00(v4);
  v5 = (void *)a1[128];
  if ( v5 )
    sub_1022AF00(v5);
  return sub_1024D540(a1, a2);
}
