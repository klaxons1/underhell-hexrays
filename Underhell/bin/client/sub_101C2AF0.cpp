int __usercall sub_101C2AF0@<eax>(int a1@<eax>, unsigned __int16 *a2, int *a3, int a4)
{
  signed int v4; // ebx
  int v5; // edx
  signed int v6; // esi
  void *v7; // esp
  int result; // eax
  int v9; // esi
  int v10; // ecx
  int *v11; // esi
  bool v12; // zf
  int *v13; // edi
  int v14; // ecx
  int *v15; // ebx
  int *v16; // ecx
  int v17; // esi
  int v18; // [esp+0h] [ebp-44h] BYREF
  int v19; // [esp+Ch] [ebp-38h]
  int v20; // [esp+10h] [ebp-34h]
  char v21[4]; // [esp+14h] [ebp-30h] BYREF
  char v22[4]; // [esp+18h] [ebp-2Ch] BYREF
  char v23[4]; // [esp+1Ch] [ebp-28h] BYREF
  char v24[4]; // [esp+20h] [ebp-24h] BYREF
  int v25; // [esp+24h] [ebp-20h]
  int *v26; // [esp+28h] [ebp-1Ch]
  int v27; // [esp+2Ch] [ebp-18h]
  int v28; // [esp+30h] [ebp-14h]
  int *v29; // [esp+34h] [ebp-10h]
  int *v30; // [esp+38h] [ebp-Ch]
  unsigned __int16 *v31; // [esp+3Ch] [ebp-8h]
  int v32; // [esp+40h] [ebp-4h]
  unsigned __int16 *v33; // [esp+4Ch] [ebp+8h]
  int v34; // [esp+4Ch] [ebp+8h]
  int v35; // [esp+50h] [ebp+Ch]

  v4 = a4;
  v5 = 0;
  v6 = a1;
  v32 = 0;
  v25 = 0;
  v26 = 0;
  if ( a4 < 4 || a1 < 4 )
  {
    v32 = a4;
    v25 = a1;
    v26 = a3;
    v4 = (a4 + 3) & 0xFFFFFFFC;
    v6 = (a1 + 3) & 0xFFFFFFFC;
    v7 = alloca(3 * v6 * v4);
    v5 = a4;
    a3 = &v18;
  }
  result = v4 >> 2;
  v9 = v6 >> 2;
  v20 = v4 >> 2;
  if ( v9 > 0 )
  {
    v30 = a3;
    v10 = 12 * v4;
    v19 = 12 * v4;
    v31 = a2;
    v27 = v9;
    do
    {
      v33 = v31;
      if ( result > 0 )
      {
        v29 = v30;
        v28 = result;
        do
        {
          sub_101BF6F0(v33, &a4, (unsigned __int8 *)v22, (unsigned __int8 *)v21, v23, v24);
          v11 = v29;
          sub_101C1140(v29, v4, (int)v33, v21, v22, v23, v24);
          v12 = v28-- == 1;
          v29 = v11 + 3;
          v33 += 4;
        }
        while ( !v12 );
        result = v20;
        v10 = v19;
      }
      v30 = (int *)((char *)v30 + v10);
      v31 += 4 * result;
      --v27;
    }
    while ( v27 );
    v5 = v32;
  }
  v13 = v26;
  if ( v26 )
  {
    result = v25;
    if ( v25 > 0 )
    {
      v14 = 3 * v4;
      v15 = a3;
      v34 = v14;
      a4 = 3 * v5;
      v35 = v25;
      do
      {
        if ( v5 > 0 )
        {
          v16 = v13;
          result = (int)v15;
          v17 = v5;
          do
          {
            *(_WORD *)v16 = *(_WORD *)result;
            *((_BYTE *)v16 + 2) = *(_BYTE *)(result + 2);
            result += 3;
            v16 = (int *)((char *)v16 + 3);
            --v17;
          }
          while ( v17 );
          v5 = v32;
        }
        v13 = (int *)((char *)v13 + a4);
        v15 = (int *)((char *)v15 + v34);
        --v35;
      }
      while ( v35 );
    }
  }
  return result;
}
