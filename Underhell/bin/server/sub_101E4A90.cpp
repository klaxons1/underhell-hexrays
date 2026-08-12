int __thiscall sub_101E4A90(int this, int a2, int a3)
{
  *(_BYTE *)(this + 3624) = 0;
  if ( !*(_DWORD *)(this + 3264) )
  {
    *(float *)(this + 3248) = *(float *)(a2 + 12);
    *(float *)(this + 3252) = *(float *)(a2 + 16);
    *(float *)(this + 3256) = *(float *)(a2 + 20);
  }
  if ( (*(_BYTE *)(this + 256) & 0x20) == 0
    && (*(_DWORD *)(dword_106CE684 + 48) || *(_DWORD *)(dword_106B31C8 + 72) || *(float *)(dword_106B31C8 + 12) >= 3.0) )
  {
    if ( *(_BYTE *)(this + 4184) )
    {
      if ( *(_DWORD *)(dword_106BBD24 + 48) )
      {
        *(_BYTE *)(this + 4184) = 0;
        sub_10110F90(&dword_106BBD20);
      }
      else
      {
        *(_DWORD *)(a2 + 36) |= 4u;
      }
    }
  }
  else
  {
    *(_DWORD *)(a2 + 36) = 0;
    *(float *)(a2 + 24) = 0.0;
    *(_BYTE *)(a2 + 40) = 0;
    *(float *)(a2 + 28) = 0.0;
    *(float *)(a2 + 32) = 0.0;
    *(float *)(a2 + 12) = *(float *)(this + 3248);
    *(float *)(a2 + 16) = *(float *)(this + 3252);
    *(float *)(a2 + 20) = *(float *)(this + 3256);
  }
  sub_102EAD90();
  return sub_101F9200(this, a2, a3);
}
