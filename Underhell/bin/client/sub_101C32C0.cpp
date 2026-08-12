int __usercall sub_101C32C0@<eax>(signed int a1@<eax>, int a2, int *a3, signed int a4)
{
  int result; // eax
  int v6; // edx
  void *v7; // esp
  int v8; // edi
  int v9; // esi
  int v10; // ecx
  unsigned __int8 *v11; // ebx
  int v12; // edx
  unsigned __int16 *v13; // ebx
  char *v14; // esi
  bool v15; // zf
  int *v16; // esi
  int *v17; // edi
  int *v18; // ecx
  int *v19; // eax
  int v20; // [esp+0h] [ebp-4Ch] BYREF
  int v21; // [esp+Ch] [ebp-40h]
  int v22; // [esp+10h] [ebp-3Ch]
  int v23; // [esp+14h] [ebp-38h]
  unsigned __int8 *v24; // [esp+18h] [ebp-34h]
  char v25[4]; // [esp+1Ch] [ebp-30h] BYREF
  unsigned __int8 v26[4]; // [esp+20h] [ebp-2Ch] BYREF
  unsigned __int8 v27[4]; // [esp+24h] [ebp-28h] BYREF
  char v28[4]; // [esp+28h] [ebp-24h] BYREF
  int v29; // [esp+2Ch] [ebp-20h]
  int *v30; // [esp+30h] [ebp-1Ch]
  int v31; // [esp+34h] [ebp-18h]
  int v32; // [esp+38h] [ebp-14h]
  int v33; // [esp+3Ch] [ebp-10h]
  char *v34; // [esp+40h] [ebp-Ch]
  char *v35; // [esp+44h] [ebp-8h]
  signed int v36; // [esp+48h] [ebp-4h]

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
    v7 = alloca(4 * a1 * a4);
    result = a4;
    v6 = v36;
    a3 = &v20;
  }
  v8 = result >> 2;
  v9 = a1 >> 2;
  v23 = result >> 2;
  if ( v9 > 0 )
  {
    v10 = 16 * result;
    v35 = (char *)a3;
    v11 = (unsigned __int8 *)a2;
    v12 = 16 * v8;
    v22 = 16 * result;
    v21 = 16 * v8;
    v32 = a2;
    v31 = v9;
    do
    {
      if ( v8 > 0 )
      {
        v34 = v35;
        v33 = v8;
        do
        {
          v24 = v11;
          v13 = (unsigned __int16 *)(v11 + 8);
          sub_101BF6F0(v13, &a2, v27, v26, v28, v25);
          v14 = v34;
          sub_101C0F30(v34, a4, v25, (int)v13, v26, v27, v28);
          sub_101C19F0(v14, v24, a4, 3);
          v11 = (unsigned __int8 *)(v13 + 4);
          v15 = v33-- == 1;
          v34 = v14 + 16;
        }
        while ( !v15 );
        result = a4;
        v8 = v23;
        v10 = v22;
        v12 = v21;
      }
      v35 += v10;
      v11 = (unsigned __int8 *)(v12 + v32);
      v15 = v31-- == 1;
      v32 += v12;
    }
    while ( !v15 );
    v6 = v36;
  }
  v16 = v30;
  if ( v30 && v29 > 0 )
  {
    v17 = a3;
    a2 = 4 * result;
    a4 = v29;
    do
    {
      if ( v6 > 0 )
      {
        v18 = v16;
        v19 = v17;
        do
        {
          *v18++ = *v19++;
          --v6;
        }
        while ( v6 );
        v6 = v36;
      }
      v17 = (int *)((char *)v17 + a2);
      result = 4 * v6;
      v16 += v6;
      --a4;
    }
    while ( a4 );
  }
  return result;
}
