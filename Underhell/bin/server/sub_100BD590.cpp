int sub_100BD590()
{
  int v0; // eax
  int result; // eax

  for ( ; dword_106960D8 > 0; result = sub_10184660(v0) )
  {
    v0 = *(_DWORD *)(dword_106960D0 + 4);
    *(_DWORD *)(*(_DWORD *)(v0 + 8) + 4) = *(_DWORD *)(v0 + 4);
    *(_DWORD *)(*(_DWORD *)(v0 + 4) + 8) = *(_DWORD *)(v0 + 8);
    --dword_106960D8;
  }
  return result;
}
