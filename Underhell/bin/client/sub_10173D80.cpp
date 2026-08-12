int __usercall sub_10173D80@<eax>(float *a1@<ebx>, float *a2@<edi>, int a3, int a4)
{
  int result; // eax
  int v5; // esi

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
      sub_1022ACA0("te", 7);
      sub_1022ABA0("name", "TE_Sparks");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *a1);
      sub_1022ACC0("originy", a1[1]);
      sub_1022ACC0("originz", a1[2]);
      sub_1022ACC0("directionx", *a2);
      sub_1022ACC0("directiony", a2[1]);
      sub_1022ACC0("directionz", a2[2]);
      sub_1022ACA0("magnitude", a3);
      sub_1022ACA0("traillength", a4);
      sub_101BC9C0(0, v5);
      return sub_1022AF00(v5);
    }
  }
  return result;
}
