void __thiscall sub_1001EDC0(float *this, float a2, float a3)
{
  *((_BYTE *)this + 4) = 1;
  if ( 0.0 == a3 )
    *this = *(float *)(dword_106B31C8 + 12) + a2;
  else
    *this = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              LODWORD(a2),
              LODWORD(a3))
          + *(float *)(dword_106B31C8 + 12);
}
