int sub_10452C90()
{
  int v0; // eax
  int v1; // eax
  int result; // eax

  v0 = sub_10184390(12);
  if ( v0 )
  {
    *(_DWORD *)(v0 + 4) = 0;
    *(_DWORD *)(v0 + 8) = 0;
    dword_106960D0 = v0;
  }
  else
  {
    dword_106960D0 = 0;
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
  dword_106960D4 = v1;
  *(_DWORD *)(dword_106960D0 + 4) = v1;
  *(_DWORD *)(dword_106960D0 + 8) = dword_106960D0;
  *(_DWORD *)(dword_106960D4 + 4) = dword_106960D4;
  result = dword_106960D0;
  *(_DWORD *)(dword_106960D4 + 8) = dword_106960D0;
  dword_106960D8 = 0;
  return result;
}
