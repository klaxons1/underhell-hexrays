int __onexitinit()
{
  _DWORD *v0; // esi

  v0 = sub_100DD9C0(32, 4);
  Ptr = EncodePointer(v0);
  dword_1048ACF0 = Ptr;
  if ( !v0 )
    return 24;
  *v0 = 0;
  return 0;
}
