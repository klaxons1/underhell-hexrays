void __thiscall sub_10148C80(float *this, int a2)
{
  double v3; // st7
  float v4; // edx
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( *((_DWORD *)this + 203) != 7 )
  {
    v3 = this[202];
    v4 = this[184];
    v5[0] = this[182];
    v5[1] = v3;
    v5[2] = v4;
    sub_100E11A0((int)this, v5);
    if ( a2 )
      this[204] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      this[204] = NAN;
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 720))(this);
  }
}
