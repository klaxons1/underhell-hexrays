int __usercall sub_10166A60@<eax>(
        int a1@<ecx>,
        float *a2@<ebx>,
        float *a3@<edi>,
        char a4,
        char a5,
        char a6,
        char a7,
        int a8)
{
  int result; // eax
  int v9; // esi
  int v10; // [esp+8h] [ebp-4h]

  result = sub_101BC880(a1);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      LOBYTE(v10) = a4;
      BYTE1(v10) = a5;
      BYTE2(v10) = a6;
      HIBYTE(v10) = a7;
      if ( sub_10229D00(32) )
        v9 = sub_10229D20("TempEntity");
      else
        v9 = 0;
      sub_1022ACA0("te", 15);
      sub_1022ABA0("name", "TE_BloodStream");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *a2);
      sub_1022ACC0("originy", a2[1]);
      sub_1022ACC0("originz", a2[2]);
      sub_1022ACC0("directionx", *a3);
      sub_1022ACC0("directiony", a3[1]);
      sub_1022ACC0("directionz", a3[2]);
      sub_1022AB60("color", v10);
      sub_1022ACA0("amount", a8);
      sub_101BC9C0(0, v9);
      return sub_1022AF00(v9);
    }
  }
  return result;
}
