int __usercall sub_10167140@<eax>(
        int a1@<eax>,
        float *a2@<ebx>,
        float *a3@<edi>,
        float *a4,
        float *a5,
        int a6,
        int a7,
        float a8,
        int a9)
{
  int result; // eax
  int v11; // eax
  int v12; // esi
  char *Src; // [esp+8h] [ebp-4h]

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      if ( a1 && (v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a1)) != 0 )
        Src = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v11);
      else
        Src = (char *)Locale;
      if ( sub_10229D00(32) )
        v12 = sub_10229D20("TempEntity");
      else
        v12 = 0;
      sub_1022ACA0("te", 9);
      sub_1022ABA0("name", "TE_BreakModel");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *a4);
      sub_1022ACC0("originy", a4[1]);
      sub_1022ACC0("originz", a4[2]);
      sub_1022ACC0("anglesx", *a5);
      sub_1022ACC0("anglesy", a5[1]);
      sub_1022ACC0("anglesz", a5[2]);
      sub_1022ACC0("sizex", *a2);
      sub_1022ACC0("sizey", a2[1]);
      sub_1022ACC0("sizez", a2[2]);
      sub_1022ACC0("velx", *a3);
      sub_1022ACC0("vely", a3[1]);
      sub_1022ACC0("velz", a3[2]);
      sub_1022ABA0("model", Src);
      sub_1022ACA0("randomization", a6);
      sub_1022ACA0("count", a7);
      sub_1022ACC0("duration", a8);
      sub_1022ACA0("flags", a9);
      sub_101BC9C0(0, v12);
      return sub_1022AF00(v12);
    }
  }
  return result;
}
