void __thiscall sub_10383C30(int this, int a2, int a3)
{
  int v4; // ecx
  char **v5; // edi
  int v6; // ebx
  _DWORD *v7; // [esp+14h] [ebp-4h]

  sub_100DA500((_BYTE *)this, a2, a3);
  v4 = *(_DWORD *)(this + 424);
  if ( !v4 || ((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 76))(v4) & 4) == 0 )
  {
    if ( (*(_DWORD *)(this + 248) & 0x10000) != 0 )
      sub_10023CB0((char *)this, 17);
    v5 = *(char ***)(a3 + 4 * (a2 == 0) + 104);
    v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 632))(this, 0.34999999);
    if ( !v6
      || v5
      && ((v7 = (_DWORD *)__RTDynamicCast(
                            (int)v5,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                            (int)&CRagdollProp `RTTI Type Descriptor',
                            0),
           (*((unsigned __int8 (__thiscall **)(char **))*v5 + 71))(v5))
       || v7 && sub_10382680(v7) == this) )
    {
      if ( v5 )
      {
        if ( (*((int (__thiscall **)(char **))*v5 + 85))(v5) )
        {
          sub_10381E50((int *)this, a2, a3);
          sub_10382560(this, 1);
        }
        else
        {
          if ( (*((int (__thiscall **)(char **, _DWORD))*v5 + 158))(v5, 0.5)
            || v5[23] == "prop_combine_ball"
            || sub_100D6240(v5, "prop_combine_ball")
            || *(int *)(this + 220) <= 0 )
          {
            sub_10382020((void *)this, a2, a3);
          }
          sub_10382560(this, 1);
        }
      }
    }
    else
    {
      sub_10383B20((int *)this, v6);
      sub_10382560(this, 1);
    }
  }
}
