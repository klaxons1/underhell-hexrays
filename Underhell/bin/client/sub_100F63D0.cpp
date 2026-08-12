int __thiscall sub_100F63D0(int this)
{
  int result; // eax
  float *v3; // esi
  int v4; // eax
  int v5; // ebx
  int v6; // esi
  char v7; // cl
  float v8[21]; // [esp+4h] [ebp-60h] BYREF
  int v9; // [esp+58h] [ebp-Ch]
  int v10; // [esp+5Ch] [ebp-8h]
  char v11; // [esp+63h] [ebp-1h]

  v11 = *(_BYTE *)(this + 184);
  result = 0;
  *(_BYTE *)(this + 184) = 1;
  v9 = 0;
  if ( *(int *)(this + 172) > 0 )
  {
    v10 = 0;
    do
    {
      v3 = (float *)(v10 + *(_DWORD *)(this + 160));
      if ( *((_DWORD *)v3 + 2) )
      {
        v5 = *((_DWORD *)v3 + 1);
        v6 = *(_DWORD *)v3;
        sub_100F7C50(v6, v5);
        sub_100F7C50(v5, v6);
      }
      else
      {
        memset(v8, 0, sizeof(v8));
        v8[3] = v3[3];
        v4 = *((_DWORD *)v3 + 1);
        v8[4] = v3[4];
        v8[5] = v3[5];
        v8[9] = v3[7] * v3[4] + v3[6] * v3[3] + v3[8] * v3[5];
        v8[6] = v3[6];
        v8[7] = v3[7];
        v8[8] = v3[8];
        sub_100F8980(v4, v8);
      }
      v10 += 36;
      result = v9 + 1;
      v9 = result;
    }
    while ( result < *(_DWORD *)(this + 172) );
  }
  v7 = v11;
  *(_DWORD *)(this + 172) = 0;
  *(_BYTE *)(this + 184) = v7;
  return result;
}
