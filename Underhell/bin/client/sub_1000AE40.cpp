void __thiscall sub_1000AE40(float *this)
{
  if ( *((_BYTE *)this + 1986) )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 920))(this);
    this[518] = 0.0;
  }
  else
  {
    if ( *((float *)off_103DC81C + 3) > (double)this[499] )
    {
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)this + 1044))(0, 0.0);
      this[499] = *((float *)off_103DC81C + 3) + 0.5;
    }
    *((_BYTE *)this + 1986) = 1;
  }
}
