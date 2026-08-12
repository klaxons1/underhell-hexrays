int __thiscall sub_101A82E0(int this)
{
  double v2; // st7
  _DWORD *v3; // ecx
  int result; // eax
  bool v5; // zf

  v2 = *(float *)(this + 3664);
  v3 = *(_DWORD **)(this + 2588);
  *(float *)(this + 3700) = v2;
  *(float *)(this + 3704) = *(float *)(this + 3668);
  *(float *)(this + 3708) = *(float *)(this + 3672);
  *(float *)(this + 3712) = *(float *)(this + 3664);
  *(float *)(this + 3716) = *(float *)(this + 3668);
  *(float *)(this + 3720) = *(float *)(this + 3672);
  result = sub_1007E020(v3);
  if ( !(_BYTE)result )
  {
    result = *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(this + 2588) + 36) + 40);
    v5 = *(_DWORD *)(result + 40) == 0;
    *(float *)(this + 3700) = *(float *)result;
    *(float *)(this + 3704) = *(float *)(result + 4);
    *(float *)(this + 3708) = *(float *)(result + 8);
    if ( v5 )
    {
      *(float *)(this + 3712) = *(float *)(this + 3700);
      *(float *)(this + 3716) = *(float *)(this + 3704);
      *(float *)(this + 3720) = *(float *)(this + 3708);
    }
    else
    {
      result = *(_DWORD *)(result + 40);
      *(float *)(this + 3712) = *(float *)result;
      *(float *)(this + 3716) = *(float *)(result + 4);
      *(float *)(this + 3720) = *(float *)(result + 8);
    }
  }
  return result;
}
