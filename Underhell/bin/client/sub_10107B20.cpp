int *sub_10107B20()
{
  int v0; // ebx
  int *result; // eax
  int v2; // edi
  int *v3; // esi
  int v4; // [esp+8h] [ebp-4h]

  v0 = 0;
  v4 = 0;
  result = (int *)((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC);
  v2 = (int)result - 1;
  if ( (int)result - 1 >= 0 )
  {
    do
    {
      result = (int *)((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, v2);
      v3 = result;
      if ( result )
      {
        if ( sub_10034D10(result) )
        {
          result = (int *)sub_10039B00(v3);
          ++v4;
        }
        else
        {
          result = (int *)(*(int (__thiscall **)(int *))(v3[2] + 4))(v3 + 2);
          ++v0;
        }
      }
      --v2;
    }
    while ( v2 >= 0 );
    if ( v0 > 0 || v4 > 0 )
      return (int *)Msg("Shutdown %i predictable entities and %i client-created entities\n", v4, v0);
  }
  return result;
}
