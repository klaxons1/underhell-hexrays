int __cdecl sub_100EC0F0(_DWORD *a1, int a2)
{
  int result; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  result = a2;
  v3 = *(_DWORD *)(a2 + 6712);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 6708) = *(_DWORD *)(a2 + 6708);
    v4 = *(_DWORD *)(a2 + 6708);
    if ( v4 )
      *(_DWORD *)(v4 + 6712) = *(_DWORD *)(a2 + 6712);
  }
  else if ( *a1 == a2 )
  {
    v5 = *(_DWORD *)(a2 + 6708);
    *a1 = v5;
    if ( v5 )
      *(_DWORD *)(v5 + 6712) = 0;
  }
  *(_DWORD *)(a2 + 6712) = 0;
  *(_DWORD *)(a2 + 6708) = 0;
  return result;
}
