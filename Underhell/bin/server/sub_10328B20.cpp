char __thiscall sub_10328B20(int this, int a2, float a3)
{
  float *v4; // eax
  float v6; // [esp+18h] [ebp-Ch]
  float v7; // [esp+1Ch] [ebp-8h]
  float v8; // [esp+20h] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = (float *)sub_1007DFE0(*(_DWORD **)(this + 2588));
  v6 = *v4 - *(float *)(this + 580);
  v7 = v4[1] - *(float *)(this + 584);
  v8 = v4[2] - *(float *)(this + 588);
  if ( sub_100430B0((int *)this, a3, a2, 33701931, 0, 64.0) != 2 )
    return 0;
  if ( sub_100697A0((_DWORD *)this, 88, 1) )
  {
    *(float *)(this + 3664) = v6;
    *(float *)(this + 3668) = v7;
    *(float *)(this + 3672) = v8;
    off_10689714();
  }
  return 1;
}
