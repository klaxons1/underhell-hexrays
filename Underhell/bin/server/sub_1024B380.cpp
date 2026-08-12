_DWORD *__cdecl sub_1024B380(_DWORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  int v4; // esi
  _DWORD *result; // eax

  v2 = a2;
  v3 = *(_DWORD *)(dword_106C68C0 + 4 * a2);
  if ( !*(_DWORD *)(v3 + 8) )
  {
    v4 = dword_106C68C0 + 4 * a2;
    *(_DWORD *)(*(_DWORD *)v4 + 8) = *sub_10162BE0(&a2, *(_BYTE **)(v3 + 4));
  }
  result = a1;
  *a1 = *(_DWORD *)(*(_DWORD *)(dword_106C68C0 + 4 * v2) + 8);
  return result;
}
