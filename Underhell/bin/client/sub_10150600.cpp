int sub_10150600()
{
  int v0; // ecx
  int v1; // esi
  int result; // eax

  v0 = dword_1043CC6C;
  if ( dword_1043CC6C )
  {
    do
    {
      v1 = *(_DWORD *)(v0 + 12);
      result = (**(int (__stdcall ***)(int))v0)(1);
      v0 = v1;
    }
    while ( v1 );
  }
  dword_1043CC6C = 0;
  return result;
}
