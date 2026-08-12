int __usercall sub_101745A0@<eax>(int a1@<eax>, float *a2@<ebx>, float *a3@<edi>, int a4, float a5, int a6)
{
  int result; // eax
  int v8; // eax
  int v9; // esi
  char *Src; // [esp+8h] [ebp-4h]

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      if ( a1 && (v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a1)) != 0 )
        Src = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v8);
      else
        Src = (char *)Locale;
      if ( sub_10229D00(32) )
        v9 = sub_10229D20("TempEntity");
      else
        v9 = 0;
      sub_1022ACA0("te", 13);
      sub_1022ABA0("name", "TE_SpriteSpray");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *a2);
      sub_1022ACC0("originy", a2[1]);
      sub_1022ACC0("originz", a2[2]);
      sub_1022ACC0("directionx", *a3);
      sub_1022ACC0("directiony", a3[1]);
      sub_1022ACC0("directionz", a3[2]);
      sub_1022ABA0("model", Src);
      sub_1022ACA0("speed", a4);
      sub_1022ACC0("noise", a5);
      sub_1022ACA0("count", a6);
      sub_101BC9C0(0, v9);
      return sub_1022AF00(v9);
    }
  }
  return result;
}
