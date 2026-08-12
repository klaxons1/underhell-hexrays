void __thiscall sub_101C3F00(float *this)
{
  double v2; // st7
  float v3; // [esp+0h] [ebp-8h]

  if ( (unsigned __int8)sub_101C8820((int)this, 0) )
  {
    this[142] = this[141];
    if ( this[143] < 0.0 )
      v2 = -1.0;
    else
      v2 = this[143] - this[141];
    if ( v2 > *(float *)(dword_106B31C8 + 16) )
      v2 = *(float *)(dword_106B31C8 + 16);
    v3 = v2;
    sub_101C3BF0((int)this, v3);
  }
}
