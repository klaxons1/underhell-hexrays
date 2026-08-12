int __thiscall sub_102254B0(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  _BYTE *v4; // eax
  int v5; // edi

  result = this[244];
  if ( result )
  {
    sub_10223D20(this, (unsigned int)result);
    v3 = 0;
    result = sub_1041CB40(this[244]);
    if ( result > 0 )
    {
      do
      {
        v4 = (_BYTE *)(*(int (__thiscall **)(_DWORD *, int))(*this + 896))(this, v3);
        if ( v4 )
          sub_100EEF90(v4, this[244], 0);
        ++v3;
        result = sub_1041CB40(this[244]);
      }
      while ( v3 < result );
    }
  }
  v5 = this[244];
  if ( v5 )
  {
    sub_1041E7C0(this[244]);
    result = sub_10184660(v5);
  }
  this[244] = 0;
  return result;
}
