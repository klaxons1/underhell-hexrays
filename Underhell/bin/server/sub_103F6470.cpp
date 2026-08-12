char __thiscall sub_103F6470(float *this)
{
  double v2; // st7
  float v4; // [esp+4h] [ebp-4h] BYREF

  if ( *((_BYTE *)this + 1393) )
  {
    v2 = *(float *)(dword_106B31C8 + 12);
    if ( v2 >= this[283] )
    {
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 944))(this, 172);
      sub_100D18C0((int)this);
      v4 = v2 + *(float *)(dword_106B31C8 + 12);
      sub_100D2D00(this + 283, &v4);
      *((_BYTE *)this + 1393) = 0;
    }
  }
  return 1;
}
