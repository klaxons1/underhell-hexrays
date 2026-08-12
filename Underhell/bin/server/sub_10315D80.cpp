int __thiscall sub_10315D80(int this, int a2)
{
  int *v2; // edx
  int v3; // eax
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // ecx
  int *v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  int (__thiscall *v16)(int); // eax
  double v17; // st7
  bool v18; // zf
  int (__thiscall *v19)(int); // eax
  int v20[13]; // [esp+18h] [ebp-54h] BYREF
  float v21; // [esp+4Ch] [ebp-20h]
  float v22; // [esp+50h] [ebp-1Ch]
  float v23; // [esp+68h] [ebp-4h]

  v2 = off_1061BE18;
  v3 = *(_DWORD *)(a2 + 40);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != *(_DWORD *)(a2 + 40) >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  if ( v5 != this && (*(_DWORD *)(a2 + 64) & 0x2000000) == 0 )
  {
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != *(_DWORD *)(a2 + 40) >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 220))(v6) != 21 )
    {
      v7 = *(_DWORD *)(a2 + 44);
      if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v7 >> 12 )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 220))(v8) != 21 )
        return 0;
    }
    v2 = off_1061BE18;
  }
  if ( *(_BYTE *)(this + 4172) && (double)*(int *)(this + 220) < *(float *)(a2 + 52) )
    return 0;
  v10 = *(_DWORD *)(a2 + 40);
  if ( v10 == -1 || v2[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v10 >> 12 )
    v11 = 0;
  else
    v11 = v2[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  if ( !__RTDynamicCast(
          v11,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
          (int)&CGrenadeHelicopter `RTTI Type Descriptor',
          0) )
    return sub_100C7DC0((_DWORD *)this, this, (int *)a2);
  v12 = *(_DWORD *)(a2 + 44);
  if ( v12 == -1 )
    return sub_100C7DC0((_DWORD *)this, this, (int *)a2);
  v13 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
  v14 = v12 >> 12;
  if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v14 || !*v13 )
    return sub_100C7DC0((_DWORD *)this, this, (int *)a2);
  v15 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v14 ? *v13 : 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 320))(v15) )
    return sub_100C7DC0((_DWORD *)this, this, (int *)a2);
  sub_1001E4E0(v20, a2);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 1) )
  {
    v16 = *(int (__thiscall **)(int))(*(_DWORD *)this + 448);
    v23 = *(float *)(dword_106E36EC + 44);
    v17 = (double)v16(this);
  }
  else
  {
    v18 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 3) == 0;
    v19 = *(int (__thiscall **)(int))(*(_DWORD *)this + 448);
    if ( v18 )
      v23 = *(float *)(dword_106E3734 + 44);
    else
      v23 = *(float *)(dword_106E377C + 44);
    v17 = (double)v19(this);
  }
  v21 = ceil(v17 / v23);
  v22 = v21;
  return sub_100C7DC0((_DWORD *)this, this, v20);
}
