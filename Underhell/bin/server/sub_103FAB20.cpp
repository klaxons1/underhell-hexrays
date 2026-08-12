unsigned int __thiscall sub_103FAB20(int this, float *a2, float *a3)
{
  unsigned int result; // eax
  int *v4; // edx
  int v5; // eax

  *(float *)(this + 4) = *a2;
  *(float *)(this + 8) = a2[1];
  *(float *)(this + 12) = a2[2];
  *(float *)(this + 16) = *a3;
  *(float *)(this + 20) = a3[1];
  *(float *)(this + 24) = a3[2];
  *(float *)(this + 52) = *(float *)(dword_106B31C8 + 16);
  result = *(_DWORD *)(this + 8272);
  if ( result != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 8272) & 0xFFF) + 1];
    result >>= 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 8272) & 0xFFF) + 2] == result )
    {
      result = *v4;
      if ( *v4 )
      {
        v5 = *(_DWORD *)(result + 424);
        if ( v5 )
          return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5);
        else
          return sub_103FA2C0((_DWORD *)this, 0);
      }
    }
  }
  return result;
}
