int __thiscall sub_100B36D0(int this, int a2)
{
  if ( this != a2 )
  {
    *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
    *(float *)(this + 12) = *(float *)(a2 + 12);
    *(float *)(this + 16) = *(float *)(a2 + 16);
    *(float *)(this + 20) = *(float *)(a2 + 20);
    *(float *)(this + 24) = *(float *)(a2 + 24);
    *(float *)(this + 28) = *(float *)(a2 + 28);
    *(float *)(this + 32) = *(float *)(a2 + 32);
    *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
    *(_BYTE *)(this + 40) = *(_BYTE *)(a2 + 40);
    *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
    *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
    *(_WORD *)(this + 56) = *(_WORD *)(a2 + 56);
    *(_WORD *)(this + 58) = *(_WORD *)(a2 + 58);
    *(_BYTE *)(this + 60) = *(_BYTE *)(a2 + 60);
    sub_100C4E70(a2 + 64);
  }
  return this;
}
