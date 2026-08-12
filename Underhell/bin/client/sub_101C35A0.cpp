int __usercall sub_101C35A0@<eax>(signed int a1@<eax>, int a2, int *a3, signed int a4)
{
  int result; // eax
  int v6; // edx
  void *v7; // esp
  int v8; // edi
  int v9; // esi
  int v10; // ecx
  unsigned __int16 *v11; // ebx
  int v12; // edx
  unsigned __int16 *v13; // ebx
  int *v14; // esi
  bool v15; // zf
  int *v16; // edi
  int *v17; // ecx
  int v18; // esi
  int v19; // [esp+0h] [ebp-48h] BYREF
  int v20; // [esp+Ch] [ebp-3Ch]
  int v21; // [esp+10h] [ebp-38h]
  int v22; // [esp+14h] [ebp-34h]
  char v23[4]; // [esp+18h] [ebp-30h] BYREF
  char v24[4]; // [esp+1Ch] [ebp-2Ch] BYREF
  char v25[4]; // [esp+20h] [ebp-28h] BYREF
  char v26[4]; // [esp+24h] [ebp-24h] BYREF
  int v27; // [esp+28h] [ebp-20h]
  int *v28; // [esp+2Ch] [ebp-1Ch]
  int v29; // [esp+30h] [ebp-18h]
  int v30; // [esp+34h] [ebp-14h]
  int v31; // [esp+38h] [ebp-10h]
  int *v32; // [esp+3Ch] [ebp-Ch]
  signed int v33; // [esp+40h] [ebp-8h]
  int *v34; // [esp+44h] [ebp-4h]

  result = a4;
  v6 = 0;
  v33 = 0;
  v27 = 0;
  v28 = 0;
  if ( a4 < 4 || a1 < 4 )
  {
    v33 = a4;
    v27 = a1;
    a4 = (a4 + 3) & 0xFFFFFFFC;
    a1 = (a1 + 3) & 0xFFFFFFFC;
    v28 = a3;
    v7 = alloca(3 * a1 * a4);
    result = a4;
    v6 = v33;
    a3 = &v19;
  }
  v8 = result >> 2;
  v9 = a1 >> 2;
  v22 = result >> 2;
  if ( v9 > 0 )
  {
    v10 = 12 * result;
    v34 = a3;
    v11 = (unsigned __int16 *)a2;
    v12 = 16 * v8;
    v21 = 12 * result;
    v20 = 16 * v8;
    v30 = a2;
    v29 = v9;
    do
    {
      if ( v8 > 0 )
      {
        v32 = v34;
        v31 = v8;
        do
        {
          v13 = v11 + 4;
          sub_101BF6F0(v13, &a2, (unsigned __int8 *)v24, (unsigned __int8 *)v23, v25, v26);
          v14 = v32;
          sub_101C1140(v32, a4, (int)v13, v23, v24, v25, v26);
          v11 = v13 + 4;
          v15 = v31-- == 1;
          v32 = v14 + 3;
        }
        while ( !v15 );
        result = a4;
        v8 = v22;
        v10 = v21;
        v12 = v20;
      }
      v34 = (int *)((char *)v34 + v10);
      v11 = (unsigned __int16 *)(v12 + v30);
      v15 = v29-- == 1;
      v30 += v12;
    }
    while ( !v15 );
    v6 = v33;
  }
  v16 = v28;
  if ( v28 && v27 > 0 )
  {
    a2 = 3 * result;
    result = (int)a3;
    a4 = (signed int)a3;
    a3 = (int *)v27;
    do
    {
      if ( v6 > 0 )
      {
        v17 = v16;
        v18 = v6;
        do
        {
          *(_WORD *)v17 = *(_WORD *)result;
          *((_BYTE *)v17 + 2) = *(_BYTE *)(result + 2);
          result += 3;
          v17 = (int *)((char *)v17 + 3);
          --v18;
        }
        while ( v18 );
      }
      v16 = (int *)((char *)v16 + 3 * v6);
      result = a2 + a4;
      v15 = a3 == (int *)1;
      a3 = (int *)((char *)a3 - 1);
      a4 += a2;
    }
    while ( !v15 );
  }
  return result;
}
