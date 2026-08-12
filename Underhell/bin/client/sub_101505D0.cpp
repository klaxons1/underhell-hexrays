int sub_101505D0()
{
  _DWORD *v0; // esi
  int result; // eax

  v0 = (_DWORD *)dword_1043CC68;
  if ( dword_1043CC68 )
  {
    do
    {
      result = (*(int (__thiscall **)(_DWORD *))(*v0 + 48))(v0);
      v0 = (_DWORD *)v0[2];
    }
    while ( v0 );
  }
  return result;
}
