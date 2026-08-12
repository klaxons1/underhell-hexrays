void __cdecl sub_10194740(int a1, float *a2, _DWORD *a3, float a4)
{
  int i; // ebx
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int *v13; // edi
  int *v14; // edi
  int v15; // esi
  int v16; // eax
  int v17; // esi
  int v18; // [esp+10h] [ebp-4h]
  int v19; // [esp+1Ch] [ebp+8h]

  if ( a1 )
  {
    if ( !++dword_10632620 )
      dword_10632620 = 1;
    sub_1018B460();
    sub_1018B2F0(a1);
    *(float *)(a1 + 504) = 0.0;
    *(_DWORD *)(a1 + 496) = 0;
    *(float *)(a1 + 508) = 0.0;
    *(_DWORD *)(a1 + 500) = 7;
    *(_DWORD *)(a1 + 492) = dword_10632620;
    for ( i = dword_106B7A10; dword_106B7A10; i = dword_106B7A10 )
    {
      sub_1018B410((_DWORD *)i);
      if ( !*(_BYTE *)(i + 48) && *(_DWORD *)(i + 44) == *a3 )
      {
        *(_DWORD *)(i + 44) = *(_DWORD *)(dword_106B8370 + 1068);
        v5 = (_DWORD *)(i + 524);
        v19 = 4;
        do
        {
          v6 = 0;
          v18 = v5[6];
          if ( v18 > 0 )
          {
            do
            {
              v7 = v5[3];
              v8 = v6;
              if ( v7 == -1 )
              {
LABEL_12:
                v9 = 0;
              }
              else
              {
                while ( v8 )
                {
                  v7 = *(_DWORD *)(*v5 + 12 * v7 + 8);
                  --v8;
                  if ( v7 == -1 )
                    goto LABEL_12;
                }
                v9 = *(_DWORD *)(*v5 + 12 * v7);
              }
              sub_10192150(v9, (float *)i, a2, a4);
              ++v6;
            }
            while ( v6 < v18 );
          }
          v5 += 9;
          --v19;
        }
        while ( v19 );
        if ( i != -668 )
        {
          v10 = *(_DWORD *)(i + 680);
          if ( v10 != -1 )
          {
            v11 = *(_DWORD *)(i + 668);
            do
            {
              v12 = 12 * v10;
              v13 = *(int **)(v11 + v12);
              sub_10192150(v13[8], (float *)i, a2, a4);
              sub_10192150(v13[9], (float *)i, a2, a4);
              sub_10192150(v13[10], (float *)i, a2, a4);
              v11 = *(_DWORD *)(i + 668);
              v10 = *(_DWORD *)(v11 + v12 + 8);
            }
            while ( v10 != -1 );
          }
        }
        v14 = (int *)(i + 704);
        if ( i != -704 )
        {
          v15 = *(_DWORD *)(i + 716);
          if ( v15 != -1 )
          {
            v16 = *v14;
            do
            {
              v17 = 12 * v15;
              sub_10192150(*(_DWORD *)(*(_DWORD *)(v17 + v16) + 48), (float *)i, a2, a4);
              v16 = *v14;
              v15 = *(_DWORD *)(v17 + *v14 + 8);
            }
            while ( v15 != -1 );
          }
        }
      }
    }
  }
}
