int __thiscall sub_10030270(int this)
{
  int v2; // eax
  int v3; // edi
  int v4; // edi
  int v5; // edi
  _DWORD *v6; // edi
  int v7; // eax

  *(_DWORD *)this = &C_BaseAnimating::`vftable';
  *(_DWORD *)(this + 4) = &C_BaseAnimating::`vftable';
  *(_DWORD *)(this + 8) = &C_BaseAnimating::`vftable';
  *(_DWORD *)(this + 12) = &C_BaseAnimating::`vftable';
  v2 = 0;
  if ( dword_104037F8 > 0 )
  {
    while ( *(_DWORD *)(dword_104037EC + 4 * v2) != this )
    {
      if ( ++v2 >= dword_104037F8 )
        goto LABEL_8;
    }
    if ( v2 != -1 && dword_104037F8 > 0 )
      *(_DWORD *)(dword_104037EC + 4 * v2) = *(_DWORD *)(dword_104037EC + 4 * dword_104037F8-- - 4);
  }
LABEL_8:
  sub_1002A400((_DWORD *)this);
  sub_1002DD00(this);
  sub_10034930(*(_DWORD *)(this + 1244));
  v3 = *(_DWORD *)(this + 1228);
  if ( v3 )
  {
    sub_1011A810(v3 + 4112);
    sub_100F9DC0(v3 + 4092);
    *(_DWORD *)(v3 + 4080) = 0;
    *(_DWORD *)(v3 + 4084) = v3;
    sub_10034930(v3);
  }
  v4 = *(_DWORD *)(this + 1872);
  if ( v4 )
  {
    sub_1011A810(v4 + 40);
    sub_1011A810(v4 + 20);
    sub_10034930(v4);
  }
  sub_1001E3C0(*(_DWORD *)(this + 1896));
  sub_10026650(this);
  v5 = *(_DWORD *)(this + 1940);
  if ( v5 )
  {
    nullsub_4();
    if ( *(_DWORD *)(v5 + 84) )
      sub_10034930(*(_DWORD *)(v5 + 84));
    sub_100F9890(v5 + 96);
    sub_100F9DC0(v5 + 96);
    sub_1011A810(v5 + 64);
    sub_1011A810(v5 + 44);
    sub_1011A810(v5 + 8);
    sub_10034930(v5);
  }
  v6 = *(_DWORD **)(this + 1904);
  if ( v6 )
  {
    sub_1002CF20(*(_WORD **)(this + 1904));
    if ( (int)v6[2] >= 0 )
    {
      if ( *v6 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v6);
        *v6 = 0;
      }
      v6[1] = 0;
    }
    sub_10034930(v6);
  }
  sub_1011A810(this + 1908);
  sub_1011A810(this + 1876);
  *(_DWORD *)(this + 1820) = &CInterpolatedVarArrayBase<float,0>::`vftable';
  *(_DWORD *)(this + 1834) = 0;
  sub_10034930(*(_DWORD *)(this + 1852));
  sub_10034930(*(_DWORD *)(this + 1840));
  v7 = *(_DWORD *)(this + 1828);
  if ( v7 )
    sub_10034930(v7 - 4);
  *(_DWORD *)(this + 1828) = 0;
  *(_DWORD *)(this + 1820) = &IInterpolatedVar::`vftable';
  *(_DWORD *)(this + 1700) = &CInterpolatedVarArrayBase<float,1>::`vftable';
  sub_10027860(this + 1700);
  sub_10034930(*(_DWORD *)(this + 1732));
  sub_10034930(*(_DWORD *)(this + 1720));
  sub_1010F720(this + 1708);
  *(_DWORD *)(this + 1700) = &IInterpolatedVar::`vftable';
  sub_100EC500(this + 1648);
  if ( *(int *)(this + 1656) >= 0 )
  {
    if ( *(_DWORD *)(this + 1648) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 1648));
      *(_DWORD *)(this + 1648) = 0;
    }
    *(_DWORD *)(this + 1652) = 0;
  }
  *(_DWORD *)(this + 1500) = &CInterpolatedVarArrayBase<float,1>::`vftable';
  sub_10027860(this + 1500);
  sub_10034930(*(_DWORD *)(this + 1532));
  sub_10034930(*(_DWORD *)(this + 1520));
  sub_1010F720(this + 1508);
  *(_DWORD *)(this + 1500) = &IInterpolatedVar::`vftable';
  *(_DWORD *)(this + 1336) = &CMouthInfo::`vftable';
  *(_WORD *)(this + 1396) = 0;
  sub_1011A810(this + 1208);
  return sub_1003D350(this);
}
