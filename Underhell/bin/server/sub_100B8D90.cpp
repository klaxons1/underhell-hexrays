void __thiscall sub_100B8D90(_BYTE *this)
{
  int v3; // eax
  double v4; // st7
  double v5; // st7
  double v6; // st7
  float v7; // [esp+Ch] [ebp-8h]

  if ( (*((_WORD *)this + 3))-- == 1 )
  {
    v3 = *((unsigned __int16 *)this + 5);
    this[28] = 0;
    *((_WORD *)this + 3) = (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                             *((unsigned __int16 *)this + 4),
                             v3);
    v4 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           *((float *)this + 3),
           *((float *)this + 4))
       + *(float *)(dword_106B31C8 + 12);
    this[4] = 1;
    *(float *)this = v4;
  }
  else
  {
    v5 = *((float *)this + 6);
    this[4] = 0;
    v7 = v5;
    v6 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           *((float *)this + 5),
           LODWORD(v7))
       + *(float *)this;
    *(float *)this = v6;
    if ( v6 < *(float *)(dword_106B31C8 + 12) )
      *(float *)this = *(float *)(dword_106B31C8 + 12);
  }
}
