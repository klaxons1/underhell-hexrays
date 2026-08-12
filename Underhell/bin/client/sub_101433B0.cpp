_DWORD *__thiscall sub_101433B0(_DWORD *this, int a2, void (__thiscall ***a3)(_DWORD), int a4)
{
  void (__thiscall ***v4)(_DWORD); // edi
  int v6; // eax
  _DWORD *result; // eax

  v4 = a3;
  if ( a3 )
    (**a3)(a3);
  else
    v4 = 0;
  v6 = a4;
  this[19] = v4;
  if ( a4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(a4 + 4), 1u);
  else
    v6 = 0;
  this[20] = v6;
  this[18] = 0;
  *((_BYTE *)this + 72) = *(_BYTE *)(a2 + 16);
  *(float *)this = *(float *)(a2 + 20);
  *((float *)this + 1) = *(float *)(a2 + 24);
  *((float *)this + 2) = *(float *)(a2 + 28);
  *((float *)this + 3) = *(float *)(a2 + 32);
  *((float *)this + 4) = *(float *)(a2 + 36);
  *((float *)this + 5) = *(float *)(a2 + 44);
  *((float *)this + 6) = *(float *)(a2 + 48);
  *((float *)this + 7) = *(float *)(a2 + 52);
  *((float *)this + 8) = *(float *)(a2 + 56);
  *((float *)this + 9) = *(float *)(a2 + 60);
  *((float *)this + 10) = *(float *)(a2 + 64);
  *((float *)this + 11) = *(float *)(a2 + 68);
  *((float *)this + 12) = *(float *)(a2 + 72);
  *((float *)this + 13) = *(float *)(a2 + 88);
  *((_BYTE *)this + 73) = *(_BYTE *)(a2 + 92);
  *((float *)this + 14) = *(float *)(a2 + 96);
  *((float *)this + 15) = *(float *)(a2 + 100);
  *((float *)this + 16) = *(float *)(a2 + 104);
  result = this;
  *((float *)this + 17) = *(float *)(a2 + 108);
  return result;
}
