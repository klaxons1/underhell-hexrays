void __thiscall sub_10050CC0(float *this)
{
  if ( (unsigned __int8)sub_1004B510(this, 100006, 1) )
  {
    this[48] = -1.0;
    this[51] = -1.0;
  }
  else if ( 0.0 == this[50] )
  {
    this[48] = this[49] + *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    this[48] = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(this[49], this[50])
             + *(float *)(dword_106B31C8 + 12);
  }
}
