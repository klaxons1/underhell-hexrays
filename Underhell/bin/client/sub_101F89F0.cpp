_DWORD *__thiscall sub_101F89F0(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v4; // ebp
  int v5; // ecx
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  int v10; // ecx

  result = this + 1517;
  v4 = 32;
  do
  {
    v5 = result[64];
    if ( v5 == 4 )
    {
      *(float *)(*result + 4 * a3) = *(float *)(*result + 4 * a2);
    }
    else if ( v5 == 12 )
    {
      v6 = (a3 & 3) + 12 * (a3 >> 2);
      v7 = (a2 & 3) + 12 * (a2 >> 2);
      *(float *)(*result + 4 * v6) = *(float *)(*result + 4 * v7);
      *(float *)(*result + 4 * v6 + 16) = *(float *)(*result + 4 * v7 + 16);
      *(float *)(*result + 4 * v6 + 32) = *(float *)(*result + 4 * v7 + 32);
    }
    v8 = result[96];
    if ( v8 == 4 )
    {
      *(float *)(result[32] + 4 * a3) = *(float *)(result[32] + 4 * a2);
    }
    else if ( v8 == 12 )
    {
      v9 = (a3 & 3) + 12 * (a3 >> 2);
      v10 = (a2 & 3) + 12 * (a2 >> 2);
      *(float *)(result[32] + 4 * v9) = *(float *)(result[32] + 4 * v10);
      *(float *)(result[32] + 4 * v9 + 16) = *(float *)(result[32] + 4 * v10 + 16);
      *(float *)(result[32] + 4 * v9 + 32) = *(float *)(result[32] + 4 * v10 + 32);
    }
    ++result;
    --v4;
  }
  while ( v4 );
  return result;
}
