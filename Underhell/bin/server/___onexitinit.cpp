int __onexitinit()
{
  _DWORD *v0; // esi

  v0 = sub_101845E0(32, 4);
  dword_10709CB0 = EncodePointer(v0);
  dword_10709CAC = dword_10709CB0;
  if ( !v0 )
    return 24;
  *v0 = 0;
  return 0;
}
