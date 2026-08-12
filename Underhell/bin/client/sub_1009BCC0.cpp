int __thiscall sub_1009BCC0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // edx
  int v5; // edx

  result = a2;
  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 != a2 )
  {
    if ( v3 )
      *(_DWORD *)(v3 + 12) = *(_DWORD *)(a2 + 12);
    else
      *this = *(_DWORD *)(a2 + 12);
    v4 = *(_DWORD *)(a2 + 12);
    if ( v4 )
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(a2 + 8);
    else
      this[1] = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 12) = a2;
    *(_DWORD *)(a2 + 8) = a2;
  }
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 8) = this[1];
  this[1] = a2;
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 )
    *(_DWORD *)(v5 + 12) = a2;
  else
    *this = a2;
  return result;
}
