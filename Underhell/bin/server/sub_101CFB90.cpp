int __cdecl sub_101CFB90(int a1)
{
  int i; // esi
  int v2; // eax
  int result; // eax
  int v4; // [esp+8h] [ebp-14h] BYREF
  int v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  sub_1016B400(a1, &v4);
  for ( i = v7 - 1; i >= 0; --i )
  {
    v2 = __RTDynamicCast(
           *(_DWORD *)(v4 + 4 * i),
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CRagdollPropAttached `RTTI Type Descriptor',
           0);
    if ( v2 )
      *(_BYTE *)(v2 + 5684) = 1;
  }
  result = v4;
  v7 = 0;
  if ( v6 >= 0 )
  {
    if ( v4 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
      result = 0;
      v4 = 0;
    }
    v5 = 0;
  }
  v8 = result;
  if ( v6 >= 0 )
  {
    if ( result )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
