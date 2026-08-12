bool __thiscall sub_102F6A60(int this, _DWORD *a2)
{
  int v3; // edi
  int v5; // ecx
  float *v6; // eax
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6

  v3 = __RTDynamicCast(
         (int)a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&INPCInteractive `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return 0;
  if ( !(**(unsigned __int8 (__thiscall ***)(int, int))v3)(v3, this) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3) )
    return 0;
  v5 = a2[106];
  if ( v5 )
  {
    if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 76))(v5) & 4) == 0 )
      return 0;
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*a2 + 576))(a2);
  v7 = *(float *)(this + 584) - v6[1];
  v8 = v7 * v7;
  v9 = *(float *)(this + 580) - *v6;
  v10 = v8;
  v11 = *(float *)(this + 588) - v6[2];
  return v9 * v9 + v10 + v11 * v11 <= 129600.0;
}
