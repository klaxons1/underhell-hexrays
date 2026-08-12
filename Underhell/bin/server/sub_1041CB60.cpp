_DWORD *__thiscall sub_1041CB60(int this, int a2)
{
  _DWORD *result; // eax

  *(_BYTE *)(this + 524) &= 0xF2u;
  *(float *)(this + 532) = 0.0;
  *(float *)(this + 124) = 0.0;
  *(float *)(this + 128) = 0.0;
  *(_DWORD *)(this + 160) = a2;
  *(float *)(this + 132) = 0.0;
  result = (_DWORD *)(this + 520);
  *(float *)(this + 148) = 0.0;
  *(float *)(this + 152) = 0.0;
  *(_DWORD *)(this + 164) = 0;
  *(float *)(this + 136) = 0.0;
  *(_BYTE *)(this + 168) = 0;
  *(float *)(this + 140) = 0.0;
  *(_DWORD *)(this + 156) = 0;
  *(_DWORD *)(this + 144) = 0;
  *(_DWORD *)(this + 296) = 60;
  *(_BYTE *)(this + 392) = 0;
  if ( this != -520 )
    *result = 0;
  *(_BYTE *)(this + 524) &= ~2u;
  *(_DWORD *)(this + 528) = -1;
  return result;
}
