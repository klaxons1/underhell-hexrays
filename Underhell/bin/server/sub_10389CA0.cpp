char __thiscall sub_10389CA0(char *this, int a2, int a3)
{
  BOOL v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax

  sub_100DA500(this, a2, a3);
  v4 = a2 == 0;
  v5 = *(_DWORD *)(a3 + 4 * v4 + 104);
  LOBYTE(v6) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 4 * v4) + 76))(*(_DWORD *)(a3 + 4 * v4));
  if ( (v6 & 4) != 0 )
  {
    v7 = sub_1025FB50(1);
    v6 = __RTDynamicCast(
           v7,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
           (int)&CHL2_Player `RTTI Type Descriptor',
           0);
    if ( v6 )
    {
      LOBYTE(v6) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 1688))(v6, v5);
      if ( (_BYTE)v6 )
      {
        LOBYTE(v6) = sub_100697A0(this, 115, 1);
        if ( !(_BYTE)v6 )
        {
          LOBYTE(v6) = (unsigned __int8)sub_10023CB0(this, 75);
          this[4341] = 1;
        }
      }
    }
  }
  return v6;
}
