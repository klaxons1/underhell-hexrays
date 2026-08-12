int __thiscall sub_101F8930(unsigned __int16 *this, int a2, int a3, int a4, int a5, char a6)
{
  int v7; // esi
  int v8; // edx
  int v9; // edx
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  char v15; // cl
  bool v16; // bl
  int v17; // edx
  int v18; // eax
  float *v19; // ecx
  void (__thiscall *v20)(unsigned __int16 *); // eax
  int result; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // esi
  int v25; // eax
  int v26; // edx
  unsigned __int16 v27; // ax
  int v28; // esi
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // edi
  float v33; // [esp+Ch] [ebp-10h]
  int v34; // [esp+18h] [ebp-4h]

  v7 = *((_DWORD *)this + 892) + 36 * sub_101F2CB0((int *)this + 892, *((_DWORD *)this + 895));
  v8 = a4;
  v34 = a4 - 1;
  if ( a4 - 1 >= 0 )
  {
    v9 = a2;
    do
    {
      v10 = *(_DWORD *)(v7 + 12);
      v11 = *(_DWORD *)(v7 + 4);
      if ( v10 + 1 > v11 )
      {
        sub_101E7DF0((_DWORD *)v7, v10 - v11 + 1);
        v9 = a2;
      }
      ++*(_DWORD *)(v7 + 12);
      v12 = *(_DWORD *)v7;
      v13 = *(_DWORD *)(v7 + 12) - v10 - 1;
      *(_DWORD *)(v7 + 16) = *(_DWORD *)v7;
      if ( v13 > 0 )
      {
        memcpy((void *)(84 * v10 + v12 + 84), (const void *)(84 * v10 + v12), 84 * v13);
        v9 = a2;
      }
      v14 = (_DWORD *)(*(_DWORD *)v7 + 84 * v10);
      if ( v14 )
      {
        *v14 = &CUserCmd::`vftable';
        v14[16] = 0;
        v14[17] = 0;
        v14[18] = 0;
        v14[19] = 0;
        v14[20] = 0;
        sub_101F7FB0((int)v14, v9);
        v9 = a2;
      }
      v9 += 84;
      --v34;
      a2 = v9;
    }
    while ( v34 >= 0 );
    v8 = a4;
  }
  *(_DWORD *)(v7 + 28) = a5;
  v15 = a6;
  *(_DWORD *)(v7 + 20) = a3;
  *(_DWORD *)(v7 + 24) = v8;
  *(_BYTE *)(v7 + 32) = a6;
  if ( a6 )
  {
    v16 = 1;
    if ( *((_BYTE *)this + 306) == 8 && *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48) )
      v16 = *(_DWORD *)(dword_106BBA84 + 48) == 0;
    v17 = 0;
    if ( a3 > 0 )
    {
      v18 = 0;
      do
      {
        *(_DWORD *)(*(_DWORD *)v7 + v18 + 36) = 0;
        if ( v16 )
        {
          *(float *)(*(_DWORD *)v7 + v18 + 24) = 0.0;
          *(float *)(*(_DWORD *)v7 + v18 + 28) = 0.0;
          *(float *)(*(_DWORD *)v7 + v18 + 32) = 0.0;
          v19 = (float *)(*(_DWORD *)v7 + v18 + 12);
          *v19 = *((float *)this + 812);
          v19[1] = *((float *)this + 813);
          v19[2] = *((float *)this + 814);
        }
        ++v17;
        v18 += 84;
      }
      while ( v17 < *(_DWORD *)(v7 + 20) );
      v15 = a6;
    }
    *(_DWORD *)(v7 + 28) = 0;
  }
  *((_BYTE *)this + 4220) = v15;
  if ( v15 )
  {
    v20 = *(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 400);
    *((_DWORD *)this + 61) = -1;
    v20(this);
  }
  result = *(_DWORD *)(dword_106BBCDC + 48);
  if ( result > 0 )
  {
    v33 = *(float *)dword_106B31C8;
    if ( this[2455] >= result )
    {
      do
      {
        v22 = this[2452];
        v23 = v22;
        if ( v22 < *((_DWORD *)this + 1224) && (unsigned __int16)v22 <= this[2456] )
        {
          v24 = *((_DWORD *)this + 1223);
          v25 = v24 + 16 * v22;
          if ( *(_WORD *)(v25 + 12) != (_WORD)v22 )
          {
            v26 = *(unsigned __int16 *)(v25 + 12);
            if ( (_WORD)v26 == 0xFFFF )
              this[2452] = *(_WORD *)(v25 + 14);
            else
              *(_WORD *)(v24 + 16 * v26 + 14) = *(_WORD *)(v25 + 14);
            v23 = v22;
            if ( *(_WORD *)(v25 + 14) == 0xFFFF )
            {
              this[2453] = *(_WORD *)(v25 + 12);
            }
            else
            {
              *(_WORD *)(*((_DWORD *)this + 1223) + 16 * *(unsigned __int16 *)(v25 + 14) + 12) = *(_WORD *)(v25 + 12);
              v23 = v22;
            }
            *(_WORD *)(v25 + 14) = v22;
            *(_WORD *)(v25 + 12) = v22;
            --this[2455];
          }
        }
        *(_WORD *)(*((_DWORD *)this + 1223) + 16 * v23 + 14) = this[2454];
        this[2454] = v22;
      }
      while ( this[2455] >= *(int *)(dword_106BBCDC + 48) );
    }
    v27 = sub_101EA2C0((int *)this + 1223, 0);
    v28 = v27;
    sub_101EF1D0((int *)this + 1223, v27);
    v29 = *((_DWORD *)this + 1223);
    v30 = 16 * v28;
    *(_WORD *)(v29 + v30 + 14) = -1;
    v31 = this[2453];
    *(_WORD *)(v29 + v30 + 12) = v31;
    result = 0xFFFF;
    this[2453] = v28;
    if ( (_WORD)v31 == 0xFFFF )
    {
      this[2452] = v28;
    }
    else
    {
      result = *((_DWORD *)this + 1223);
      *(_WORD *)(result + 16 * v31 + 14) = v28;
    }
    ++this[2455];
    v32 = v30 + *((_DWORD *)this + 1223);
    if ( v32 )
    {
      result = a5;
      *(float *)v32 = v33;
      *(_DWORD *)(v32 + 4) = a3;
      *(_DWORD *)(v32 + 8) = a5;
    }
  }
  return result;
}
