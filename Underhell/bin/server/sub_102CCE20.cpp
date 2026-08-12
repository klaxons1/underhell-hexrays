int __thiscall sub_102CCE20(int this, float a2)
{
  int *v3; // ecx

  sub_100EC3F0((_DWORD *)this, (int)sub_102429D0, 0.0, 0);
  if ( *(_DWORD *)(this + 808) != LODWORD(a2) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 808);
    }
    *(float *)(this + 808) = a2;
  }
  *(float *)(this + 816) = *(float *)(this + 852) / *(float *)(this + 808) + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
