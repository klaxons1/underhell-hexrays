void __userpurge sub_10098960(_DWORD *a1@<ecx>, int a2@<ebx>, int *a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // [esp-8h] [ebp-Ch]

  if ( a3[6] == 5 )
    v4 = a3[2];
  else
    v4 = 0;
  v6 = v4;
  v5 = __RTDynamicCast(
         *a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CAI_PlayerAlly `RTTI Type Descriptor',
         0);
  sub_100985D0(a1, a2, v5, v6, 1);
}
