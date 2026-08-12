int __usercall sub_101C3040@<eax>(signed int a1@<eax>, int a2, int *a3, signed int a4)
{
  int result; // eax
  int v6; // edi
  void *v7; // esp
  int v8; // ecx
  int v9; // esi
  unsigned __int16 *v10; // ebx
  int *v11; // esi
  bool v12; // zf
  int *v13; // esi
  int *v14; // ebx
  int *v15; // ecx
  int *v16; // eax
  int v17; // edx
  int v18; // [esp+0h] [ebp-40h] BYREF
  int v19; // [esp+Ch] [ebp-34h]
  unsigned __int8 v20[4]; // [esp+10h] [ebp-30h] BYREF
  unsigned __int8 v21[4]; // [esp+14h] [ebp-2Ch] BYREF
  _BYTE v22[4]; // [esp+18h] [ebp-28h] BYREF
  _BYTE v23[4]; // [esp+1Ch] [ebp-24h] BYREF
  int v24; // [esp+20h] [ebp-20h]
  int *v25; // [esp+24h] [ebp-1Ch]
  int v26; // [esp+28h] [ebp-18h]
  unsigned __int16 *v27; // [esp+2Ch] [ebp-14h]
  int v28; // [esp+30h] [ebp-10h]
  int *v29; // [esp+34h] [ebp-Ch]
  int *v30; // [esp+38h] [ebp-8h]
  signed int v31; // [esp+3Ch] [ebp-4h]

  result = a4;
  v6 = 0;
  v31 = 0;
  v24 = 0;
  v25 = 0;
  if ( a4 < 4 || a1 < 4 )
  {
    v31 = a4;
    v24 = a1;
    a4 = (a4 + 3) & 0xFFFFFFFC;
    a1 = (a1 + 3) & 0xFFFFFFFC;
    v25 = a3;
    v7 = alloca(2 * a1 * a4);
    result = a4;
    v6 = v31;
    a3 = &v18;
  }
  v8 = result >> 2;
  v9 = a1 >> 2;
  v19 = result >> 2;
  if ( v9 > 0 )
  {
    v10 = (unsigned __int16 *)a2;
    v30 = a3;
    v27 = (unsigned __int16 *)a2;
    v26 = v9;
    do
    {
      if ( v8 > 0 )
      {
        v29 = v30;
        v28 = v8;
        do
        {
          sub_101BF6F0(v10, &a2, v21, v20, v22, v23);
          v11 = v29;
          sub_101C1610(a4, v29, (int)v10, v20, v21, v22, v23);
          v10 += 4;
          v12 = v28-- == 1;
          v29 = v11 + 2;
        }
        while ( !v12 );
        result = a4;
        v6 = v31;
        v8 = v19;
      }
      v10 = &v27[4 * v8];
      v30 += 2 * result;
      v12 = v26-- == 1;
      v27 = v10;
    }
    while ( !v12 );
  }
  v13 = v25;
  if ( v25 && v24 > 0 )
  {
    v14 = a3;
    a2 = 2 * result;
    a4 = v24;
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
        v6 = v31;
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
