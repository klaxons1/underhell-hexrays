int __usercall sub_1016AED0@<eax>(int a1@<eax>, float *a2@<edi>, float a3, float a4, int a5)
{
  int result; // eax
  int v7; // eax
  char *v8; // ebx
  int v9; // esi

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      if ( a1 && (v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a1)) != 0 )
        v8 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v7);
      else
        v8 = (char *)Locale;
      if ( sub_10229D00(32) )
        v9 = sub_10229D20("TempEntity");
      else
        v9 = 0;
      sub_1022ACA0("te", 10);
      sub_1022ABA0("name", "TE_GlowSprite");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *a2);
      sub_1022ACC0("originy", a2[1]);
      sub_1022ACC0("originz", a2[2]);
      sub_1022ABA0("model", v8);
      sub_1022ACC0("duration", a3);
      sub_1022ACC0("size", a4);
      sub_1022ACA0("brightness", a5);
      sub_101BC9C0(0, v9);
      return sub_1022AF00(v9);
    }
  }
  return result;
}
