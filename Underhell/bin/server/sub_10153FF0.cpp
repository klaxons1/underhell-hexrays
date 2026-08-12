int sub_10153FF0()
{
  int result; // eax
  int v1; // esi

  result = dword_106B31C8;
  v1 = *(_DWORD *)(dword_106B31C8 + 44);
  if ( v1 )
  {
    result = sub_1025B790(v1 + 28, 16);
    *(_DWORD *)(v1 + 24) = result;
  }
  return result;
}
