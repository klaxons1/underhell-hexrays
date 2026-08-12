_DWORD *__usercall sub_1012A660@<eax>(int a1@<ebx>, int *a2, int a3)
{
  unsigned int v3; // eax
  int v4; // edi
  int v5; // esi
  unsigned int v6; // eax
  const char *v8; // eax

  v3 = *(_DWORD *)(a3 + 312);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 312) & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)(a3 + 312) & 0xFFF) + 1];
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    v5 = __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CEntityDissolve `RTTI Type Descriptor',
           0);
    if ( v5 )
      break;
    v6 = *(_DWORD *)(v4 + 316);
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(v4 + 316) & 0xFFF) + 2] != v6 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*(_DWORD *)(v4 + 316) & 0xFFF) + 1];
    if ( !v4 )
      return 0;
  }
  v8 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 28))(v5, &a3);
  if ( !v8 )
    v8 = String;
  return sub_1012A440(a1, v4, v5, a2, v8, *(float *)(v5 + 800), *(_DWORD *)(v5 + 828), 0);
}
