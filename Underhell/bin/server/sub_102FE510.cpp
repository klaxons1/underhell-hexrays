void __thiscall sub_102FE510(int this)
{
  if ( *(_BYTE *)(this + 4128) || (*(_BYTE *)(this + 256) & 1) != 0 )
  {
    sub_101C73D0((unsigned int *)this, 0);
    sub_100DD660(this, (float *)(this + 4040));
    *(_WORD *)(this + 4127) = 0;
    *(float *)(this + 3668) = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                        dword_106B31E4,
                                        2,
                                        6)
                            + *(float *)(dword_106B31C8 + 12);
  }
}
