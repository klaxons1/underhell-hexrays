int __usercall sub_10173490@<eax>(float *a1@<edi>, float *a2, float a3, int a4)
{
  int result; // eax
  int v5; // esi
  void *v6; // eax

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      if ( sub_10229D00(32) )
        v5 = sub_10229D20("TempEntity");
      else
        v5 = 0;
      sub_1022ACA0("te", 18);
      sub_1022ABA0("name", "TE_ProjectDecal");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *a2);
      sub_1022ACC0("originy", a2[1]);
      sub_1022ACC0("originz", a2[2]);
      sub_1022ACC0("anglesx", *a1);
      sub_1022ACC0("anglesy", a1[1]);
      sub_1022ACC0("anglesz", a1[2]);
      sub_1022ACC0("distance", a3);
      v6 = (void *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413164 + 28))(dword_10413164, a4);
      sub_1022ABA0("decalname", v6);
      sub_101BC9C0(0, v5);
      return sub_1022AF00(v5);
    }
  }
  return result;
}
