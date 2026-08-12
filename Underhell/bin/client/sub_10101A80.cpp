float *__thiscall sub_10101A80(_DWORD *this, int a2)
{
  float *result; // eax
  _BYTE *v3; // edx
  int v4; // ecx
  int v5; // esi
  _BYTE *v6; // esi
  int v7; // edi
  _BYTE *v8; // esi
  int v9; // edi

  result = (float *)this;
  *this = *(_DWORD *)a2;
  v3 = this + 1;
  v4 = a2 - (_DWORD)this;
  v5 = 512;
  do
  {
    *v3 = v3[v4];
    ++v3;
    --v5;
  }
  while ( v5 );
  v6 = result + 129;
  v7 = 512;
  do
  {
    *v6 = v6[v4];
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = result + 257;
  v9 = 512;
  do
  {
    *v8 = v8[v4];
    ++v8;
    --v9;
  }
  while ( v9 );
  result[385] = *(float *)(a2 + 1540);
  result[386] = *(float *)(a2 + 1544);
  result[387] = *(float *)(a2 + 1548);
  qmemcpy(result + 388, (const void *)(a2 + 1552), 0x2Cu);
  return result;
}
