char __thiscall sub_1029D720(void *this, int *a2)
{
  int v3; // ebx
  int v4; // esi
  int v5; // eax

  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1380))(this);
  *a2 = 0;
  v4 = 0;
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1384))(this) <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = __RTDynamicCast(
           *(_DWORD *)(v3 + 4 * v4),
           0,
           (struct _s_RTTICompleteObjectLocator *)&CAI_BehaviorBase `RTTI Type Descriptor',
           (int)&CAI_OperatorBehavior `RTTI Type Descriptor',
           0);
    *a2 = v5;
    if ( v5 )
      break;
    if ( ++v4 >= (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1384))(this) )
      return 0;
  }
  return 1;
}
