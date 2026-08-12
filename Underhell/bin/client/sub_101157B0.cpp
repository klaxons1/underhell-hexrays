unsigned int __thiscall sub_101157B0(void *this, int a2)
{
  unsigned int result; // eax
  unsigned int *v4; // ecx
  unsigned int v5; // edi
  double v6; // st7
  unsigned int v7; // esi
  int v8; // edx
  float v9; // [esp+0h] [ebp-Ch]

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
        result = __RTDynamicCast(
                   result,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                   (int)&C_EntityDissolve `RTTI Type Descriptor',
                   0);
        v5 = result;
        if ( result )
        {
          result = __RTDynamicCast(
                     (int)this,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&C_BaseAnimating `RTTI Type Descriptor',
                     (int)&C_ClientRagdoll `RTTI Type Descriptor',
                     0);
          if ( result )
          {
            v6 = *(float *)(v5 + 1196);
            *(float *)(result + 1968) = *(float *)(v5 + 1196);
            v9 = v6;
            result = (unsigned int)sub_101143D0((_DWORD *)result, v9);
            v7 = result;
            if ( result )
            {
              sub_10035090((_BYTE *)result, *(_BYTE *)(v5 + 116), 0);
              *(_BYTE *)(v7 + 84) = *(_BYTE *)(v5 + 84);
              if ( *(_DWORD *)(v7 + 88) != -1 )
                *(_DWORD *)(v7 + 88) = -1;
              sub_10010170((_DWORD *)v5, 0);
              *(float *)(v7 + 1232) = *(float *)(v5 + 1232);
              *(float *)(v7 + 1236) = *(float *)(v5 + 1236);
              *(float *)(v7 + 1240) = *(float *)(v5 + 1240);
              result = *(_DWORD *)(v5 + 1224);
              *(_DWORD *)(v7 + 1224) = result;
              if ( result == 3 )
              {
                v8 = *(_DWORD *)(v5 + 1244);
                *(float *)(v7 + 1200) = 0.2;
                *(_DWORD *)(v7 + 1244) = v8;
                *(float *)(v7 + 1208) = 0.1;
                *(float *)(v7 + 1212) = 0.050000001;
                *(float *)(v7 + 1220) = 0.1;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
