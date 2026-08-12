int __fastcall sub_100F48B0(int a1)
{
  int result; // eax
  int v2; // edx
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  float *v7; // edx
  int v8; // ebx
  int v9; // esi
  int v10; // edx
  int v11; // [esp+18h] [ebp-10h]
  int v13; // [esp+20h] [ebp-8h]
  int v14; // [esp+24h] [ebp-4h]

  result = a1;
  v2 = *(_DWORD *)(a1 + 16);
  v11 = 0;
  v14 = v2;
  if ( v2 > 0 )
  {
    while ( 1 )
    {
      v3 = 0;
      v4 = 0;
      if ( v2 >= 4 )
      {
        v5 = *(_DWORD *)(result + 4);
        v6 = 0;
        v13 = v5;
        v7 = (float *)(v5 + 44);
        v8 = -v5;
        while ( 1 )
        {
          if ( *(float *)(v6 + v5 + 20) < (double)*(v7 - 6) )
          {
            v3 = v4;
            v6 = (int)v7 + v8 - 44;
          }
          if ( *(float *)(v6 + v13 + 20) < (double)*v7 )
          {
            v3 = v4 + 1;
            v6 = (int)v7 + v8 - 20;
          }
          if ( *(float *)(v6 + v13 + 20) < (double)v7[6] )
          {
            v3 = v4 + 2;
            v6 = (int)v7 + v8 + 4;
          }
          if ( *(float *)(v6 + v13 + 20) < (double)v7[12] )
          {
            v3 = v4 + 3;
            v6 = (int)v7 + v8 + 28;
          }
          v4 += 4;
          v7 += 24;
          if ( v4 >= v14 - 3 )
            break;
          v5 = v13;
        }
        v2 = v14;
        result = a1;
      }
      if ( v4 < v2 )
      {
        v9 = 24 * v3;
        v10 = 24 * v4;
        do
        {
          if ( *(float *)(v9 + *(_DWORD *)(result + 4) + 20) < (double)*(float *)(*(_DWORD *)(result + 4) + v10 + 20) )
          {
            v3 = v4;
            v9 = v10;
          }
          ++v4;
          v10 += 24;
        }
        while ( v4 < v14 );
        result = a1;
      }
      Msg(
        "%.0f fps - %s\n",
        *(float *)(24 * v3 + *(_DWORD *)(result + 4) + 20),
        *(const char **)(24 * v3 + *(_DWORD *)(result + 4) + 12));
      *(float *)(24 * v3 + *(_DWORD *)(a1 + 4) + 20) = -1.0;
      result = v11 + 1;
      v11 = result;
      v14 = *(_DWORD *)(a1 + 16);
      if ( result >= v14 )
        break;
      result = a1;
      v2 = *(_DWORD *)(a1 + 16);
    }
  }
  return result;
}
