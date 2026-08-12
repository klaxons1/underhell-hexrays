void __thiscall sub_10040F70(void *this, char *String2, float a3, _DWORD *a4, int a5)
{
  int v6; // edi
  const char *v7; // esi
  int v8; // edi
  bool v9; // zf
  float *v10; // edi
  int v11; // esi
  int v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st7
  int v17; // [esp+20h] [ebp+10h]

  v6 = 0;
  if ( (int)a4[19] > 0 )
  {
    v17 = 0;
    do
    {
      v7 = (char *)&a4[v17] + a4[20];
      if ( v7 && !_stricmp(&v7[*(_DWORD *)v7], String2) )
        break;
      v17 += 6;
      ++v6;
    }
    while ( v6 < a4[19] );
    if ( v6 < a4[19] )
    {
      v8 = *((_DWORD *)v7 + 5);
      v9 = &v7[v8] == 0;
      v10 = (float *)&v7[v8];
      v11 = *((_DWORD *)v7 + 2);
      if ( !v9 && v11 > 0 )
      {
        do
        {
          v12 = sub_10040EB0((int)this, a4, *(_DWORD *)v10);
          v13 = v10[2] * a3;
          v14 = 1.0;
          if ( v13 <= 1.0 )
          {
            if ( v13 < 0.0 )
              v13 = 0.0;
            v14 = v13;
            v15 = 1.0;
          }
          else
          {
            v15 = 1.0;
          }
          v10 += 3;
          --v11;
          flt_10405E78[v12] = v14 * *(v10 - 2) + (v15 - v14) * flt_10405E78[v12];
        }
        while ( v11 );
      }
    }
  }
}
