int __usercall sub_101C3B10@<eax>(signed int a1@<eax>, int a2, int *a3, signed int a4)
{
  int result; // eax
  int v6; // edi
  void *v7; // esp
  int v8; // edx
  int v9; // esi
  int v10; // ecx
  unsigned __int8 *v11; // ebx
  unsigned __int16 *v12; // ebx
  int v13; // edi
  int *v14; // esi
  bool v15; // zf
  int *v16; // esi
  int *v17; // ebx
  int *v18; // ecx
  int *v19; // eax
  int v20; // edx
  int v21; // [esp+0h] [ebp-48h] BYREF
  int v22; // [esp+Ch] [ebp-3Ch]
  int v23; // [esp+10h] [ebp-38h]
  unsigned __int8 *v24; // [esp+14h] [ebp-34h]
  unsigned __int8 v25[4]; // [esp+18h] [ebp-30h] BYREF
  unsigned __int8 v26[4]; // [esp+1Ch] [ebp-2Ch] BYREF
  _BYTE v27[4]; // [esp+20h] [ebp-28h] BYREF
  _BYTE v28[4]; // [esp+24h] [ebp-24h] BYREF
  int v29; // [esp+28h] [ebp-20h]
  int *v30; // [esp+2Ch] [ebp-1Ch]
  int v31; // [esp+30h] [ebp-18h]
  int v32; // [esp+34h] [ebp-14h]
  int *v33; // [esp+38h] [ebp-10h]
  int *v34; // [esp+3Ch] [ebp-Ch]
  unsigned __int8 *v35; // [esp+40h] [ebp-8h]
  signed int v36; // [esp+44h] [ebp-4h]

  result = a4;
  v6 = 0;
  v36 = 0;
  v29 = 0;
  v30 = 0;
  if ( a4 < 4 || a1 < 4 )
  {
    v36 = a4;
    v29 = a1;
    a4 = (a4 + 3) & 0xFFFFFFFC;
    a1 = (a1 + 3) & 0xFFFFFFFC;
    v30 = a3;
    v7 = alloca(2 * a1 * a4);
    result = a4;
    v6 = v36;
    a3 = &v21;
  }
  v8 = result >> 2;
  v9 = a1 >> 2;
  v23 = result >> 2;
  if ( v9 > 0 )
  {
    v34 = a3;
    v10 = 16 * v8;
    v22 = 16 * v8;
    v35 = (unsigned __int8 *)a2;
    v31 = v9;
    do
    {
      v11 = v35;
      if ( v8 > 0 )
      {
        v33 = v34;
        v32 = v8;
        do
        {
          v24 = v11;
          v12 = (unsigned __int16 *)(v11 + 8);
          sub_101BF6F0(v12, &a2, v26, v25, v27, v28);
          v13 = a4;
          v14 = v33;
          sub_101C1610(a4, v33, (int)v12, v25, v26, v27, v28);
          sub_101C2030(v14, v24, v13, 3);
          v11 = (unsigned __int8 *)(v12 + 4);
          v15 = v32-- == 1;
          v33 = v14 + 2;
        }
        while ( !v15 );
        v8 = v23;
        v10 = v22;
        result = v13;
        v6 = v36;
      }
      v35 += v10;
      v34 += 2 * result;
      --v31;
    }
    while ( v31 );
  }
  v16 = v30;
  if ( v30 && v29 > 0 )
  {
    v17 = a3;
    a2 = 2 * result;
    a4 = v29;
    do
    {
      if ( v6 > 0 )
      {
        v18 = v16;
        v19 = v17;
        v20 = v6;
        do
        {
          *(_WORD *)v18 = *(_WORD *)v19;
          v19 = (int *)((char *)v19 + 2);
          v18 = (int *)((char *)v18 + 2);
          --v20;
        }
        while ( v20 );
        v6 = v36;
      }
      v17 = (int *)((char *)v17 + a2);
      result = 2 * v6;
      v16 = (int *)((char *)v16 + 2 * v6);
      --a4;
    }
    while ( a4 );
  }
  return result;
}
