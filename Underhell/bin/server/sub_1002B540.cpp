char __thiscall sub_1002B540(float *this)
{
  double v3; // st7
  float v4[10]; // [esp+4h] [ebp-2Ch] BYREF
  int v5; // [esp+2Ch] [ebp-4h] BYREF

  if ( (dword_1069042C & 1) == 0 && byte_1069362C )
  {
    if ( (dword_1069042C & 2) != 0 )
    {
      if ( *((_DWORD *)this + 892) >= dword_105FE110 )
      {
        if ( !(unsigned __int8)sub_1007E040(*((_DWORD *)this + 647)) )
        {
          v5 = 0;
          sub_1002AB40(this + 216, &v5);
          return 0;
        }
        return 0;
      }
      v5 = 1;
      sub_1002AB40(this + 216, &v5);
    }
    return 1;
  }
  if ( flt_10690418 <= (double)*(float *)(dword_106B31C8 + 12) && !(unsigned __int8)sub_101172D0() )
  {
    v3 = *(float *)(dword_106B31C8 + 12) + 0.5;
    v4[2] = 0.0;
    flt_10690418 = v3;
    v4[3] = NAN;
    v4[4] = NAN;
    v4[0] = 0.69999999;
    LODWORD(v4[9]) = 1;
    v4[1] = 0.64999998;
    v4[5] = 0.0;
    v4[6] = 0.0;
    v4[7] = 0.60000002;
    v4[8] = 0.0;
    sub_1025F150(v4, "A.I. Disabled...\n");
  }
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 1416))(this, 1);
  return 0;
}
