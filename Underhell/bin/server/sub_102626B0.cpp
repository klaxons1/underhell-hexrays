char __cdecl sub_102626B0(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  _DWORD *v7; // eax
  float v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  v2 = __RTDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CBaseAnimating `RTTI Type Descriptor',
         0);
  v10 = v2;
  v3 = __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CBaseAnimating `RTTI Type Descriptor',
         0);
  v4 = v3;
  if ( !v2 || !v3 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    v9 = sub_100BE820(v2, v5);
    v6 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    v7 = *(_DWORD **)(v4 + 1100);
    if ( !v7 )
    {
      if ( sub_100D7240((void *)v4) )
        sub_100BD750((volatile signed __int32 *)v4);
      v7 = *(_DWORD **)(v4 + 1100);
      if ( !v7 )
        goto LABEL_10;
    }
    v11 = (int)v7;
    if ( !*v7 )
LABEL_10:
      v11 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
    sub_100BE7D0((_DWORD *)v4, v11, v5++, v9);
    if ( v5 >= 24 )
      return 1;
    v2 = v10;
  }
}
