unsigned int __thiscall sub_102E1B60(int this, unsigned int *a2)
{
  unsigned int v3; // eax
  int *v4; // edx
  int *v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  unsigned int result; // eax
  unsigned int *v12; // edi
  unsigned int v13; // ebx
  unsigned int v14; // edi
  unsigned int *v15; // ebx
  unsigned int v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // eax
  unsigned int v19; // edi

  v3 = *(_DWORD *)(this + 5224);
  if ( v3 == -1
    || (v4 = off_1061BE18, v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 5224) & 0xFFF) + 1], v5[1] != v3 >> 12)
    || !*v5
    || (v6 = *(_DWORD *)(this + 5228), v6 == -1)
    || off_1061BE18[4 * (*(_DWORD *)(this + 5228) & 0xFFF) + 2] != v6 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 5228) & 0xFFF) + 1]
    || (v7 = *(_DWORD *)(this + 5232), v7 == -1)
    || off_1061BE18[4 * (*(_DWORD *)(this + 5232) & 0xFFF) + 2] != v7 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 5232) & 0xFFF) + 1] )
  {
    v8 = sub_1012BF20(&dword_1069E3E0, 0, "GC_HermitCards", 0, 0, 0, 0);
    if ( v8 )
      *(_DWORD *)(this + 5224) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v8 + 8))(v8);
    else
      *(_DWORD *)(this + 5224) = -1;
    v9 = sub_1012BF20(&dword_1069E3E0, 0, "GC_HermitQuest_Total", 0, 0, 0, 0);
    if ( v9 )
      *(_DWORD *)(this + 5228) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v9 + 8))(v9);
    else
      *(_DWORD *)(this + 5228) = -1;
    v10 = sub_1012BF20(&dword_1069E3E0, 0, "GC_HermitQuest_Current", 0, 0, 0, 0);
    if ( v10 )
      *(_DWORD *)(this + 5232) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v10 + 8))(v10);
    else
      *(_DWORD *)(this + 5232) = -1;
    v4 = off_1061BE18;
  }
  result = *(_DWORD *)(this + 5224);
  if ( result != -1 )
  {
    v12 = (unsigned int *)&v4[4 * (*(_DWORD *)(this + 5224) & 0xFFF) + 1];
    v13 = result >> 12;
    if ( v4[4 * (*(_DWORD *)(this + 5224) & 0xFFF) + 2] == *(_DWORD *)(this + 5224) >> 12 )
    {
      if ( *v12 )
      {
        result = *(_DWORD *)(this + 5228);
        if ( result != -1 )
        {
          result >>= 12;
          if ( v4[4 * (*(_DWORD *)(this + 5228) & 0xFFF) + 2] == result )
          {
            if ( v4[4 * (*(_DWORD *)(this + 5228) & 0xFFF) + 1] )
            {
              result = *(_DWORD *)(this + 5232);
              if ( result != -1 )
              {
                result >>= 12;
                if ( v4[4 * (*(_DWORD *)(this + 5232) & 0xFFF) + 2] == result )
                {
                  if ( v4[4 * (*(_DWORD *)(this + 5232) & 0xFFF) + 1] )
                  {
                    if ( v4[4 * (*(_DWORD *)(this + 5224) & 0xFFF) + 2] == v13 )
                      v14 = *v12;
                    else
                      v14 = 0;
                    v15 = a2;
                    sub_1017D110(v14, a2);
                    a2 = *(unsigned int **)(v14 + 800);
                    sub_102DE000((_DWORD *)(this + 5048), &a2);
                    v16 = *(_DWORD *)(this + 5228);
                    if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 5228) & 0xFFF) + 2] != v16 >> 12 )
                      v17 = 0;
                    else
                      v17 = off_1061BE18[4 * (*(_DWORD *)(this + 5228) & 0xFFF) + 1];
                    sub_1017D110(v17, v15);
                    a2 = *(unsigned int **)(v17 + 800);
                    sub_102DE0A0((_DWORD *)(this + 5056), &a2);
                    v18 = *(_DWORD *)(this + 5232);
                    if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 5232) & 0xFFF) + 2] != v18 >> 12 )
                      v19 = 0;
                    else
                      v19 = off_1061BE18[4 * (*(_DWORD *)(this + 5232) & 0xFFF) + 1];
                    sub_1017D110(v19, v15);
                    a2 = *(unsigned int **)(v19 + 800);
                    sub_102DE050((_DWORD *)(this + 5052), &a2);
                    HIBYTE(a2) = *(_BYTE *)(this + 5060) == 0;
                    return (unsigned int)sub_102E0300((_BYTE *)(this + 5060), (_BYTE *)&a2 + 3);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
