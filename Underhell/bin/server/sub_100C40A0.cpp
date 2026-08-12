char __userpurge sub_100C40A0@<al>(_DWORD *a1@<ecx>, int a2@<edi>, float *a3)
{
  int *v4; // ecx
  int v5; // eax
  int (__thiscall *v6)(_DWORD *); // edx
  double v7; // st7
  float *v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  float v15; // [esp+10h] [ebp-6Ch]
  float v16; // [esp+14h] [ebp-68h]
  _BYTE v17[4]; // [esp+20h] [ebp-5Ch] BYREF
  float v18; // [esp+24h] [ebp-58h]
  float v19; // [esp+28h] [ebp-54h]
  float v20; // [esp+2Ch] [ebp-50h]
  float v21; // [esp+30h] [ebp-4Ch]
  float v22; // [esp+34h] [ebp-48h]
  float v23; // [esp+38h] [ebp-44h]
  int v24; // [esp+60h] [ebp-1Ch]
  float v25[3]; // [esp+70h] [ebp-Ch] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 764))(a1) )
    return 0;
  (*(void (__thiscall **)(_DWORD *, int))(*a1 + 592))(a1, a2);
  sub_101129A0(*((unsigned __int16 *)a1 + 178) | 4);
  if ( *((_BYTE *)a1 + 112) != 23 )
  {
    if ( *((_BYTE *)a1 + 84) )
    {
      *((_BYTE *)a1 + 88) |= 1u;
    }
    else
    {
      v4 = (int *)a1[6];
      if ( v4 )
        sub_100194B0(v4, 112);
    }
    *((_BYTE *)a1 + 112) = 23;
  }
  (*(void (__thiscall **)(_DWORD *, float *))(*a1 + 744))(a1, a3);
  sub_100C0DD0((float *)a1 + 209, v25);
  (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 140))(a1, 0, -1);
  sub_100EA940(0x20000000);
  sub_100E0970(0, 0);
  sub_100EC3F0(0, 0.0, 0);
  v15 = *(float *)(dword_106B31C8 + 12) + 2.0;
  sub_100EC4A0(v15, 0);
  if ( *(_DWORD *)(dword_106960A4 + 48) == -1 )
  {
    sub_1016B050(a1);
    sub_100EC3F0((int)sub_10246D70, 0.0, 0);
  }
  else
  {
    sub_10247EC0(v17);
    v5 = *a1;
    v18 = *a3;
    v6 = *(int (__thiscall **)(_DWORD *))(v5 + 576);
    v19 = a3[1];
    v7 = a3[2];
    v24 = 0;
    v20 = v7;
    v8 = (float *)v6(a1);
    v21 = *v8;
    v22 = v8[1];
    v23 = v8[2];
    v9 = sub_101D0270(a1, 0, v17, 0, 0);
    *(_BYTE *)(v9 + 1864) = 0;
    *(_DWORD *)(v9 + 260) = a1[65];
    sub_100EBE30(*(_DWORD *)(dword_106960A4 + 48));
    if ( (a1[64] & 0x8000000) != 0 )
      sub_100C35E0((_BYTE *)(v9 + 116), a1[29], BYTE1(a1[29]), BYTE2(a1[29]));
    *(_DWORD *)(v9 + 1860) = (*(int (__thiscall **)(_DWORD *))(*a1 + 276))(a1);
    v10 = *(_DWORD *)(dword_10696134 + 48);
    if ( v10 && dword_106960D8 > v10 )
    {
      do
      {
        sub_101CB960(**(_DWORD **)(dword_106960D0 + 4));
        v11 = *(_DWORD *)(dword_106960D0 + 4);
        *(_DWORD *)(*(_DWORD *)(v11 + 8) + 4) = *(_DWORD *)(v11 + 4);
        *(_DWORD *)(*(_DWORD *)(v11 + 4) + 8) = *(_DWORD *)(v11 + 8);
        --dword_106960D8;
        sub_10184660(v11);
      }
      while ( dword_106960D8 > *(_DWORD *)(dword_10696134 + 48) );
    }
    sub_1016B050(a1);
    sub_1025FAC0(a1);
  }
  v12 = a1[104];
  if ( v12 == -1 || off_1061BE18[4 * (v12 & 0xFFF) + 2] != v12 >> 12 )
    v13 = 0;
  else
    v13 = off_1061BE18[4 * (v12 & 0xFFF) + 1];
  if ( __RTDynamicCast(
         v13,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CEntityFlame `RTTI Type Descriptor',
         0) )
  {
    sub_100EC3F0((int)sub_10246D70, 0.0, 0);
    v16 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0(v16, 0);
  }
  return 1;
}
