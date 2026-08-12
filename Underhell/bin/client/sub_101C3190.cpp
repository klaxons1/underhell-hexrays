int __usercall sub_101C3190@<eax>(int a1@<eax>, int a2@<ecx>, unsigned __int8 *a3, int *a4, char a5)
{
  signed int v5; // edi
  signed int v6; // esi
  void *v7; // esp
  int result; // eax
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  unsigned __int8 *v12; // esi
  char *v13; // ebx
  int *v14; // esi
  int v15; // edx
  int v16; // ecx
  int *v17; // edi
  int *v18; // ecx
  int *v19; // eax
  int v20; // [esp+0h] [ebp-30h] BYREF
  int v21; // [esp+Ch] [ebp-24h]
  int v22; // [esp+10h] [ebp-20h]
  int v23; // [esp+14h] [ebp-1Ch]
  int v24; // [esp+18h] [ebp-18h]
  int *v25; // [esp+1Ch] [ebp-14h]
  int v26; // [esp+20h] [ebp-10h]
  int v27; // [esp+24h] [ebp-Ch]
  int v28; // [esp+28h] [ebp-8h]
  char *v29; // [esp+2Ch] [ebp-4h]
  int v30; // [esp+38h] [ebp+8h]
  int v31; // [esp+40h] [ebp+10h]

  v5 = a2;
  v6 = a1;
  v28 = 0;
  v24 = 0;
  v25 = 0;
  if ( a2 < 4 || a1 < 4 )
  {
    v28 = a2;
    v25 = a4;
    v24 = a1;
    v5 = (a2 + 3) & 0xFFFFFFFC;
    v6 = (a1 + 3) & 0xFFFFFFFC;
    v7 = alloca(4 * v6 * v5);
    a4 = &v20;
  }
  result = v5 >> 2;
  v9 = v6 >> 2;
  v23 = v5 >> 2;
  if ( v9 > 0 )
  {
    v10 = 16 * v5;
    v11 = result * (8 * (a5 != 0) + 8);
    v29 = (char *)a4;
    v22 = 16 * v5;
    v21 = v11;
    v26 = v9;
    do
    {
      v12 = a3;
      if ( result > 0 )
      {
        v13 = v29;
        v27 = result;
        do
        {
          sub_101C16E0(v13, v12, v5, 0);
          if ( a5 )
          {
            v12 += 8;
            sub_101C16E0(v13, v12, v5, 1);
          }
          v13 += 16;
          v12 += 8;
          --v27;
        }
        while ( v27 );
        result = v23;
        v10 = v22;
        v11 = v21;
      }
      a3 += v11;
      v29 += v10;
      --v26;
    }
    while ( v26 );
  }
  v14 = v25;
  if ( v25 )
  {
    result = v24;
    if ( v24 > 0 )
    {
      v15 = v28;
      v16 = 4 * v5;
      v17 = a4;
      v30 = v16;
      v31 = v24;
      do
      {
        if ( v15 > 0 )
        {
          v18 = v14;
          v19 = v17;
          do
          {
            *v18++ = *v19++;
            --v15;
          }
          while ( v15 );
        }
        v15 = v28;
        v17 = (int *)((char *)v17 + v30);
        result = 4 * v28;
        v14 += v28;
        --v31;
      }
      while ( v31 );
    }
  }
  return result;
}
