void __thiscall sub_10050BE0(float *this)
{
  if ( 0.0 == this[2] )
    *this = *(float *)(dword_106B31C8 + 12) + this[1];
  else
    *this = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(this[1], this[2])
          + *(float *)(dword_106B31C8 + 12);
}
