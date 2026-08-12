_DWORD *__thiscall sub_1023BE90(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  double v3; // st7
  int v4; // [esp+Ch] [ebp+8h]

  result = this;
  this[11] = 0;
  this[12] = 0;
  this[13] = 0;
  this[14] = 0;
  this[15] = 0;
  *this = *(_DWORD *)a2;
  this[1] = a2 + 32;
  *((float *)this + 2) = *(float *)(a2 + 4);
  this[3] = *(_DWORD *)(a2 + 20);
  this[4] = 0;
  this[5] = *(_DWORD *)(a2 + 8);
  this[6] = 0;
  v4 = *(_DWORD *)(a2 + 160);
  if ( v4 )
    v3 = (double)v4 * 0.001 + *(float *)(dword_106B31C8 + 12);
  else
    v3 = 0.0;
  *((float *)this + 7) = v3;
  this[8] = 0;
  *((_WORD *)this + 18) = 1;
  *((_BYTE *)this + 38) = 0;
  this[10] = -1;
  return result;
}
