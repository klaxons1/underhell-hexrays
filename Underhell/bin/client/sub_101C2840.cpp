int __usercall sub_101C2840@<eax>(int a1@<eax>, int a2, int *a3, signed int a4)
{
  int v4; // edx
  int v5; // edi
  signed int v6; // esi
  void *v7; // esp
  int result; // eax
  int v9; // esi
  unsigned __int16 *v10; // ebx
  int v11; // ecx
  int *v12; // esi
  bool v13; // zf
  int *v14; // esi
  int *v15; // ebx
  int *v16; // ecx
  int *v17; // eax
  int v18; // edx
  int v19; // [esp+0h] [ebp-44h] BYREF
  int v20; // [esp+Ch] [ebp-38h]
  int v21; // [esp+10h] [ebp-34h]
  _BYTE v22[4]; // [esp+14h] [ebp-30h] BYREF
  unsigned __int8 v23[4]; // [esp+18h] [ebp-2Ch] BYREF
  unsigned __int8 v24[4]; // [esp+1Ch] [ebp-28h] BYREF
  _BYTE v25[4]; // [esp+20h] [ebp-24h] BYREF
  int v26; // [esp+24h] [ebp-20h]
  int *v27; // [esp+28h] [ebp-1Ch]
  int v28; // [esp+2Ch] [ebp-18h]
  unsigned __int16 *v29; // [esp+30h] [ebp-14h]
  int v30; // [esp+34h] [ebp-10h]
  int *v31; // [esp+38h] [ebp-Ch]
  int *v32; // [esp+3Ch] [ebp-8h]
  int v33; // [esp+40h] [ebp-4h]

  v4 = a4;
  v5 = 0;
  v6 = a1;
  v33 = 0;
  v26 = 0;
  v27 = 0;
  if ( a4 < 4 || a1 < 4 )
  {
    v26 = a1;
    a4 = (a4 + 3) & 0xFFFFFFFC;
    v6 = (a1 + 3) & 0xFFFFFFFC;
    v33 = v4;
    v27 = a3;
    v7 = alloca(4 * v6 * a4);
    v4 = a4;
    v5 = v33;
    a3 = &v19;
  }
  result = v4 >> 2;
  v9 = v6 >> 2;
  v21 = v4 >> 2;
  if ( v9 > 0 )
  {
    v32 = a3;
    v10 = (unsigned __int16 *)a2;
    v11 = 16 * v4;
    v20 = 16 * v4;
    v29 = (unsigned __int16 *)a2;
    v28 = v9;
    do
    {
      if ( result > 0 )
      {
        v31 = v32;
        v30 = result;
        do
        {
          sub_101BF6F0(v10, &a2, v24, v23, v25, v22);
          v12 = v31;
          sub_101C0F30(v31, a4, v22, (int)v10, v23, v24, v25);
          v10 += 4;
          v13 = v30-- == 1;
          v31 = v12 + 4;
        }
        while ( !v13 );
        v4 = a4;
        v5 = v33;
        result = v21;
        v11 = v20;
      }
      v32 = (int *)((char *)v32 + v11);
      v10 = &v29[4 * result];
      v13 = v28-- == 1;
      v29 = v10;
    }
    while ( !v13 );
  }
  v14 = v27;
  if ( v27 )
  {
    result = v26;
    if ( v26 > 0 )
    {
      v15 = a3;
      a2 = 4 * v4;
      a4 = v26;
      do
      {
        if ( v5 > 0 )
        {
          v16 = v14;
          v17 = v15;
          v18 = v5;
          do
          {
            *v16++ = *v17++;
            --v18;
          }
          while ( v18 );
          v5 = v33;
        }
        v15 = (int *)((char *)v15 + a2);
        result = 4 * v5;
        v14 += v5;
        --a4;
      }
      while ( a4 );
    }
  }
  return result;
}
