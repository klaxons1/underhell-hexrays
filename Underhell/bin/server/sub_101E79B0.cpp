int __thiscall sub_101E79B0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // ecx

  result = a2;
  *(_DWORD *)a2 = &CBotCmd::`vftable';
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(float *)(a2 + 12) = 0.0;
  *(float *)(a2 + 16) = 0.0;
  *(float *)(a2 + 20) = 0.0;
  *(float *)(a2 + 24) = 0.0;
  *(_WORD *)(a2 + 56) = 0;
  *(float *)(a2 + 28) = 0.0;
  *(_WORD *)(a2 + 58) = 0;
  *(float *)(a2 + 32) = 0.0;
  *(_DWORD *)(a2 + 36) = 0;
  *(_BYTE *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 44) = 0;
  *(_DWORD *)(a2 + 48) = 0;
  *(_DWORD *)(a2 + 52) = 0;
  *(_BYTE *)(a2 + 60) = 0;
  v3 = this[1] + 4036;
  if ( v3 )
  {
    *(_DWORD *)(a2 + 36) = *(_DWORD *)(v3 + 36);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4);
    *(float *)(a2 + 24) = *(float *)(v3 + 24);
    *(_BYTE *)(a2 + 60) = *(_BYTE *)(v3 + 60);
    *(_BYTE *)(a2 + 40) = *(_BYTE *)(v3 + 40);
    *(_WORD *)(a2 + 56) = *(_WORD *)(v3 + 56);
    *(_WORD *)(a2 + 58) = *(_WORD *)(v3 + 58);
    *(_DWORD *)(a2 + 52) = *(_DWORD *)(v3 + 52);
    *(float *)(a2 + 28) = *(float *)(v3 + 28);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v3 + 8);
    *(float *)(a2 + 32) = *(float *)(v3 + 32);
    *(float *)(a2 + 12) = *(float *)(v3 + 12);
    *(float *)(a2 + 16) = *(float *)(v3 + 16);
    *(float *)(a2 + 20) = *(float *)(v3 + 20);
    *(_DWORD *)(a2 + 44) = *(_DWORD *)(v3 + 44);
    *(_DWORD *)(a2 + 48) = *(_DWORD *)(v3 + 48);
  }
  return result;
}
