unsigned int __thiscall sub_101156C0(void *this, int a2)
{
  unsigned int result; // eax
  unsigned int *v4; // ecx
  int v5; // esi
  _DWORD *v6; // edi
  unsigned __int16 *v7; // eax

  result = *(_DWORD *)(a2 + 1128);
  if ( result != -1 )
  {
    v4 = (unsigned int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(a2 + 1128) & 0xFFF) + 4);
    result >>= 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 1128) & 0xFFF) + 2) == result )
    {
      result = *v4;
      if ( *v4 )
      {
        v5 = __RTDynamicCast(
               result,
               0,
               (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
               (int)&C_EntityFlame `RTTI Type Descriptor',
               0);
        result = __RTDynamicCast(
                   (int)this,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&C_BaseAnimating `RTTI Type Descriptor',
                   (int)&C_ClientRagdoll `RTTI Type Descriptor',
                   0);
        v6 = (_DWORD *)result;
        if ( v5 )
        {
          v7 = sub_10115560(result, (_DWORD *)result, v5);
          return sub_1000FC30(v6, (int)v7);
        }
      }
    }
  }
  return result;
}
