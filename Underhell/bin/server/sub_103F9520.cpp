char __thiscall sub_103F9520(float *this)
{
  char result; // al
  double v3; // st7
  double v4; // st7
  double v5; // st7
  float v6; // [esp+4h] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 972))(this);
  if ( result )
  {
    if ( *((_BYTE *)this + 1392) && *(float *)(dword_106B31C8 + 12) >= (double)this[283] )
    {
      v3 = *(float *)(dword_106B31C8 + 12);
      if ( v3 >= this[284] )
      {
        (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 944))(this, 172);
        sub_100D18C0((int)this);
        v4 = v3 + *(float *)(dword_106B31C8 + 12);
        v6 = v4;
        sub_100D2D00(this + 283, &v6);
        sub_100D18C0((int)this);
        v5 = v4 + *(float *)(dword_106B31C8 + 12);
        v6 = v5;
        sub_100D2D50(this + 284, &v6);
        sub_100D18C0((int)this);
        v6 = v5 + *(float *)(dword_106B31C8 + 12);
        sub_100D2CB0(this + 285, &v6);
        *((_BYTE *)this + 1392) = 0;
      }
    }
    return 1;
  }
  return result;
}
