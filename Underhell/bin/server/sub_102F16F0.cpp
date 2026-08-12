void __usercall sub_102F16F0(_DWORD *a1@<ecx>, int a2@<edi>)
{
  void *v3; // esi

  sub_100E8220(a2, off_106695F4[a1[426]]);
  (*(void (__thiscall **)(_DWORD *, char *))(*a1 + 104))(a1, off_106695F4[a1[426]]);
  sub_10214020((int)a1, a2);
  if ( !a1[422] )
  {
    v3 = (void *)a1[423];
    if ( v3 )
      sub_10260680(v3, 0);
  }
}
