int __thiscall sub_103CA030(int this)
{
  int *v2; // ecx
  float v4; // [esp+0h] [ebp-10h]

  if ( *(_BYTE *)(this + 800) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 800);
    }
    *(_BYTE *)(this + 800) = 1;
  }
  sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
  v4 = *(float *)(dword_106B31C8 + 12) + 2.0;
  return sub_100EC4A0((int *)this, v4, 0);
}
