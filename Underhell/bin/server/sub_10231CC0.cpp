void __cdecl sub_10231CC0(int a1, char a2)
{
  int v2; // ecx
  int *v3; // eax
  int *v4; // esi
  _DWORD *v5; // ecx
  unsigned int v6; // eax
  int v7; // ebx
  __int64 v8; // [esp-8h] [ebp-10h]
  __int64 v9; // [esp-8h] [ebp-10h]
  __int64 v10; // [esp-8h] [ebp-10h]
  float v11; // [esp+0h] [ebp-8h]

  if ( *(char **)(a1 + 92) == "scripted_sequence" || sub_100D6240((_DWORD *)a1, "scripted_sequence") )
  {
    if ( *(_DWORD *)(a1 + 880) != -1
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 880) & 0xFFF) + 2] == *(_DWORD *)(a1 + 880) >> 12 )
    {
      v2 = off_1061BE18[4 * (*(_DWORD *)(a1 + 880) & 0xFFF) + 1];
      if ( v2 )
      {
        v3 = (int *)sub_100D7680(v2);
        v4 = v3;
        if ( v3 )
        {
          if ( v3[581] == 4 )
          {
            v5 = v3 + 672;
            v3[671] = 3;
            v6 = v3[672];
            if ( v6 != -1
              && off_1061BE18[4 * (v4[672] & 0xFFF) + 2] == v6 >> 12
              && off_1061BE18[4 * (v4[672] & 0xFFF) + 1] )
            {
              v7 = *(_DWORD *)(sub_1026A890(v5) + 868);
            }
            else
            {
              LOWORD(v7) = 0;
            }
            sub_10033F30(v4);
            sub_10231710(v4, v7);
          }
          else
          {
            *(_DWORD *)(a1 + 880) = -1;
            sub_100EAAB0(v3, *(_DWORD *)(a1 + 864));
            v4[672] = -1;
            sub_100218B0(v4, 0);
            v4[652] = -1;
            if ( v4[584] != 1 )
              v4[584] = 1;
          }
        }
      }
    }
    v11 = 0.0;
    HIDWORD(v8) = a1;
    *(_DWORD *)(a1 + 848) = 0;
    LODWORD(v8) = 0;
    if ( a2 )
    {
      sub_1010DD80((_DWORD *)(a1 + 928), v8, v11);
      HIDWORD(v9) = a1;
      LODWORD(v9) = 0;
      sub_1010DD80((_DWORD *)(a1 + 952), v9, 0.0);
    }
    else
    {
      sub_1010DD80((_DWORD *)(a1 + 976), v8, v11);
      if ( 0.0 == *(float *)(a1 + 856) )
      {
        HIDWORD(v10) = a1;
        LODWORD(v10) = 0;
        sub_1010DD80((_DWORD *)(a1 + 1000), v10, 0.0);
      }
    }
  }
}
