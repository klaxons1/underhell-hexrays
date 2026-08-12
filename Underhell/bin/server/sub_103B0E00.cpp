int __thiscall sub_103B0E00(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  int result; // eax
  unsigned int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax

  v3 = *(_DWORD *)(this + 280);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 280) & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  result = __RTDynamicCast(
             v5,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CNPC_Bullseye `RTTI Type Descriptor',
             0);
  if ( result )
  {
    v7 = *(_DWORD *)(this + 280);
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 280) & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*(_DWORD *)(this + 280) & 0xFFF) + 1];
    result = __RTDynamicCast(
               v8,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CNPC_Bullseye `RTTI Type Descriptor',
               0);
    if ( a2 == result )
    {
      v9 = *(_DWORD *)(this - 3620);
      v10 = sub_103B0630((_DWORD *)(this - 3620));
      result = (*(int (__thiscall **)(int, int, int, _DWORD))(v9 + 1120))(this - 3620, v10, 4, 0);
    }
  }
  if ( *(_BYTE *)(this + 292) )
    *(_BYTE *)(this + 304) = 1;
  return result;
}
