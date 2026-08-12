void __userpurge sub_10074A70(int a1@<esi>, char *Source)
{
  int v2; // eax
  int (*v3)(void); // eax

  if ( !byte_10413158 )
  {
    byte_10413158 = 1;
    (*(void (__thiscall **)(int *))(*off_103ED0D8 + 184))(off_103ED0D8);
    ((void (__thiscall *)(void ***))(*off_103E77E8)[1])(off_103E77E8);
    sub_100E9530((char)Source, 1);
    (*((void (__thiscall **)(void ***, char *))*off_103ECFF8[0] + 2))(off_103ECFF8[0], Source);
    v2 = sub_100F0920(a1);
    sub_100EB1E0(v2);
    (**(void (__thiscall ***)(void *, const char *, char *))off_103E0D18)(off_103E0D18, "(mapname)", Source);
    sub_10150600();
    ((void (__thiscall *)(int (__stdcall ***)(char)))(*off_103DD168)[3])(off_103DD168);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 4))(dword_10439968);
    ((void (__thiscall *)(void ***))(*off_103E9C2C)[3])(off_103E9C2C);
    sub_10140950(1.0);
    sub_100D31C0(Source);
    sub_1009C880();
    v3 = *(int (**)(void))(*off_103DC72C[0] + 68);
    if ( *((int *)off_103DC81C + 5) <= 1 )
    {
      if ( v3() )
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, "cl_predict 0");
    }
    else if ( !v3() )
    {
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, "cl_predict 1");
    }
    sub_10114C90(Source);
    sub_100B6210(&dword_1042FB78);
  }
}
