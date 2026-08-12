void __cdecl sub_102CC5E0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  sub_10147310(&dword_1043C868);
  v0 = (_DWORD *)sub_1001ACF0(&dword_1043C868);
  if ( v0 )
  {
    do
    {
      v1 = (_DWORD *)*v0;
      sub_10034930((int)v0);
      v0 = v1;
    }
    while ( v1 );
  }
  sub_1001ACF0(&dword_1043C868);
}
