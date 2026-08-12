int __thiscall sub_10081130(_DWORD *this, int a2, int a3, const char *a4)
{
  const char *v5; // ecx
  const char *v6; // eax
  bool v7; // cf
  unsigned __int8 v8; // dl
  int v9; // eax

  if ( !a2 || !a4 )
    return 1;
  if ( !strcmp(a4, "+duck") )
  {
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)(this[3] + 252) + 8))(this[3] + 252, "specmenu", 1);
    return 0;
  }
  if ( !strcmp(a4, "+attack") )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, "spec_next");
    return 0;
  }
  if ( !strcmp(a4, "+attack2") )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, "spec_prev");
    return 0;
  }
  if ( !strcmp(a4, "+jump") )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, "spec_mode");
    return 0;
  }
  v5 = "+strafe";
  v6 = a4;
  while ( 1 )
  {
    v7 = *v6 < (unsigned int)*v5;
    if ( *v6 != *v5 )
      break;
    if ( !*v6 )
      goto LABEL_16;
    v8 = v6[1];
    v7 = v8 < (unsigned int)v5[1];
    if ( v8 != v5[1] )
      break;
    v6 += 2;
    v5 += 2;
    if ( !v8 )
    {
LABEL_16:
      v9 = 0;
      goto LABEL_18;
    }
  }
  v9 = -v7 - (v7 - 1);
LABEL_18:
  if ( v9 )
    return 1;
  sub_100B1EE0(v5);
  sub_100B1FD0(1);
  return 0;
}
