void __thiscall sub_1036BF10(int this, _BYTE *a2)
{
  double v3; // st7

  sub_1036AF30((int *)this, a2);
  if ( (*(_BYTE *)(this + 256) & 1) != 0 )
  {
    v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           2.0,
           8.0)
       + *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(this + 3681) = 1;
    *(float *)(this + 3684) = v3;
  }
}
