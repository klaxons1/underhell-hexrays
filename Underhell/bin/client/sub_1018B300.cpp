void __cdecl sub_1018B300(int a1)
{
  int v1; // ebx
  int v2; // esi
  const char *v3; // eax
  int v4; // eax
  char *v5; // eax
  char *v6; // eax

  if ( dword_104453A8 && *(int *)a1 >= 4 )
  {
    v1 = (*(int (__stdcall **)(const char *))(*(_DWORD *)dword_104453A8 + 16))("info");
    if ( v1 )
    {
      if ( sub_10229D00(32) )
        v2 = sub_10229D20("data");
      else
        v2 = 0;
      v3 = Locale;
      if ( *(int *)a1 > 1 )
        v3 = *(const char **)(a1 + 1036);
      v4 = sub_10227CC0(v3);
      sub_1022ACA0("type", v4);
      v5 = (char *)Locale;
      if ( *(int *)a1 > 2 )
        v5 = *(char **)(a1 + 1040);
      sub_1022ABA0("title", v5);
      v6 = (char *)Locale;
      if ( *(int *)a1 > 3 )
        v6 = *(char **)(a1 + 1044);
      sub_1022ABA0("message", v6);
      if ( *(_DWORD *)a1 == 5 )
        sub_1022ABA0("command", *(void **)(a1 + 1048));
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 8))(v1, v2);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_104453A8 + 4))(dword_104453A8, v1, 1);
      sub_1022AF00(v2);
    }
    else
    {
      Msg("Couldn't find info panel.\n");
    }
  }
}
