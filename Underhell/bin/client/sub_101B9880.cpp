int sub_101B9880()
{
  int result; // eax

  result = sub_100DDA40(20);
  if ( !result )
    return 0;
  *(_DWORD *)result = &CShieldProxy::`vftable';
  *(float *)(result + 12) = 0.0;
  *(_DWORD *)(result + 4) = 0;
  *(float *)(result + 16) = 0.0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
