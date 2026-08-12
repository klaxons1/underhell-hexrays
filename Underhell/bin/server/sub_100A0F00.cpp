void __cdecl sub_100A0F00(int a1)
{
  if ( a1 )
  {
    *(_DWORD *)(a1 + 24) = -1;
    *(_BYTE *)(a1 + 23) &= 0x80u;
    *(float *)(a1 + 15) = 0.0;
    *(float *)(a1 + 19) = 0.0;
    *(_DWORD *)(a1 + 24) = -1;
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_WORD *)(a1 + 12) = sub_10065220(1.0);
    *(_BYTE *)(a1 + 14) = 0;
  }
}
