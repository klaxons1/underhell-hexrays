int sub_10452D00()
{
  int v0; // eax
  int v1; // eax
  int result; // eax

  v0 = sub_10184390(12);
  if ( v0 )
  {
    *(_DWORD *)(v0 + 4) = 0;
    *(_DWORD *)(v0 + 8) = 0;
    dword_106960DC = v0;
  }
  else
  {
    dword_106960DC = 0;
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
  dword_106960E0 = v1;
  *(_DWORD *)(dword_106960DC + 4) = v1;
  *(_DWORD *)(dword_106960DC + 8) = dword_106960DC;
  *(_DWORD *)(dword_106960E0 + 4) = dword_106960E0;
  result = dword_106960DC;
  *(_DWORD *)(dword_106960E0 + 8) = dword_106960DC;
  dword_106960E4 = 0;
  return result;
}
