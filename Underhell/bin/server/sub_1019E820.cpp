void sub_1019E820()
{
  int v0; // edi
  int v1; // eax
  int v2; // edi
  int v3; // esi
  double v4; // st7
  double v5; // st7
  int v6; // [esp+Ch] [ebp-18h] BYREF
  float v7; // [esp+10h] [ebp-14h]
  float v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+18h] [ebp-Ch] BYREF
  float v10; // [esp+1Ch] [ebp-8h]
  float v11; // [esp+20h] [ebp-4h]

  v0 = dword_10632630;
  if ( dword_10632630 != -1 )
  {
    v1 = dword_10632624;
    do
    {
      v2 = 12 * v0;
      v3 = *(_DWORD *)(v2 + v1);
      v9 = *(int *)(v3 + 28);
      v10 = *(float *)(v3 + 32);
      v11 = *(float *)(v3 + 36);
      v11 = sub_1018AD70((float *)v3, (float *)&v9);
      v4 = sub_1018B790((float *)v3, 0);
      if ( v4 > 0.1 )
      {
        v6 = v9;
        v7 = v10;
        v8 = v4 * 10.0 + v11;
        sub_1011BC50((float *)&v9, (float *)&v6, 255, 0, 0, 1, 0.1);
      }
      v5 = sub_1018B790((float *)v3, 1);
      if ( v5 > 0.1 )
      {
        v6 = v9;
        v7 = v10;
        v8 = v5 * 10.0 + v11;
        sub_1011BC50((float *)&v9, (float *)&v6, 0, 0, 255, 1, 0.1);
      }
      v1 = dword_10632624;
      v0 = *(_DWORD *)(v2 + dword_10632624 + 8);
    }
    while ( v0 != -1 );
  }
}
