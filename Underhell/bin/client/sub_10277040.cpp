void __thiscall sub_10277040(int this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( *(_BYTE *)(this + 948) )
  {
    sub_10252EF0((_DWORD *)this, a2);
  }
  else
  {
    v3 = (_DWORD *)sub_10229D00(32);
    if ( v3 )
    {
      v4 = sub_1022B1A0(v3, (int)"MouseWheeled", "delta", a2);
      sub_10236860((void *)this, v4);
    }
    else
    {
      sub_10236860((void *)this, 0);
    }
  }
}
