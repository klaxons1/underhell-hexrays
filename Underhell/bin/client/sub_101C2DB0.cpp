int __usercall sub_101C2DB0@<eax>(signed int a1@<eax>, int a2, int *a3, signed int a4)
{
  int result; // eax
  int v6; // edi
  void *v7; // esp
  int v8; // ecx
  int v9; // esi
  unsigned __int16 *v10; // ebx
  bool v11; // zf
  int *v12; // esi
  int *v13; // ebx
  int *v14; // ecx
  int *v15; // eax
  int v16; // edx
  int v17; // [esp+0h] [ebp-40h] BYREF
  int v18; // [esp+Ch] [ebp-34h]
  unsigned __int8 v19[4]; // [esp+10h] [ebp-30h] BYREF
  unsigned __int8 v20[4]; // [esp+14h] [ebp-2Ch] BYREF
  unsigned __int8 v21[4]; // [esp+18h] [ebp-28h] BYREF
  unsigned __int8 v22[4]; // [esp+1Ch] [ebp-24h] BYREF
  int v23; // [esp+20h] [ebp-20h]
  int *v24; // [esp+24h] [ebp-1Ch]
  int v25; // [esp+28h] [ebp-18h]
  unsigned __int16 *v26; // [esp+2Ch] [ebp-14h]
  int v27; // [esp+30h] [ebp-10h]
  int *v28; // [esp+34h] [ebp-Ch]
  int *v29; // [esp+38h] [ebp-8h]
  signed int v30; // [esp+3Ch] [ebp-4h]

  result = a4;
  v6 = 0;
  v30 = 0;
  v23 = 0;
  v24 = 0;
  if ( a4 < 4 || a1 < 4 )
  {
    v30 = a4;
    v23 = a1;
    a4 = (a4 + 3) & 0xFFFFFFFC;
    a1 = (a1 + 3) & 0xFFFFFFFC;
    v24 = a3;
    v7 = alloca(2 * a1 * a4);
    result = a4;
    v6 = v30;
    a3 = &v17;
  }
  v8 = result >> 2;
  v9 = a1 >> 2;
  v18 = result >> 2;
  if ( v9 > 0 )
  {
    v10 = (unsigned __int16 *)a2;
    v28 = a3;
    v26 = (unsigned __int16 *)a2;
    v25 = v9;
    do
    {
      if ( v8 > 0 )
      {
        v29 = v28;
        v27 = v8;
        do
        {
          sub_101BF6F0(v10, &a2, v22, v21, v19, v20);
          sub_101C1350(v29, a4, v19, v20, (int)v10, v21, v22);
          v29 += 2;
          v10 += 4;
          --v27;
        }
        while ( v27 );
        result = a4;
        v6 = v30;
        v8 = v18;
      }
      v10 = &v26[4 * v8];
      v28 += 2 * result;
      v11 = v25-- == 1;
      v26 = v10;
    }
    while ( !v11 );
  }
  v12 = v24;
  if ( v24 && v23 > 0 )
  {
    v13 = a3;
    a2 = 2 * result;
    a4 = v23;
    do
    {
      if ( v6 > 0 )
      {
        v14 = v12;
        v15 = v13;
        v16 = v6;
        do
        {
          *(_WORD *)v14 = *(_WORD *)v15;
          v15 = (int *)((char *)v15 + 2);
          v14 = (int *)((char *)v14 + 2);
          --v16;
        }
        while ( v16 );
        v6 = v30;
      }
      v13 = (int *)((char *)v13 + a2);
      result = 2 * v6;
      v12 = (int *)((char *)v12 + 2 * v6);
      --a4;
    }
    while ( a4 );
  }
  return result;
}
