int __thiscall sub_100FD450(int this, int a2)
{
  *(_BYTE *)(this + 856) = 1;
  sub_100FD1D0(this, 0.0);
  if ( *(_BYTE *)(this + 856) )
    return sub_100D8290((float *)this, *(float *)(dword_106B31C8 + 28));
  else
    return sub_100D8290((float *)this, 0.1);
}
