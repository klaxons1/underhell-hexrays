int __thiscall sub_100AB170(_DWORD **this, char *a2)
{
  char *v2; // esi
  unsigned int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // ebx
  _DWORD *v7; // edi
  bool v8; // zf
  unsigned int v10; // eax
  int v12; // [esp+10h] [ebp-8h]
  unsigned int v13; // [esp+14h] [ebp-4h]

  v2 = a2;
  if ( *(_DWORD *)a2 == -1 )
    return 0;
  v3 = *a2;
  v13 = v3;
  if ( v3 >= 3 )
  {
LABEL_14:
    *(_DWORD *)v2 = -1;
    return 0;
  }
  v4 = (int)&this[v3 + 21];
  v12 = v4;
  while ( 1 )
  {
    v5 = *(__int16 *)(v2 + 1);
    v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    if ( v5 < v6 )
      break;
LABEL_12:
    v8 = v2[3] == -1;
    *(_WORD *)(v2 + 1) = 0;
    if ( v8 )
    {
      ++v3;
      v4 = v12 + 4;
      v13 = v3;
      v12 += 4;
      if ( v3 < 3 )
        continue;
    }
    goto LABEL_14;
  }
  v7 = (_DWORD *)(**(_DWORD **)v4 + 4 * v5);
  while ( *v7 == -1 )
  {
LABEL_10:
    ++v5;
    ++v7;
    if ( v5 >= v6 )
    {
      v3 = v13;
      goto LABEL_12;
    }
  }
  if ( off_1061BE18[4 * (*v7 & 0xFFF) + 2] != *v7 >> 12 || !off_1061BE18[4 * (*v7 & 0xFFF) + 1] )
  {
    v2 = a2;
    goto LABEL_10;
  }
  *a2 = v13;
  *(_WORD *)(a2 + 1) = v5 + 1;
  v10 = *(_DWORD *)(*this[v13 + 21] + 4 * v5);
  if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
    return 0;
  return off_1061BE18[4 * (*(_DWORD *)(*this[v13 + 21] + 4 * v5) & 0xFFF) + 1];
}
