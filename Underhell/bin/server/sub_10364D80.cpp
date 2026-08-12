char __thiscall sub_10364D80(float *this)
{
  char result; // al

  if ( *(float *)(dword_106B31C8 + 12) - this[925] <= -0.001 )
    return 0;
  result = 1;
  this[925] = *(float *)(dword_106B31C8 + 12) + 0.30000001;
  return result;
}
