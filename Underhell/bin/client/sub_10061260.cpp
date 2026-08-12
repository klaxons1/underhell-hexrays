int __thiscall sub_10061260(int *this)
{
  int *v1; // edi
  int result; // eax
  float *v3; // esi
  float *v4; // ebx
  float *v5; // edi
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  float v11; // [esp+14h] [ebp-6Ch]
  char v12[8]; // [esp+24h] [ebp-5Ch] BYREF
  char v13; // [esp+2Ch] [ebp-54h] BYREF
  int v14; // [esp+6Ch] [ebp-14h]
  int *v15; // [esp+70h] [ebp-10h]
  int v16; // [esp+74h] [ebp-Ch]
  int v17; // [esp+78h] [ebp-8h]
  float v18; // [esp+7Ch] [ebp-4h]

  v1 = this;
  result = 0;
  v15 = this;
  v14 = 0;
  if ( this[317] > 0 )
  {
    v17 = 0;
    v3 = (float *)(this + 448);
    do
    {
      v4 = v3 - 2;
      (*(void (__thiscall **)(int, int, _DWORD, int, float *, char *))(*(_DWORD *)dword_1041315C + 264))(
        dword_1041315C,
        v17 + v1[316] + 24,
        0,
        1,
        v3 - 2,
        v12);
      if ( !*(_DWORD *)(dword_1040E8DC + 48) )
      {
        v5 = (float *)&v13;
        v18 = 0.0;
        v16 = 6;
        do
        {
          v11 = *(v5 - 1) * *(v5 - 1) + *(v5 - 2) * *(v5 - 2) + *v5 * *v5;
          v6 = off_103EDFE0(v11);
          if ( v6 >= v18 )
            v18 = v6;
          v5 += 3;
          --v16;
        }
        while ( v16 );
        off_103EDFEC();
        v7 = v18;
        *v4 = v18 * *v4;
        *(v3 - 1) = *(v3 - 1) * v7;
        *v3 = v7 * *v3;
        if ( *v3 >= (double)*(v3 - 1) )
          v8 = *v3;
        else
          v8 = *(v3 - 1);
        if ( v8 >= *v4 )
        {
          if ( *v3 >= (double)*(v3 - 1) )
            v9 = *v3;
          else
            v9 = *(v3 - 1);
        }
        else
        {
          v9 = *v4;
        }
        v1 = v15;
        if ( v9 > 1.0 )
        {
          v10 = 1.0 / v9;
          *v4 = v10 * *v4;
          *(v3 - 1) = *(v3 - 1) * v10;
          *v3 = v10 * *v3;
        }
      }
      v17 += 36;
      result = v14 + 1;
      v3 += 3;
      v14 = result;
    }
    while ( result < v1[317] );
  }
  return result;
}
