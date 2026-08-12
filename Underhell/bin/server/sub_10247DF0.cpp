float *__thiscall sub_10247DF0(
        float *this,
        int a2,
        int a3,
        int a4,
        float *a5,
        float *a6,
        float *a7,
        float a8,
        int a9,
        int a10)
{
  float *result; // eax

  *(_BYTE *)this = 0;
  if ( a2 )
    this[10] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[10] = NAN;
  if ( a3 )
  {
    this[11] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  }
  else if ( a2 )
  {
    this[11] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  }
  else
  {
    this[11] = NAN;
  }
  if ( a4 )
    this[12] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
  else
    this[12] = NAN;
  this[13] = a8;
  *((_DWORD *)this + 17) = a10;
  this[15] = 3.4028235e38;
  *((_DWORD *)this + 16) = a9;
  this[14] = a8;
  this[1] = *a5;
  this[2] = a5[1];
  this[3] = a5[2];
  this[4] = *a6;
  this[5] = a6[1];
  result = a7;
  this[6] = a6[2];
  this[7] = *a7;
  this[8] = a7[1];
  this[9] = a7[2];
  this[19] = NAN;
  return result;
}
