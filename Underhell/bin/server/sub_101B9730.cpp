int __thiscall sub_101B9730(_DWORD *this, int a2, int *a3)
{
  int result; // eax
  int v4; // edx
  int *v5; // edi
  unsigned int *v6; // edx
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // ebx
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int *v17; // eax
  _DWORD *v18; // [esp+0h] [ebp-Ch]
  int v19; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  result = this[75] - 1;
  v18 = this;
  v19 = result;
  if ( result >= 0 )
  {
    v4 = 20 * result;
    v5 = off_1061BE18;
    for ( i = 20 * result; ; v4 = i )
    {
      v6 = (unsigned int *)(this[72] + v4);
      if ( *v6 == -1 || v5[4 * (*v6 & 0xFFF) + 2] != *v6 >> 12 )
        v7 = 0;
      else
        v7 = v5[4 * (*v6 & 0xFFF) + 1];
      if ( v7 == a2 && (v8 = v6[1], v8 != -1) && v5[4 * (v6[1] & 0xFFF) + 2] == v8 >> 12 && v5[4 * (v6[1] & 0xFFF) + 1] )
      {
        v9 = v6[1];
      }
      else
      {
        v10 = v6[1];
        if ( v10 == -1 || v5[4 * (v6[1] & 0xFFF) + 2] != v10 >> 12 )
          v11 = 0;
        else
          v11 = v5[4 * (v6[1] & 0xFFF) + 1];
        if ( v11 != a2 || *v6 == -1 || v5[4 * (*v6 & 0xFFF) + 2] != *v6 >> 12 || !v5[4 * (*v6 & 0xFFF) + 1] )
          goto LABEL_33;
        v9 = *v6;
      }
      if ( v9 == -1 || v5[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
        v12 = 0;
      else
        v12 = v5[4 * (v9 & 0xFFF) + 1];
      v13 = a3[3];
      v14 = a3[1];
      if ( v13 + 1 > v14 )
        sub_102ABFC0(v13 - v14 + 1);
      ++a3[3];
      v15 = *a3;
      v16 = a3[3] - v13 - 1;
      a3[4] = *a3;
      if ( v16 > 0 )
        memcpy((void *)(v15 + 4 * v13 + 4), (const void *)(v15 + 4 * v13), 4 * v16);
      v17 = (int *)(*a3 + 4 * v13);
      if ( v17 )
        *v17 = v12;
      v5 = off_1061BE18;
LABEL_33:
      i -= 20;
      result = v19 - 1;
      v19 = result;
      if ( result < 0 )
        return result;
      this = v18;
    }
  }
  return result;
}
