void __thiscall sub_100F1F50(_DWORD *this, int a2, _DWORD *a3)
{
  int v4; // ebx
  _DWORD *v5; // ebx
  _DWORD *i; // esi
  _DWORD *j; // esi

  if ( this[1681] != -1 && (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
  {
    dword_10435D5C = this[1681];
    flt_10435D60 = *((float *)off_103DC81C + 3);
    dword_10435D64 = a2;
    if ( a3 )
      dword_10435D68 = (*(int (__thiscall **)(_DWORD *))(a3[2] + 36))(a3 + 2);
    else
      dword_10435D68 = -1;
    if ( sub_10229D00(32) )
      v4 = sub_10229D20("ParticleSystem_SetControlPointObject");
    else
      v4 = 0;
    sub_1022ACE0("state", (int)&dword_10435D5C);
    sub_101BC9C0(0, v4);
  }
  if ( a3 )
  {
    v5 = &this[a2 + 1686];
    this[17 * a2 + 41] = v5;
    for ( i = (_DWORD *)this[1506]; i; i = (_DWORD *)i[1495] )
      sub_100F1730(i, a2, (int)v5);
    *v5 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a3 + 8))(a3);
  }
  else
  {
    this[17 * a2 + 41] = 0;
    for ( j = (_DWORD *)this[1506]; j; j = (_DWORD *)j[1495] )
      sub_100F1730(j, a2, 0);
  }
}
