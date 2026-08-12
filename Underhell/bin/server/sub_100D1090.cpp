void __thiscall sub_100D1090(float *this)
{
  if ( *((_BYTE *)this + 1146) )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1012))(this);
    this[308] = 0.0;
  }
  else
  {
    if ( *(float *)(dword_106B31C8 + 12) > (double)this[289] )
    {
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)this + 1132))(0, 0.0);
      this[289] = *(float *)(dword_106B31C8 + 12) + 0.5;
    }
    *((_BYTE *)this + 1146) = 1;
  }
}
