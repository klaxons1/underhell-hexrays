int __thiscall sub_100BFD20(void *this, int a2)
{
  int result; // eax
  bool v4; // zf

  memset(this, 0, 0x2000u);
  result = *((_DWORD *)this + 2051);
  *((_DWORD *)this + 2049) += result;
  v4 = *((_BYTE *)this + 8214) == 0;
  *((_DWORD *)this + 2048) = this;
  *((_DWORD *)this + 2051) = 0;
  if ( !v4 )
  {
    *((_DWORD *)this + 2050) += a2;
    *((_BYTE *)this + 8214) = 0;
    *((_DWORD *)this + 2049) = 0;
  }
  return result;
}
