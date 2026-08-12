const struct _s_RTTIBaseClassDescriptor *__usercall FindMITargetTypeInstance@<eax>(
        int a1@<eax>,
        char *a2,
        const struct _s_RTTICompleteObjectLocator *a3,
        struct TypeDescriptor *a4,
        int a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // edi
  int v8; // esi
  int v10; // [esp+Ch] [ebp-14h]
  int v11; // [esp+10h] [ebp-10h]
  unsigned int v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]

  v5 = *(_DWORD *)(a1 + 16);
  v13 = -1;
  v6 = *(_DWORD *)(v5 + 8);
  v7 = *(_DWORD *)(v5 + 12);
  v11 = 0;
  v10 = 0;
  v12 = 0;
  v14 = 0;
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v7 + 4 * v14);
    if ( v14 - v13 > v12 && (*(_DWORD *)v8 == a5 || !strcmp((const char *)(*(_DWORD *)v8 + 8), (const char *)(a5 + 8))) )
    {
      if ( v10 )
      {
        if ( (*(_BYTE *)(v8 + 20) & 3) == 0 && (*(_BYTE *)(v10 + 20) & 1) == 0 )
          return (const struct _s_RTTIBaseClassDescriptor *)v8;
        return 0;
      }
      v13 = v14;
      v11 = v8;
      v12 = *(_DWORD *)(v8 + 4);
    }
    if ( (*(const struct _s_RTTICompleteObjectLocator **)v8 == a3
       || !strcmp((const char *)(*(_DWORD *)v8 + 8), (const char *)a3 + 8))
      && (struct TypeDescriptor *)PMDtoOffset((_DWORD *)(v8 + 8), a2) == a4 )
    {
      break;
    }
LABEL_12:
    if ( ++v14 >= v6 )
      return 0;
  }
  if ( !v11 )
  {
    v10 = v8;
    goto LABEL_12;
  }
  if ( v14 - v13 > v12 )
  {
    if ( (*(_BYTE *)(v11 + 20) & 3) == 0 )
      goto LABEL_20;
    return 0;
  }
  if ( (*(_BYTE *)(v11 + 20) & 0x40) == 0 )
  {
    if ( !v13 )
    {
LABEL_20:
      if ( (*(_BYTE *)(v8 + 20) & 1) != 0 )
        return 0;
    }
    return (const struct _s_RTTIBaseClassDescriptor *)v11;
  }
  return (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 24) + 12) + 4 * (v14 - v13)) + 20) & 1) == 0
       ? (const struct _s_RTTIBaseClassDescriptor *)v11
       : 0;
}
