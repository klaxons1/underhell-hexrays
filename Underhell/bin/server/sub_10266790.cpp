float *__thiscall sub_10266790(float *this)
{
  float *result; // eax

  sub_1026EEA0();
  *(_DWORD *)this = &CFourWheelServerVehicle::`vftable';
  memset(this + 104, 0, 0x78u);
  this[106] = 10.0;
  *((_BYTE *)this + 420) = 1;
  this[107] = 45.0;
  *((_BYTE *)this + 476) = 1;
  this[108] = 5.0;
  result = this;
  this[109] = 45.0;
  return result;
}
