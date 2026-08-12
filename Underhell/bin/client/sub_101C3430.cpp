int __usercall sub_101C3430@<eax>(signed int a1@<eax>, int a2, int *a3, signed int a4)
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
  int v14; // edi
  int *v15; // esi
  bool v16; // zf
  int *v17; // esi
  int *v18; // edi
  int *v19; // ecx
  int *v20; // eax
  int v21; // [esp+0h] [ebp-4Ch] BYREF
  int v22; // [esp+Ch] [ebp-40h]
  int v23; // [esp+10h] [ebp-3Ch]
  int v24; // [esp+14h] [ebp-38h]
  unsigned __int8 *v25; // [esp+18h] [ebp-34h]
  int v26; // [esp+1Ch] [ebp-30h] BYREF
  int v27; // [esp+20h] [ebp-2Ch] BYREF
  int v28; // [esp+24h] [ebp-28h] BYREF
  int v29; // [esp+28h] [ebp-24h] BYREF
  int v30; // [esp+2Ch] [ebp-20h]
  int *v31; // [esp+30h] [ebp-1Ch]
  int v32; // [esp+34h] [ebp-18h]
  int v33; // [esp+38h] [ebp-14h]
  int v34; // [esp+3Ch] [ebp-10h]
  int *v35; // [esp+40h] [ebp-Ch]
  int *v36; // [esp+44h] [ebp-8h]
  signed int v37; // [esp+48h] [ebp-4h]

  result = a4;
  v6 = 0;
  v37 = 0;
  v30 = 0;
  v31 = 0;
  if ( a4 < 4 || a1 < 4 )
  {
    v37 = a4;
    v30 = a1;
    a4 = (a4 + 3) & 0xFFFFFFFC;
    a1 = (a1 + 3) & 0xFFFFFFFC;
    v31 = a3;
    v7 = alloca(4 * a1 * a4);
    result = a4;
    v6 = v37;
    a3 = &v21;
  }
  v8 = result >> 2;
  v9 = a1 >> 2;
  v24 = result >> 2;
  if ( v9 > 0 )
  {
    v10 = 16 * result;
    v36 = a3;
    v11 = (unsigned __int8 *)a2;
    v12 = 16 * v8;
    v23 = 16 * result;
    v22 = 16 * v8;
    v33 = a2;
    v32 = v9;
    do
    {
      if ( v8 > 0 )
      {
        v35 = v36;
        v34 = v8;
        do
        {
          v25 = v11;
          v13 = (unsigned __int16 *)(v11 + 8);
          sub_101BF6F0(v13, &a2, (unsigned __int8 *)&v27, (unsigned __int8 *)&v26, &v28, &v29);
          v14 = a4;
          v15 = v35;
          sub_101C1070(v35, (int)v13, a4, &v26, &v27, &v28, &v29);
          sub_101C16E0((char *)v15, v25, v14, 3);
          v11 = (unsigned __int8 *)(v13 + 4);
          v16 = v34-- == 1;
          v35 = v15 + 4;
        }
        while ( !v16 );
        v10 = v23;
        v12 = v22;
        result = v14;
        v8 = v24;
      }
      v36 = (int *)((char *)v36 + v10);
      v11 = (unsigned __int8 *)(v12 + v33);
      v16 = v32-- == 1;
      v33 += v12;
    }
    while ( !v16 );
    v6 = v37;
  }
  v17 = v31;
  if ( v31 && v30 > 0 )
  {
    v18 = a3;
    a2 = 4 * result;
    a4 = v30;
    do
    {
      if ( v6 > 0 )
      {
        v19 = v17;
        v20 = v18;
        do
        {
          *v19++ = *v20++;
          --v6;
        }
        while ( v6 );
        v6 = v37;
      }
      v18 = (int *)((char *)v18 + a2);
      result = 4 * v6;
      v17 += v6;
      --a4;
    }
    while ( a4 );
  }
  return result;
}
