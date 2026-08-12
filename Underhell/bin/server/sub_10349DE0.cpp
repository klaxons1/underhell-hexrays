int __thiscall sub_10349DE0(_DWORD *this)
{
  const char *v2; // edi

  v2 = (const char *)this[1032];
  if ( !v2 )
    v2 = String;
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  return sub_1039F870(this + 145, this, v2);
}
