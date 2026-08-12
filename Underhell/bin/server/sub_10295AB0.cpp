int __thiscall sub_10295AB0(int this, int a2)
{
  int v3; // ebx
  bool v4; // zf
  int result; // eax

  v3 = sub_1004B560((_DWORD **)this);
  if ( a2 != 11 )
    return v3;
  v4 = __RTDynamicCast(
         *(_DWORD *)(this + 4),
         0,
         (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
         (int)&CAI_PlayerAlly `RTTI Type Descriptor',
         0) == 0;
  result = 87;
  if ( v4 )
    return v3;
  return result;
}
