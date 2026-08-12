__int16 *__thiscall sub_1042F910(int *this, __int16 *a2, const char *Src)
{
  const char *v3; // esi
  __int16 *result; // eax
  __int16 v6; // ax
  signed int v7; // edi
  int v8; // eax
  int *v9; // esi
  signed int *v10; // ecx
  int v11; // edi
  int v12; // eax
  int v13; // edx
  int v14; // eax
  signed int **v15; // eax
  int v16; // esi
  __int16 v17; // ax
  signed int v18; // [esp+8h] [ebp-8h]
  __int16 v19; // [esp+8h] [ebp-8h]
  int v20; // [esp+Ch] [ebp-4h] BYREF

  v3 = Src;
  if ( Src )
  {
    this[8] = (int)Src;
    v20 = -1;
    v6 = sub_1042EE90((int)this, (unsigned __int16 *)&v20);
    if ( v6 == -1 )
    {
      v7 = strlen(v3) + 1;
      v8 = 0;
      v18 = v7;
      if ( this[12] <= 0 )
        goto LABEL_10;
      v9 = this + 9;
      v20 = this[9];
      while ( **(_DWORD **)v20 - *(_DWORD *)(*(_DWORD *)v20 + 4) < v7 )
      {
        v20 += 4;
        if ( ++v8 >= this[12] )
          goto LABEL_10;
      }
      v20 = v8;
      if ( v8 == -1 )
      {
LABEL_10:
        if ( v7 <= 2048 )
          v7 = 2048;
        v10 = (signed int *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, v7 + 11);
        v9 = this + 9;
        *v10 = v7;
        v10[1] = 0;
        v11 = this[12];
        v12 = this[10];
        v20 = (int)v10;
        if ( v11 + 1 > v12 )
        {
          sub_102ABFC0(this + 9, v11 - v12 + 1);
          v10 = (signed int *)v20;
        }
        ++this[12];
        v13 = *v9;
        v14 = this[12] - v11 - 1;
        this[13] = this[9];
        if ( v14 > 0 )
        {
          memcpy((void *)(v13 + 4 * v11 + 4), (const void *)(v13 + 4 * v11), 4 * v14);
          v10 = (signed int *)v20;
        }
        v15 = (signed int **)(*v9 + 4 * v11);
        if ( v15 )
          *v15 = v10;
        v20 = v11;
        v7 = v18;
      }
      v16 = *(_DWORD *)(*v9 + 4 * v20);
      v19 = *(_WORD *)(v16 + 4);
      memcpy_0((void *)(v16 + *(_DWORD *)(v16 + 4) + 8), Src, v7);
      v17 = v20;
      *(_DWORD *)(v16 + 4) += v7;
      HIWORD(Src) = v19;
      LOWORD(Src) = v17;
      v6 = sub_1042F840((int)this, (unsigned __int16 *)&Src);
    }
    *a2 = v6;
    return a2;
  }
  else
  {
    result = a2;
    *a2 = -1;
  }
  return result;
}
