void __cdecl sub_10470390()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)dword_10614CD8;
  if ( dword_10614CD8 )
  {
    do
    {
      v1 = (_DWORD *)v0[12];
      sub_1042FBE0(dword_1069A8D4, v0);
      v0 = v1;
    }
    while ( v1 );
  }
  dword_10614CD8 = 0;
}
