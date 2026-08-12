_DWORD *__usercall sub_1020DEE0@<eax>(
        int a1@<edi>,
        int a2,
        int a3,
        float *a4,
        float *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  _DWORD *v10; // eax
  int v11; // eax
  _DWORD *v12; // ebx
  double v13; // st7
  int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // esi
  int v18; // [esp+Ch] [ebp-1010h]
  _DWORD v19[1024]; // [esp+18h] [ebp-1004h] BYREF
  int v20; // [esp+1018h] [ebp-4h] BYREF

  if ( dword_106C1B68 >= *(_DWORD *)(dword_106C1C8C + 48) )
    return 0;
  if ( *(_BYTE *)(a3 + 1060) )
  {
    v18 = *(_DWORD *)(a3 + 1056);
    v11 = __RTDynamicCast(
            a2,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CBaseAnimating `RTTI Type Descriptor',
            0);
    v10 = sub_101CDBC0(v11, (_BYTE *)(a3 + 12), a4, a5, v18);
  }
  else
  {
    v10 = (_DWORD *)sub_1020DBB0(a5, a4, a1, a2, a3, a9);
  }
  v12 = v10;
  if ( !v10 )
    return v12;
  sub_10031670(v10 + 212, &a8);
  v20 = (int)*(float *)(a3 + 1048);
  if ( v12[55] != v20 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v12 + 464))(v12, v12 + 55);
    v12[55] = v20;
  }
  if ( dword_106C1B68 >= *(_DWORD *)(dword_106C1CD4 + 48) )
  {
    v13 = 3.0;
    if ( *(float *)(a3 + 1036) <= 3.0 )
      v13 = *(float *)(a3 + 1036);
    *(float *)(a3 + 1036) = v13;
  }
  if ( 0.0 != *(float *)(a3 + 1036) )
  {
    sub_100E31F0((int)v12, *(float *)(a3 + 1036), 0);
    v14 = __RTDynamicCast(
            (int)v12,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseAnimating `RTTI Type Descriptor',
            (int)&CBreakableProp `RTTI Type Descriptor',
            0);
    if ( v14 )
    {
      if ( !*(_DWORD *)(v14 + 1284) && *(_BYTE *)(v14 + 225) == 2 )
      {
        v20 = 1;
        sub_100317D0((_BYTE *)(v14 + 225), (char *)&v20);
      }
    }
  }
  v15 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*v12 + 624))(v12, v19, 1024);
  v16 = v15;
  if ( v15 )
  {
    v17 = 0;
    if ( v15 > 0 )
    {
      do
      {
        (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)v19[v17] + 196))(v19[v17], a6, a7);
        ++v17;
      }
      while ( v17 < v16 );
    }
    return v12;
  }
  sub_1025FAC0(v12);
  return 0;
}
