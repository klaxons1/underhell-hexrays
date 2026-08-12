int __cdecl sub_101700F0(int a1)
{
  int v1; // esi
  int result; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  sub_1023E0F0(&a1);
  v1 = a1;
  result = __RTDynamicCast(
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&IGameSystem `RTTI Type Descriptor',
             (int)&IGameSystemPerFrame `RTTI Type Descriptor',
             0);
  if ( result )
  {
    v3 = v1;
    return sub_1023E0F0(&v3);
  }
  return result;
}
