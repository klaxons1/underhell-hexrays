int __usercall sub_10174130@<eax>(int a1@<eax>, float *a2@<edi>, float a3, int a4)
{
  int result; // eax
  int v6; // eax
  char *v7; // ebx
  int v8; // esi

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      if ( a1 && (v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a1)) != 0 )
        v7 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v6);
      else
        v7 = (char *)Locale;
      if ( sub_10229D00(32) )
        v8 = sub_10229D20("TempEntity");
      else
        v8 = 0;
      sub_1022ACA0("te", 12);
      sub_1022ABA0("name", "TE_Sprite");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *a2);
      sub_1022ACC0("originy", a2[1]);
      sub_1022ACC0("originz", a2[2]);
      sub_1022ABA0("model", v7);
      sub_1022ACC0("scale", a3);
      sub_1022ACA0("brightness", a4);
      sub_101BC9C0(0, v8);
      return sub_1022AF00(v8);
    }
  }
  return result;
}
