int __usercall sub_10172A30@<eax>(
        int a1@<eax>,
        float *a2@<ebx>,
        float *a3@<edi>,
        float *a4,
        unsigned __int8 a5,
        int a6,
        int a7)
{
  int result; // eax
  int v9; // eax
  int v10; // esi
  char *Src; // [esp+8h] [ebp-4h]

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      if ( a1 && (v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a1)) != 0 )
        Src = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v9);
      else
        Src = (char *)Locale;
      if ( sub_10229D00(32) )
        v10 = sub_10229D20("TempEntity");
      else
        v10 = 0;
      sub_1022ACA0("te", 11);
      sub_1022ABA0("name", "TE_PhysicsProp");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *a4);
      sub_1022ACC0("originy", a4[1]);
      sub_1022ACC0("originz", a4[2]);
      sub_1022ACC0("anglesx", *a2);
      sub_1022ACC0("anglesy", a2[1]);
      sub_1022ACC0("anglesz", a2[2]);
      sub_1022ACC0("velx", *a3);
      sub_1022ACC0("vely", a3[1]);
      sub_1022ACC0("velz", a3[2]);
      sub_1022ABA0("model", Src);
      sub_1022ACA0("breakmodel", a5);
      sub_1022ACA0("skin", a6);
      sub_1022ACA0("effects", a7);
      sub_101BC9C0(0, v10);
      return sub_1022AF00(v10);
    }
  }
  return result;
}
