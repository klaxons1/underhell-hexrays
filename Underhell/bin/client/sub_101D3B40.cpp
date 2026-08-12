double sub_101D3B40()
{
  int v0; // eax
  float v2; // [esp+0h] [ebp-4h]

  v0 = 10;
  v2 = 1.0e10;
  do
  {
    --v0;
    v2 = v2 * v2;
  }
  while ( v0 );
  return v2;
}
