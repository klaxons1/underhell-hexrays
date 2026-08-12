void __thiscall sub_100925F0(float *this, float a2, float a3)
{
  if ( a3 <= 0.0 )
    *this = *(float *)(dword_106B31C8 + 12) + a2;
  else
    *this = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              LODWORD(a2),
              LODWORD(a3))
          + *(float *)(dword_106B31C8 + 12);
}
