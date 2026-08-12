int __cdecl sub_100BE310(int a1)
{
  int v1; // eax
  int result; // eax
  int v3; // eax

  while ( 1 )
  {
    v1 = a1 ? a1 - 24 : 0;
    result = *(_DWORD *)(v1 + 28);
    if ( dword_106960D8 <= *(_DWORD *)(result + 48) )
      break;
    sub_101CB960(**(_DWORD **)(dword_106960D0 + 4));
    v3 = *(_DWORD *)(dword_106960D0 + 4);
    *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4) = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8);
    --dword_106960D8;
    sub_10184660(v3);
  }
  return result;
}
