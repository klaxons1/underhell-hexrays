void __thiscall sub_101D0A70(int this, float a2, float a3)
{
  double v4; // st7
  int *v5; // ecx
  float v6; // [esp+0h] [ebp-10h]

  if ( sub_100E9200((_DWORD *)this, off_10638D58) < *(float *)(dword_106B31C8 + 12) )
  {
    v4 = a3;
    if ( -1.0 == a3 )
      v4 = 0.5;
    *(float *)(this + 5052) = v4;
    *(float *)(this + 5048) = *(float *)(dword_106B31C8 + 12) + a2;
    if ( *(_DWORD *)(this + 1072) != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
          sub_100194B0(v5, 1072);
      }
      *(float *)(this + 1072) = 0.0;
    }
    v6 = *(float *)(dword_106B31C8 + 12) + a2 + 0.0099999998;
    sub_100EC3F0((_DWORD *)this, (int)sub_101D0070, v6, off_10638D58);
  }
}
