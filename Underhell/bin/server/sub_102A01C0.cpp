char __thiscall sub_102A01C0(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax

  v6 = __RTDynamicCast(
         this[1],
         0,
         (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
         (int)&CAI_PlayerAlly `RTTI Type Descriptor',
         0);
  if ( v6 )
    return (*(int (__thiscall **)(int, int, int, int, int, int))(*(_DWORD *)v6 + 2344))(v6, a2, a3, a4, a5, a6);
  else
    return 0;
}
