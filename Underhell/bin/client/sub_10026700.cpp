void __thiscall sub_10026700(_DWORD *this, int a2, int a3, int a4, float a5)
{
  int v5; // ebx
  int v6; // edx
  double v7; // st7
  double v8; // st7
  int v10; // eax
  float *v11; // esi
  int v12; // edx
  char *v13; // eax
  double v14; // st6
  float *v15; // eax
  float v16; // [esp+0h] [ebp-1Ch]
  _DWORD *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]
  float v19; // [esp+30h] [ebp+14h]

  v5 = 0;
  v17 = this;
  if ( a2 )
  {
    v6 = this[311];
    if ( v6 )
    {
      if ( *(_BYTE *)v6 )
      {
        v7 = a5 - *(float *)(v6 + 4);
        if ( v7 <= 0.2 )
        {
          v8 = v7 * 5.0;
          v19 = v8;
          if ( v8 <= 1.0 )
          {
            if ( v8 < 0.0 )
            {
              v8 = 0.0;
              v19 = 0.0;
            }
          }
          else
          {
            v8 = 1.0;
            v19 = 1.0;
          }
          v18 = 0;
          if ( *(int *)(*(_DWORD *)a2 + 156) > 0 )
          {
            v10 = -8 - a3;
            v11 = (float *)(a3 + 8);
            while ( 1 )
            {
              v12 = this[311];
              v13 = (char *)v11 + v10;
              v14 = *(v11 - 2) - *(float *)&v13[v12 + 12];
              v15 = (float *)&v13[v12 + 12];
              *(v11 - 2) = v14 * v8 + *v15;
              *(v11 - 1) = (*(v11 - 1) - v15[1]) * v8 + v15[1];
              *v11 = (*v11 - v15[2]) * v8 + v15[2];
              v16 = v8;
              sub_101F0F00(v5 + this[311] + 1548, a4, v16, a4);
              v11 += 3;
              v5 += 16;
              a4 += 16;
              if ( ++v18 >= *(_DWORD *)(*(_DWORD *)a2 + 156) )
                break;
              v8 = v19;
              this = v17;
              v10 = -8 - a3;
            }
          }
        }
        else
        {
          *(_BYTE *)v6 = 0;
        }
      }
    }
  }
}
