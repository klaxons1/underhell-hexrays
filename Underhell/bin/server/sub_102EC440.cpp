float *__thiscall sub_102EC440(int this, int a2)
{
  float *result; // eax
  int *v4; // ecx
  float v5; // [esp+8h] [ebp-4h] BYREF

  if ( !*(_BYTE *)(this + 801) )
  {
    if ( *(_BYTE *)(this + 801) != 1 )
    {
      result = (float *)this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          result = (float *)sub_100194B0(v4, 801);
      }
      *(_BYTE *)(this + 801) = 1;
    }
    if ( *(_BYTE *)(this + 800) )
    {
      v5 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 804);
      return sub_102EC2C0((float *)(this + 808), &v5);
    }
  }
  return result;
}
