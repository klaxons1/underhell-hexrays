void __thiscall sub_102D3C00(_BYTE *this, _BYTE *a2)
{
  int v3; // edi

  if ( a2[361] && (a2[356] & 4) == 0 )
  {
    if ( this[2109] )
    {
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1152))(this);
    }
    else if ( a2 )
    {
      v3 = (*(int (**)(void))(*(_DWORD *)a2 + 288))();
      if ( v3 )
      {
        if ( sub_100F4030(this) != v3 )
        {
          HIBYTE(a2) = 1;
          sub_100F46B0(this + 2109, (_BYTE *)&a2 + 3);
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1152))(this);
        }
      }
    }
  }
}
