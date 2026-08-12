int __thiscall sub_10268FF0(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int result; // eax

  v2 = this[56];
  if ( v2 != -1 )
  {
    v3 = this[53];
    do
    {
      v4 = 12 * v2;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + v4) + 300))(*(_DWORD *)(v3 + v4));
      v3 = this[53];
      v2 = *(_DWORD *)(v3 + v4 + 8);
    }
    while ( v2 != -1 );
  }
  sub_1026C690(this + 53);
  result = 0;
  this[65] = 0;
  this[75] = 0;
  return result;
}
