void __thiscall sub_100B8C80(_BYTE *this, char a2)
{
  int v3; // edx
  double v4; // st7

  v3 = *((unsigned __int16 *)this + 5);
  this[28] = 0;
  *((_WORD *)this + 3) = (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                           *((unsigned __int16 *)this + 4),
                           v3);
  if ( a2 )
  {
    v4 = *(float *)(dword_106B31C8 + 12);
    this[4] = 0;
  }
  else
  {
    v4 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           *((float *)this + 3),
           *((float *)this + 4))
       + *(float *)(dword_106B31C8 + 12);
    this[4] = 1;
  }
  *(float *)this = v4;
}
