void __cdecl qsort_s(
        void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        _CoreCrtSecureSearchSortCompareFunction CompareFunction,
        void *Context)
{
  _BYTE *v5; // ebx
  rsize_t v6; // esi
  _BYTE *v7; // edi
  unsigned int v8; // eax
  _BYTE *v9; // esi
  rsize_t v10; // edx
  _BYTE *v11; // eax
  int v12; // ecx
  rsize_t v13; // edx
  _BYTE *v14; // eax
  int v15; // ecx
  rsize_t v16; // edx
  _BYTE *v17; // eax
  int v18; // ecx
  rsize_t v19; // edx
  _BYTE *v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  _BYTE *v27; // edx
  _BYTE *v28; // eax
  _DWORD v29[60]; // [esp+8h] [ebp-100h]
  rsize_t v30; // [esp+F8h] [ebp-10h]
  int v31; // [esp+FCh] [ebp-Ch]
  _BYTE *v32; // [esp+100h] [ebp-8h]
  _BYTE *v33; // [esp+104h] [ebp-4h]
  char Base_3; // [esp+113h] [ebp+Bh]
  char Base_3a; // [esp+113h] [ebp+Bh]
  char Base_3b; // [esp+113h] [ebp+Bh]
  char Base_3c; // [esp+113h] [ebp+Bh]

  v5 = Base;
  if ( !Base && NumOfElements )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return;
  }
  v6 = SizeOfElements;
  if ( !SizeOfElements || !CompareFunction )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return;
  }
  if ( NumOfElements >= 2 )
  {
    v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
    v31 = 0;
    v33 = Base;
    v32 = v7;
    while ( 1 )
    {
      v8 = (v7 - v5) / v6 + 1;
      if ( v8 <= 8 )
      {
        shortsort_s(
          v7,
          (unsigned int)v5,
          v6,
          (int (__cdecl *)(int, unsigned int, unsigned int))CompareFunction,
          (int)Context);
        goto LABEL_56;
      }
      v9 = &v5[(v8 >> 1) * v6];
      if ( CompareFunction(Context, v5, v9) > 0 )
      {
        v10 = SizeOfElements;
        v11 = v9;
        if ( v5 != v9 )
        {
          v12 = v5 - v9;
          do
          {
            v30 = v10 - 1;
            Base_3 = v11[v12];
            v11[v12] = *v11;
            *v11 = Base_3;
            v10 = v30;
            ++v11;
          }
          while ( v30 );
        }
      }
      if ( CompareFunction(Context, v5, v7) > 0 )
      {
        v13 = SizeOfElements;
        v14 = v7;
        if ( v5 != v7 )
        {
          v15 = v5 - v7;
          do
          {
            v30 = v13 - 1;
            Base_3a = v14[v15];
            v14[v15] = *v14;
            *v14 = Base_3a;
            v13 = v30;
            ++v14;
          }
          while ( v30 );
        }
      }
      if ( CompareFunction(Context, v9, v7) > 0 )
      {
        v16 = SizeOfElements;
        v17 = v7;
        if ( v9 != v7 )
        {
          v18 = v9 - v7;
          do
          {
            Base_3b = v17[v18];
            v17[v18] = *v17;
            *v17++ = Base_3b;
            --v16;
          }
          while ( v16 );
          v5 = v33;
        }
      }
      while ( 1 )
      {
        if ( v9 > v5 )
        {
          while ( 1 )
          {
            v5 += SizeOfElements;
            if ( v5 >= v9 )
              break;
            if ( CompareFunction(Context, v5, v9) > 0 )
            {
              if ( v9 > v5 )
                goto LABEL_31;
              goto LABEL_29;
            }
          }
        }
        do
LABEL_29:
          v5 += SizeOfElements;
        while ( v5 <= v32 && CompareFunction(Context, v5, v9) <= 0 );
        do
LABEL_31:
          v7 -= SizeOfElements;
        while ( v7 > v9 && CompareFunction(Context, v7, v9) > 0 );
        if ( v5 > v7 )
          break;
        v19 = SizeOfElements;
        v20 = v7;
        if ( v5 != v7 )
        {
          v21 = v5 - v7;
          do
          {
            v30 = v19 - 1;
            Base_3c = v20[v21];
            v20[v21] = *v20;
            *v20 = Base_3c;
            v19 = v30;
            ++v20;
          }
          while ( v30 );
        }
        if ( v9 == v7 )
          v9 = v5;
      }
      v7 += SizeOfElements;
      if ( v9 >= v7 )
        goto LABEL_43;
      do
      {
        v7 -= SizeOfElements;
        if ( v7 <= v9 )
          goto LABEL_43;
      }
      while ( !CompareFunction(Context, v7, v9) );
      if ( v9 < v7 )
      {
LABEL_45:
        v22 = (unsigned int)v33;
      }
      else
      {
LABEL_43:
        while ( 1 )
        {
          v7 -= SizeOfElements;
          v22 = (unsigned int)v33;
          if ( v7 <= v33 )
            break;
          if ( CompareFunction(Context, v7, v9) )
            goto LABEL_45;
        }
      }
      v23 = (unsigned int)v32;
      if ( (int)&v7[-v22] < v32 - v5 )
      {
        if ( v5 < v32 )
        {
          v25 = v31;
          v29[v31 + 30] = v5;
          v29[v25] = v23;
          v31 = v25 + 1;
        }
        if ( v22 >= (unsigned int)v7 )
          goto LABEL_55;
        v5 = v33;
        v6 = SizeOfElements;
        v32 = v7;
      }
      else
      {
        if ( v22 < (unsigned int)v7 )
        {
          v24 = v31;
          v29[v31 + 30] = v22;
          v29[v24] = v7;
          v31 = v24 + 1;
        }
        if ( (unsigned int)v5 >= v23 )
        {
LABEL_55:
          v6 = SizeOfElements;
LABEL_56:
          v26 = --v31;
          if ( v31 < 0 )
            return;
          v27 = (_BYTE *)v29[v26 + 30];
          v28 = (_BYTE *)v29[v26];
          v33 = v27;
          v32 = v28;
          v5 = v27;
          v7 = v28;
        }
        else
        {
          v7 = v32;
          v6 = SizeOfElements;
          v33 = v5;
        }
      }
    }
  }
}
