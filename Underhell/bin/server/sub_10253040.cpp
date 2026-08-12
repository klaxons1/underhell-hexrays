unsigned int __thiscall sub_10253040(_DWORD *this)
{
  unsigned int result; // eax

  result = sub_100E0780((int)this);
  if ( !this[200] )
  {
    sub_10252DF0((int)this);
    return sub_100EC3F0(this, 0, 0.0, 0);
  }
  return result;
}
