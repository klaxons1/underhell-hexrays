int __thiscall sub_10126B80(int this, float a2, float a3)
{
  int *v4; // ecx

  sub_100EC3F0((_DWORD *)this, (int)sub_102429D0, 0.0, 0);
  if ( *(_DWORD *)(this + 808) != LODWORD(a2) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 808);
    }
    *(float *)(this + 808) = a2;
  }
  *(float *)(this + 816) = *(float *)(dword_106B31C8 + 12) + a3;
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
