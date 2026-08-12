int __thiscall sub_102DA940(int this, int a2, int a3)
{
  double v4; // st6
  double v5; // st6
  double v7; // st6
  double v8; // st7

  if ( (*(_BYTE *)(this + 3416) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 36) &= ~0x20u;
    *(float *)(a2 + 24) = 0.0;
    *(float *)(a2 + 28) = 0.0;
    *(float *)(a2 + 32) = 0.0;
  }
  if ( sub_102B4350((_BYTE *)this) )
    *(_DWORD *)(a2 + 36) &= ~0x20u;
  if ( 0.0 == *(float *)(a2 + 24) && 0.0 == *(float *)(a2 + 28) && 0.0 == *(float *)(a2 + 32) )
  {
    v4 = *(float *)(dword_106B31C8 + 28) + *(float *)(this + 5612);
    *(float *)(this + 5612) = v4;
    if ( v4 > 4.0 )
      *(float *)(this + 5612) = 4.0;
    v5 = *(float *)(this + 5616) - (*(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 28));
    *(float *)(this + 5616) = v5;
    if ( v5 < 0.0 )
    {
      *(float *)(this + 5616) = 0.0;
      return sub_101E4A90(this, a2, a3);
    }
  }
  else
  {
    v7 = *(float *)(this + 5612) - (*(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 28));
    *(float *)(this + 5612) = v7;
    if ( v7 < 0.0 )
      *(float *)(this + 5612) = 0.0;
    v8 = *(float *)(dword_106B31C8 + 28) + *(float *)(this + 5616);
    *(float *)(this + 5616) = v8;
    if ( v8 > 4.0 )
    {
      *(float *)(this + 5616) = 4.0;
      return sub_101E4A90(this, a2, a3);
    }
  }
  return sub_101E4A90(this, a2, a3);
}
