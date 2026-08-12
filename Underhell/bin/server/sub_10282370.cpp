int sub_10282370()
{
  _DWORD *v0; // esi
  int result; // eax

  v0 = (_DWORD *)dword_106D233C;
  if ( dword_106D233C )
  {
    do
    {
      result = (*(int (__thiscall **)(_DWORD *))(*v0 + 20))(v0);
      v0 = (_DWORD *)v0[2];
    }
    while ( v0 );
  }
  return result;
}
