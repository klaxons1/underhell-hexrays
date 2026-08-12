void __thiscall sub_10329840(int this, int a2, int a3)
{
  int v4; // ecx
  int v5; // eax
  char **v6; // edi

  sub_100DA500((_BYTE *)this, a2, a3);
  v4 = *(_DWORD *)(this + 424);
  if ( !v4 || ((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 76))(v4) & 4) == 0 )
  {
    v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 632))(this, 0.75);
    if ( v5 )
    {
      sub_10329730((int *)this, v5);
    }
    else
    {
      v6 = *(char ***)(a3 + 4 * (a2 == 0) + 104);
      if ( v6
        && ((*((int (__thiscall **)(char **, _DWORD))*v6 + 158))(v6, 0.5)
         || v6[23] == "prop_combine_ball"
         || sub_100D6240(v6, "prop_combine_ball")) )
      {
        sub_103281B0((float *)this, a2, a3);
      }
    }
  }
}
