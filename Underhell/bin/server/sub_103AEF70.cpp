void __thiscall sub_103AEF70(int this)
{
  double v2; // st7
  unsigned __int8 (__thiscall *v3)(int); // edx
  int v4; // eax
  int v5; // eax
  int v6; // edi
  double v7; // st7

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( *(float *)(this + 708) != *(float *)(this + 3876) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v2 = *(float *)(this + 3876);
    sub_10424C10(*(float *)(this + 3876), *(float *)(this + 708));
    if ( v2 >= 0.0 )
      *(float *)(this + 3888) = v2 + *(float *)(this + 3888);
    else
      *(float *)(this + 3884) = *(float *)(this + 3884) - v2;
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    *(float *)(this + 3876) = *(float *)(this + 708);
  }
  v3 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 296);
  *(float *)(this + 3880) = *(float *)(this + 3888) + *(float *)(this + 3884) + *(float *)(this + 3880);
  if ( !v3(this) && *(float *)(this + 3880) > 180.0 && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3892) )
  {
    if ( *(float *)(this + 3888) >= (double)*(float *)(this + 3884) )
      v4 = sub_100BDCE0(this, 158);
    else
      v4 = sub_100BDCE0(this, 157);
    if ( v4 != -1 )
    {
      v5 = sub_100C7460(this, v4, 1);
      v6 = v5;
      if ( v5 == -1 )
      {
        v7 = *(float *)(dword_106B31C8 + 12) + 0.5;
      }
      else
      {
        sub_100C60B0((_DWORD *)this, v5, 100);
        if ( *(float *)(this + 3880) > 360.0 )
          sub_100C4EE0((_DWORD *)this, v6, 1.5);
        v7 = sub_100C5400((_DWORD *)this, v6) + *(float *)(dword_106B31C8 + 12);
      }
      *(float *)(this + 3892) = v7;
    }
    *(float *)(this + 3888) = 0.0;
    *(float *)(this + 3884) = 0.0;
    *(float *)(this + 3880) = 0.0;
  }
}
