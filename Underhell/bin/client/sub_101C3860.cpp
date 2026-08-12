int __usercall sub_101C3860@<eax>(signed int a1@<eax>, int a2, int *a3, signed int a4)
{
  int result; // eax
  int v6; // edi
  void *v7; // esp
  int v8; // edx
  int v9; // esi
  int v10; // ecx
  unsigned __int16 *v11; // ebx
  unsigned __int16 *v12; // ebx
  int *v13; // esi
  int *v14; // ebx
  int *v15; // ecx
  int *v16; // eax
  int v17; // edx
  int v18; // [esp+0h] [ebp-44h] BYREF
  int v19; // [esp+Ch] [ebp-38h]
  int v20; // [esp+10h] [ebp-34h]
  unsigned __int8 v21[4]; // [esp+14h] [ebp-30h] BYREF
  unsigned __int8 v22[4]; // [esp+18h] [ebp-2Ch] BYREF
  unsigned __int8 v23[4]; // [esp+1Ch] [ebp-28h] BYREF
  unsigned __int8 v24[4]; // [esp+20h] [ebp-24h] BYREF
  int v25; // [esp+24h] [ebp-20h]
  int *v26; // [esp+28h] [ebp-1Ch]
  int v27; // [esp+2Ch] [ebp-18h]
  int v28; // [esp+30h] [ebp-14h]
  int *v29; // [esp+34h] [ebp-10h]
  int v30; // [esp+38h] [ebp-Ch]
  int *v31; // [esp+3Ch] [ebp-8h]
  signed int v32; // [esp+40h] [ebp-4h]

  result = a4;
  v6 = 0;
  v32 = 0;
  v25 = 0;
  v26 = 0;
  if ( a4 < 4 || a1 < 4 )
  {
    v32 = a4;
    v25 = a1;
    a4 = (a4 + 3) & 0xFFFFFFFC;
    a1 = (a1 + 3) & 0xFFFFFFFC;
    v26 = a3;
    v7 = alloca(2 * a1 * a4);
    result = a4;
    v6 = v32;
    a3 = &v18;
  }
  v8 = result >> 2;
  v9 = a1 >> 2;
  v20 = result >> 2;
  if ( v9 > 0 )
  {
    v29 = a3;
    v10 = 16 * v8;
    v19 = 16 * v8;
    v30 = a2;
    v27 = v9;
    do
    {
      v11 = (unsigned __int16 *)v30;
      if ( v8 > 0 )
      {
        v31 = v29;
        v28 = v8;
        do
        {
          v12 = v11 + 4;
          sub_101BF6F0(v12, &a2, v24, v23, v21, v22);
          sub_101C1350(v31, a4, v21, v22, (int)v12, v23, v24);
          v31 += 2;
          v11 = v12 + 4;
          --v28;
        }
        while ( v28 );
        result = a4;
        v6 = v32;
        v8 = v20;
        v10 = v19;
      }
      v30 += v10;
      v29 += 2 * result;
      --v27;
    }
    while ( v27 );
  }
  v13 = v26;
  if ( v26 && v25 > 0 )
  {
    v14 = a3;
    a2 = 2 * result;
    a4 = v25;
    do
    {
      if ( v6 > 0 )
      {
        v15 = v13;
        v16 = v14;
        v17 = v6;
        do
        {
          *(_WORD *)v15 = *(_WORD *)v16;
          v16 = (int *)((char *)v16 + 2);
          v15 = (int *)((char *)v15 + 2);
          --v17;
        }
        while ( v17 );
        v6 = v32;
      }
      v14 = (int *)((char *)v14 + a2);
      result = 2 * v6;
      v13 = (int *)((char *)v13 + 2 * v6);
      --a4;
    }
    while ( a4 );
  }
  return result;
}
