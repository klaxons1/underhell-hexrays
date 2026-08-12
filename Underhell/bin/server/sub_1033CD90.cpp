char __thiscall sub_1033CD90(int this)
{
  *(float *)(this + 4240) = 3.4028235e38;
  if ( sub_100697A0((_DWORD *)this, 92, 0) )
    *(float *)(this + 4240) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                0.40000001,
                                0.60000002)
                            + *(float *)(dword_106B31C8 + 12);
  if ( sub_100697A0((_DWORD *)this, 28, 0)
    || sub_100697A0((_DWORD *)this, 103, 0)
    || sub_100697A0((_DWORD *)this, 104, 0) )
  {
    return 0;
  }
  if ( sub_10023D80((_DWORD *)this, 4, 0) )
    *(float *)(this + 4240) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                0.40000001,
                                0.60000002)
                            + *(float *)(dword_106B31C8 + 12);
  if ( *(_DWORD *)(this + 2796) )
  {
    if ( sub_100697A0((_DWORD *)this, 102, 0) )
      *(float *)(this + 4240) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                  dword_106B31E4,
                                  0.40000001,
                                  0.60000002)
                              + *(float *)(dword_106B31C8 + 12);
  }
  return sub_10021510((void *)this);
}
