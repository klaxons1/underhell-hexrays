int sub_10452D70()
{
  int v0; // eax
  int v1; // eax
  int result; // eax

  v0 = sub_10184390(12);
  if ( v0 )
  {
    *(_DWORD *)(v0 + 4) = 0;
    *(_DWORD *)(v0 + 8) = 0;
    dword_106960E8 = v0;
  }
  else
  {
    dword_106960E8 = 0;
  }
  v1 = sub_10184390(12);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 4) = 0;
    *(_DWORD *)(v1 + 8) = 0;
  }
  else
  {
    v1 = 0;
  }
  dword_106960EC = v1;
  *(_DWORD *)(dword_106960E8 + 4) = v1;
  *(_DWORD *)(dword_106960E8 + 8) = dword_106960E8;
  *(_DWORD *)(dword_106960EC + 4) = dword_106960EC;
  result = dword_106960E8;
  *(_DWORD *)(dword_106960EC + 8) = dword_106960E8;
  dword_106960F0 = 0;
  return result;
}
