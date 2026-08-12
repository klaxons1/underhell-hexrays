int sub_100BE430()
{
  int i; // esi
  _DWORD *v1; // eax
  int v2; // ecx
  const char **v3; // eax
  int v4; // edi
  int j; // esi
  int v6; // eax
  int result; // eax
  _BYTE v8[4]; // [esp+Ch] [ebp-4h] BYREF

  Msg("Current Number of Ragdolls: %i \n", dword_106960D8);
  Msg("Current Number of Gibs: %i \n", dword_106960E4);
  Msg("Current Number of UH Items: %i \n", dword_106960F0);
  for ( i = 0; i < dword_106960D8; ++i )
  {
    v1 = *(_DWORD **)(dword_106960D0 + 4);
    if ( i > 0 )
    {
      v2 = i;
      do
      {
        --v2;
        v1 = (_DWORD *)v1[1];
      }
      while ( v2 );
    }
    v3 = (const char **)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)*v1 + 28))(*v1, v8);
    Msg("Modelname of ragdoll indes %i is %s\n", i, *v3);
  }
  v4 = 0;
  for ( j = 4928; j < 5040; j += 4 )
  {
    v6 = sub_10261B20();
    result = Msg("Item at slot %i is %i\n", v4++, *(_DWORD *)(j + v6));
  }
  return result;
}
