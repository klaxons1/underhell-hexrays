unsigned int __thiscall sub_102DD230(_DWORD *this, int a2)
{
  unsigned int result; // eax
  int *v4; // ecx
  char **v5; // ecx
  _DWORD *v6; // edi
  char *v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // esi

  result = this[248];
  if ( result == -1 )
    return result;
  v4 = &off_1061BE18[4 * (this[248] & 0xFFF) + 1];
  result >>= 12;
  if ( v4[1] != result || !*v4 )
    return result;
  v5 = (char **)(a2 + 8);
  v6 = 0;
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    v7 = (char *)sub_1010D460((int)v5);
LABEL_8:
    if ( v7 && *v7 )
      v6 = sub_1012BF20(&dword_1069E3E0, 0, v7, 0, 0, 0, 0);
    goto LABEL_11;
  }
  v7 = *v5;
  if ( *v5 )
    goto LABEL_8;
LABEL_11:
  v8 = this[248];
  if ( v8 == -1 || off_1061BE18[4 * (this[248] & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (this[248] & 0xFFF) + 1];
  result = __RTDynamicCast(
             v9,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CHL2_Player `RTTI Type Descriptor',
             0);
  v10 = result;
  if ( v6 )
  {
    result = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6);
    *(_DWORD *)(v10 + 5660) = result;
  }
  else
  {
    *(_DWORD *)(result + 5660) = -1;
  }
  return result;
}
