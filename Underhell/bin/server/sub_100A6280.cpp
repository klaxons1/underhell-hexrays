void __thiscall sub_100A6280(int this, int a2)
{
  float *v3; // edi
  double v4; // st6
  double v5; // st7

  if ( a2 )
  {
    *(_DWORD *)(this + 92) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    v3 = (float *)sub_100B99B0(this);
    if ( v3 )
    {
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      v4 = *(float *)(a2 + 584) - v3[1];
      v5 = *(float *)(a2 + 588) - v3[2];
      *(float *)(this + 80) = *(float *)(a2 + 580) - *v3;
      *(float *)(this + 84) = v4;
      *(float *)(this + 88) = v5;
      off_10689714();
    }
  }
  else
  {
    *(_DWORD *)(this + 92) = -1;
  }
}
