int __usercall sub_10166430@<eax>(
        int a1@<eax>,
        int a2@<ecx>,
        float *a3,
        float *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9)
{
  int result; // eax
  int v12; // esi
  int v13; // edi
  char *v14; // ebx
  char *v15; // edi
  int v16; // esi
  int v17; // [esp+10h] [ebp-4h]

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      LOBYTE(v17) = a5;
      BYTE1(v17) = a6;
      BYTE2(v17) = a7;
      HIBYTE(v17) = a8;
      if ( a2 )
        v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a2);
      else
        v12 = 0;
      if ( a1 )
        v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a1);
      else
        v13 = 0;
      if ( v12 )
        v14 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v12);
      else
        v14 = (char *)Locale;
      if ( v13 )
        v15 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v13);
      else
        v15 = (char *)Locale;
      if ( sub_10229D00(32) )
        v16 = sub_10229D20("TempEntity");
      else
        v16 = 0;
      sub_1022ACA0("te", 8);
      sub_1022ABA0("name", "TE_BloodSprite");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *a3);
      sub_1022ACC0("originy", a3[1]);
      sub_1022ACC0("originz", a3[2]);
      sub_1022ACC0("directionx", *a4);
      sub_1022ACC0("directiony", a4[1]);
      sub_1022ACC0("directionz", a4[2]);
      sub_1022AB60("color", v17);
      sub_1022ABA0("spraymodel", v14);
      sub_1022ABA0("dropmodel", v15);
      sub_1022ACA0("size", a9);
      sub_101BC9C0(0, v16);
      return sub_1022AF00(v16);
    }
  }
  return result;
}
