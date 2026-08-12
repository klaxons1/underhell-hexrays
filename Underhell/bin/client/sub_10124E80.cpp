void __thiscall sub_10124E80(float *this, int a2)
{
  sub_10123A70((int)this, a2);
  if ( a2 )
  {
    if ( this[726] != this[710] || this[707] != this[723] || this[708] != this[724] || this[709] != this[725] )
      sub_10124BD0((int)(this - 2));
  }
  else
  {
    (*(void (__stdcall **)(_DWORD))(*((_DWORD *)this - 2) + 408))(-1293.0);
  }
}
