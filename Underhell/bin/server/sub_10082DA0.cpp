char __thiscall sub_10082DA0(_DWORD *this, int a2, float a3, _DWORD *a4)
{
  double v4; // st7
  char v7; // bl
  double v8; // st6
  int v10; // ecx
  int *v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  _DWORD *v17; // ebx
  int v18; // ecx
  int v19; // esi
  float v20; // [esp+0h] [ebp-20h]
  int v21; // [esp+14h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-8h]
  int v23; // [esp+1Ch] [ebp-4h]
  int v24; // [esp+28h] [ebp+8h]

  v4 = a3;
  v7 = 0;
  if ( (*(_BYTE *)(a2 + 56) & 1) != 0 )
  {
    v8 = *(float *)(this[7] + 4);
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 56) & 4) != 0 )
      goto LABEL_19;
    v8 = *(float *)(this[7] + 32);
    v7 = 1;
    if ( *(float *)(a2 + 40) < 48.0 && *(float *)(a2 + 40) - v4 < v8 )
      v8 = *(float *)(a2 + 40) + 1.0;
  }
  if ( *(float *)(a2 + 40) < v4 )
  {
    *a4 = 0;
    return 1;
  }
  if ( v8 > *(float *)(a2 + 40) )
  {
    if ( (*(_BYTE *)(a2 + 56) & 1) == 0
      || *(_DWORD *)(a2 + 68) != -3
      || (v4 = a3, !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 96) + 296))(*(_DWORD *)(a2 + 96))) )
    {
      *(float *)(a2 + 40) = v4;
      *a4 = 0;
      if ( v7 )
      {
        sub_100820C0((int)(this - 2));
        return 1;
      }
      else
      {
        if ( v4 < 0.025 )
          *a4 = *(_DWORD *)(a2 + 68);
        return 1;
      }
    }
  }
LABEL_19:
  if ( *(_DWORD *)(dword_1069345C + 48) )
  {
    v10 = *(_DWORD *)(a2 + 96);
    if ( v10 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 340))(v10) )
      {
        v11 = *(int **)(*(this - 1) + 2596);
        v24 = this[1];
        v12 = sub_100A6100(this[7]);
        v13 = *(this - 1);
        v23 = v12;
        v22 = v13;
        if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
          sub_100DAE60(v13);
        v21 = *v11;
        v14 = sub_1007E610((int)(this - 2));
        v15 = (*(int (__thiscall **)(int *, int, int, _DWORD, int, int))(v21 + 32))(
                v11,
                v22 + 580,
                v23,
                *(_DWORD *)(a2 + 96),
                v14,
                v24);
        if ( v15 )
        {
          sub_100A5F20(v15);
          return 1;
        }
      }
      v4 = a3;
    }
  }
  v20 = v4;
  if ( (*(unsigned __int8 (__stdcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)(*(this - 1) + 2104) + 8))(
         a2,
         LODWORD(v20),
         a4) )
  {
    return 1;
  }
  v16 = this[29];
  v17 = this + 29;
  if ( v16 != -1 && off_1061BE18[4 * (this[29] & 0xFFF) + 2] == v16 >> 12 && off_1061BE18[4 * (this[29] & 0xFFF) + 1] )
    return 0;
  if ( !*(_DWORD *)(a2 + 96) )
    return 0;
  if ( sub_100737B0(*(_DWORD *)(*(this - 1) + 1676)) <= a3 )
    return 0;
  v18 = *(this - 1);
  v19 = *(_DWORD *)(a2 + 96);
  if ( v19 != sub_101C5260(v18)
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v19 + 320))(v19)
    && !__RTDynamicCast(
          *(_DWORD *)(a2 + 96),
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
          (int)&CPhysicsProp `RTTI Type Descriptor',
          0) )
  {
    return 0;
  }
  sub_10019680(v17, *(_DWORD *)(a2 + 96));
  *a4 = 1;
  return 1;
}
