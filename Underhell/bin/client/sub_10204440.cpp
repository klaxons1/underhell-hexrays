int __thiscall sub_10204440(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int result; // eax
  int v7; // edx

  v3 = this[12];
  if ( v3 < 0 )
  {
    v7 = this[11];
    *(float *)(a3 + 8) = 0.0;
    result = v7;
    *(_DWORD *)(a3 + 4) = v7;
    *(_DWORD *)a3 = v7;
  }
  else
  {
    v4 = this[11];
    v5 = *(_DWORD *)(a2 + 6620);
    *(_DWORD *)(a2 + 6620) = v5 + 1;
    result = v3
           + (int)((double)(v4 - v3 + 1) * flt_103EE7C0[((_WORD)v5 + (unsigned __int16)*(_DWORD *)(a2 + 6624)) & 0xFFF]);
    *(float *)(a3 + 8) = 0.0;
    *(_DWORD *)(a3 + 4) = result;
    *(_DWORD *)a3 = result;
  }
  *(_BYTE *)(a3 + 12) = 0;
  return result;
}
