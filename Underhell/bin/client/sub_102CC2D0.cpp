void __cdecl sub_102CC2D0()
{
  int v0; // edi
  int *v1; // esi

  v0 = 4;
  v1 = &dword_103E7D94;
  do
  {
    v1 -= 10;
    sub_10233210(v1);
    --v0;
  }
  while ( v0 >= 0 );
}
