void __thiscall sub_10270B10(float *this, float a2)
{
  double v2; // st7
  double v3; // st6
  void (*v4)(void); // edx
  void (*v5)(void); // edx

  v2 = a2;
  if ( a2 != this[54] )
  {
    v3 = 0.0;
    if ( v2 >= 0.0 && (v3 = 1.0, v2 <= 1.0) )
    {
      v5 = *(void (**)(void))(*(_DWORD *)this + 16);
      this[54] = a2;
      v5();
    }
    else
    {
      v4 = *(void (**)(void))(*(_DWORD *)this + 16);
      this[54] = v3;
      v4();
    }
  }
}
