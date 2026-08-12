int __usercall sub_101680F0@<eax>(float *a1@<edi>, float *a2, int a3, int a4, int a5)
{
  int result; // eax
  int v6; // esi
  void *v7; // eax

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      if ( !a3 )
      {
        if ( sub_10229D00(32) )
          v6 = sub_10229D20("TempEntity");
        else
          v6 = 0;
        sub_1022ACA0("te", 17);
        sub_1022ABA0("name", "TE_Decal");
        sub_1022ACC0("time", *((float *)off_103DC81C + 3));
        sub_1022ACC0("originx", *a2);
        sub_1022ACC0("originy", a2[1]);
        sub_1022ACC0("originz", a2[2]);
        sub_1022ACC0("startx", *a1);
        sub_1022ACC0("starty", a1[1]);
        sub_1022ACC0("startz", a1[2]);
        sub_1022ACA0("hitbox", a4);
        v7 = (void *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413164 + 28))(dword_10413164, a5);
        sub_1022ABA0("decalname", v7);
        sub_101BC9C0(0, v6);
        return sub_1022AF00(v6);
      }
    }
  }
  return result;
}
