float *__thiscall sub_101A0980(float *this, float *a2, float *a3, int a4)
{
  float v6[3]; // [esp+20h] [ebp-Ch] BYREF

  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = *a3;
  this[4] = a3[1];
  this[5] = a3[2];
  *((_DWORD *)this + 10) = dword_10632888++;
  this[6] = 0.0;
  this[7] = 0.0;
  this[8] = 0.0;
  this[9] = 0.0;
  this[17] = 0.0;
  *((_BYTE *)this + 52) = 0;
  *((_DWORD *)this + 14) = a4;
  *((_DWORD *)this + 12) = dword_106B8C10;
  ++dword_106B8C14;
  dword_106B8C10 = (int)this;
  *((_BYTE *)this + 60) = 0;
  this[16] = 0.0;
  *((_BYTE *)this + 44) = 0;
  if ( *(_DWORD *)(dword_106B8C34 + 48) )
  {
    sub_1011C120((int)this, 10.0, 128, 128, 128, 1, 10.0);
    sub_1011C120((int)this, 10.0, 255, 255, 255, 0, 10.0);
    v6[0] = *this;
    v6[1] = this[1];
    v6[2] = this[2];
    sub_101A0900(v6);
  }
  return this;
}
