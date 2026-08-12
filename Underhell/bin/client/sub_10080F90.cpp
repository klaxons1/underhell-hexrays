int __thiscall sub_10080F90(void *this, int a2, int a3, const char *a4)
{
  int v6; // eax
  int v7; // eax

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 44))(dword_1041315C) )
    return 1;
  if ( !a4 )
    goto LABEL_14;
  if ( !strcmp(a4, "messagemode") || !strcmp(a4, "say") )
  {
    if ( a2 )
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 72))(this, 1);
    return 0;
  }
  if ( !strcmp(a4, "messagemode2") || !sub_10001000(a4, "say_team") )
  {
    if ( a2 )
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 72))(this, 2);
    return 0;
  }
  else
  {
LABEL_14:
    v6 = sub_100422D0();
    if ( (!v6
       || (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 844))(v6) <= 1
       || (*(int (__thiscall **)(void *, int, int, const char *))(*(_DWORD *)this + 148))(this, a2, a3, a4))
      && (*(int (__thiscall **)(void *, int, int, const char *))(*(_DWORD *)this + 144))(this, a2, a3, a4) )
    {
      v7 = sub_10033760();
      if ( v7 )
        return (*(int (__thiscall **)(int, int, int, const char *))(*(_DWORD *)v7 + 1288))(v7, a2, a3, a4);
      else
        return 1;
    }
    else
    {
      return 0;
    }
  }
}
