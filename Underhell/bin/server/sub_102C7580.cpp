void __thiscall sub_102C7580(_DWORD *this, int a2)
{
  int v3; // ebx
  double v4; // st7
  int v5; // eax
  _DWORD *v6; // ecx
  double v7; // st7
  __int64 v8; // [esp-8h] [ebp-18h]
  __int64 v9; // [esp-8h] [ebp-18h]

  v3 = this[231];
  if ( a2 >= v3 )
  {
    if ( a2 != v3 )
    {
      v7 = (this[62] & 0x2000) != 0 ? *(float *)(dword_106DE20C + 44) : *(float *)(dword_106DE1C4 + 44);
      if ( a2 == (int)v7 )
      {
        v6 = this + 253;
        goto LABEL_16;
      }
    }
  }
  else
  {
    if ( (this[62] & 0x2000) != 0 )
      v4 = *(float *)(dword_106DE20C + 44);
    else
      v4 = *(float *)(dword_106DE1C4 + 44);
    v5 = (int)(v4 * 0.5);
    if ( a2 <= v5 && v3 > v5 )
    {
      HIDWORD(v8) = this;
      LODWORD(v8) = this;
      sub_1010DD80(this + 241, v8, 0.0);
    }
    if ( a2 <= 0 )
    {
      v6 = this + 247;
LABEL_16:
      HIDWORD(v9) = this;
      LODWORD(v9) = this;
      sub_1010DD80(v6, v9, 0.0);
    }
  }
  this[231] = a2;
}
