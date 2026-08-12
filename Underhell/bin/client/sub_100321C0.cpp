int __userpurge sub_100321C0@<eax>(int result@<eax>, int a2@<ecx>, char *a3, float a4, int a5, int a6)
{
  char *v7; // ebx
  char *v8; // edi
  int v9; // ebx
  float *v10; // eax
  int v11; // edx
  double v12; // st7
  int *v13; // esi
  int v14; // ecx
  double v15; // st6
  double v16; // st7
  int v17[8]; // [esp+18h] [ebp-28h] BYREF
  int v18; // [esp+38h] [ebp-8h]
  int v19; // [esp+3Ch] [ebp-4h]
  char *v20; // [esp+48h] [ebp+8h]
  float *v21; // [esp+48h] [ebp+8h]
  int v22; // [esp+4Ch] [ebp+Ch]
  int v23; // [esp+50h] [ebp+10h]
  int v24; // [esp+54h] [ebp+14h]

  v19 = a2;
  if ( a5 == a6 )
  {
    v22 = 0;
    if ( *(_BYTE *)(a2 + 29) )
    {
      v7 = a3;
      v20 = (char *)(a6 + 4);
      do
      {
        qmemcpy(v7, v20, 0x20u);
        sub_100315D0((int)v7);
        v20 += 32;
        result = v22 + 1;
        v7 += 32;
        v22 = result;
      }
      while ( result < *(unsigned __int8 *)(v19 + 29) );
    }
  }
  else
  {
    v23 = 0;
    if ( *(_BYTE *)(a2 + 29) )
    {
      v8 = a3;
      v9 = a6 + 12;
      v10 = (float *)(a5 + 24);
      v11 = a6 - a5;
      v24 = (int)a3;
      v21 = (float *)(a5 + 24);
      v18 = v11;
      while ( 1 )
      {
        v12 = a4;
        if ( *(_BYTE *)(v23 + *(_DWORD *)(a2 + 32)) )
        {
          v13 = (int *)sub_10031710((int)v17, a4, (int)(v10 - 5), v9 - 8);
        }
        else
        {
          v14 = *(_DWORD *)(v9 - 8);
          *(float *)&v17[4] = 0.0;
          v17[0] = v14;
          v13 = v17;
          v15 = *(float *)((char *)v10 + v11) - *v10;
          v17[1] = *(_DWORD *)(v9 - 4);
          *(float *)&v17[5] = v15 * v12 + *v10;
          v16 = v12 * (*(float *)v9 - *(v10 - 3)) + *(v10 - 3);
          v17[3] = *(_DWORD *)(v9 + 4);
          *(float *)&v17[2] = v16;
          v17[6] = *(int *)(v9 + 16);
          v17[7] = *(int *)(v9 + 20);
        }
        qmemcpy(v8, v13, 0x20u);
        sub_100315D0(v24);
        a2 = v19;
        v21 += 8;
        result = v23 + 1;
        v9 += 32;
        v23 = result;
        v24 += 32;
        if ( result >= *(unsigned __int8 *)(v19 + 29) )
          break;
        v8 = (char *)v24;
        v11 = v18;
        v10 = v21;
      }
    }
  }
  return result;
}
