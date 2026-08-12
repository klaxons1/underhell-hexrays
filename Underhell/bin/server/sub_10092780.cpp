void __thiscall sub_10092780(float *this, int a2, float a3, float a4)
{
  if ( a2 != 2 )
  {
    if ( a4 <= 0.0 )
      this[a2 + 200] = *(float *)(dword_106B31C8 + 12) + a3;
    else
      this[a2 + 200] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                         dword_106B31E4,
                         LODWORD(a3),
                         LODWORD(a4))
                     + *(float *)(dword_106B31C8 + 12);
  }
}
