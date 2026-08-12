int __thiscall sub_10134600(int *this, _DWORD *a2, _BYTE *a3, _BYTE *a4, char a5, char a6)
{
  int v6; // eax
  int *v7; // esi
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int result; // eax

  v6 = this[14434];
  v7 = this + 14433;
  v8 = this[14436];
  if ( v8 + 1 > v6 )
    sub_100F47A0(v7, v8 - v6 + 1);
  ++v7[3];
  v9 = *v7;
  v10 = v7[3] - v8 - 1;
  v7[4] = *v7;
  if ( v10 > 0 )
    memcpy((void *)(v9 + 24 * v8 + 24), (const void *)(v9 + 24 * v8), 24 * v10);
  result = 24 * v8 + *v7;
  *(_BYTE *)(result + 16) = *a3;
  *(_BYTE *)(result + 17) = a3[1];
  *(_BYTE *)(result + 18) = a3[2];
  *(_BYTE *)(result + 19) = a5;
  *(_BYTE *)(result + 20) = *a4;
  *(_BYTE *)(result + 21) = a4[1];
  *(_BYTE *)(result + 22) = a4[2];
  *(_BYTE *)(result + 23) = a6;
  if ( a2[2] == 1 )
  {
    *(_DWORD *)result = *a2;
    *(_DWORD *)(result + 4) = a2[1];
    *(_DWORD *)(result + 8) = *a2;
    *(_DWORD *)(result + 12) = a2[1] + a2[3];
  }
  else if ( a2[3] == 1 )
  {
    *(_DWORD *)result = *a2;
    *(_DWORD *)(result + 4) = a2[1];
    *(_DWORD *)(result + 8) = a2[2] + *a2;
    *(_DWORD *)(result + 12) = a2[1];
  }
  else
  {
    result = v7[3] - v8 - 1;
    if ( result > 0 )
      result = (int)memcpy((void *)(*v7 + 24 * v8), (const void *)(*v7 + 24 * v8 + 24), 24 * result);
    --v7[3];
  }
  return result;
}
