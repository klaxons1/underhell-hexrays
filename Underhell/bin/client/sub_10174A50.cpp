int __usercall sub_10174A50@<eax>(float *a1@<edi>, int a2)
{
  int result; // eax
  int v3; // esi
  void *v4; // eax

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      if ( sub_10229D00(32) )
        v3 = sub_10229D20("TempEntity");
      else
        v3 = 0;
      sub_1022ACA0("te", 1);
      sub_1022ABA0("name", "TE_WorldDecal");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *a1);
      sub_1022ACC0("originy", a1[1]);
      sub_1022ACC0("originz", a1[2]);
      v4 = (void *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413164 + 28))(dword_10413164, a2);
      sub_1022ABA0("decalname", v4);
      sub_101BC9C0(0, v3);
      return sub_1022AF00(v3);
    }
  }
  return result;
}
