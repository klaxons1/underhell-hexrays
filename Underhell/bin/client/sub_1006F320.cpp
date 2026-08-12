int sub_1006F320()
{
  _DWORD *v0; // esi
  int result; // eax

  v0 = (_DWORD *)dword_10412368;
  if ( dword_10412368 )
  {
    do
    {
      result = sub_1012CAB0(*v0, v0[1]);
      v0 = (_DWORD *)v0[2];
    }
    while ( v0 );
  }
  return result;
}
