int __thiscall sub_103AFF70(int this, int a2, int a3)
{
  int result; // eax
  char v4; // cl

  result = 4;
  if ( a2 == 4 )
  {
    result = *(_DWORD *)(this + 3640);
    v4 = *(_BYTE *)(this + 3865);
    *(_BYTE *)(result + 4) = v4;
    if ( !v4 )
    {
      *(float *)(result + 36) = 0.0;
      *(float *)(result + 32) = 0.0;
      *(float *)(result + 48) = 0.0;
      *(float *)(result + 44) = 0.0;
    }
  }
  else if ( a3 == 4 )
  {
    result = *(_DWORD *)(this + 3640);
    *(_BYTE *)(result + 4) = 0;
    *(float *)(result + 36) = 0.0;
    *(float *)(result + 32) = 0.0;
    *(float *)(result + 48) = 0.0;
    *(float *)(result + 44) = 0.0;
  }
  return result;
}
