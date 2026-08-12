int sub_1024A8D0()
{
  int v0; // esi
  int result; // eax
  int v2; // eax

  v0 = 0;
  result = sub_10249BA0();
  if ( result > 0 )
  {
    do
    {
      v2 = sub_10249D60(v0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 100))(v2);
      ++v0;
      result = sub_10249BA0();
    }
    while ( v0 < result );
  }
  return result;
}
