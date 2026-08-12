int __usercall sub_10173AD0@<eax>(float *a1@<edi>, float a2, int a3)
{
  int result; // eax
  int v4; // esi

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      if ( sub_10229D00(32) )
        v4 = sub_10229D20("TempEntity");
      else
        v4 = 0;
      sub_1022ACA0("te", 6);
      sub_1022ABA0("name", "TE_Smoke");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *a1);
      sub_1022ACC0("originy", a1[1]);
      sub_1022ACC0("originz", a1[2]);
      sub_1022ACC0("scale", a2);
      sub_1022ACA0("framerate", a3);
      sub_101BC9C0(0, v4);
      return sub_1022AF00(v4);
    }
  }
  return result;
}
