void __thiscall sub_10041420(_WORD *this, int a2, float a3, int a4, float a5, int a6)
{
  int v6; // esi
  float *v7; // ebx
  _DWORD *v8; // edi
  int v9; // eax
  char *v10; // eax
  int v11; // esi
  bool v12; // zf
  int *v13; // esi
  int v14; // eax
  int v15; // eax
  int v17; // [esp+1Ch] [ebp+8h]
  int v18; // [esp+20h] [ebp+Ch]

  v6 = a4;
  if ( !sub_100411C0(this, a2, a4) )
  {
    sub_1003E410(a2, a3);
    v7 = (float *)(a2 + 80);
    v18 = 3;
    do
    {
      if ( *((_BYTE *)v7 - 4) )
      {
        if ( 0.0 != *v7 )
        {
          v8 = (_DWORD *)*((_DWORD *)v7 - 3);
          if ( v6 >= 0 && v6 < v8[22] )
          {
            v9 = *(_DWORD *)((char *)&v8[v6] + v8[23]);
            if ( v9 != -1 )
            {
              v10 = (char *)&v8[6 * v9] + v8[20];
              if ( v10 )
              {
                v11 = *((_DWORD *)v10 + 5);
                v12 = &v10[v11] == 0;
                v13 = (int *)&v10[v11];
                v14 = *((_DWORD *)v10 + 2);
                if ( !v12 && v14 > 0 )
                {
                  v17 = v14;
                  do
                  {
                    v15 = sub_10040EB0((int)this, v8, *v13);
                    v13 += 3;
                    v12 = v17-- == 1;
                    flt_10405E78[v15] = *v7 * a5 * *((float *)v13 - 2) + flt_10405E78[v15];
                  }
                  while ( !v12 );
                }
                v6 = a4;
              }
            }
          }
        }
      }
      v7 += 21;
      --v18;
    }
    while ( v18 );
  }
}
