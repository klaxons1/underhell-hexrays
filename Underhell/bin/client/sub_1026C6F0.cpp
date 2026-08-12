int __thiscall sub_1026C6F0(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  int i; // esi
  int v7; // ecx

  v2 = this[61];
  if ( v2 != -1 )
  {
    v3 = this[58];
    do
    {
      v4 = 12 * v2;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + v4) + 300))(*(_DWORD *)(v3 + v4));
      v3 = this[58];
      v2 = *(_DWORD *)(v3 + v4 + 8);
    }
    while ( v2 != -1 );
  }
  sub_1026C690(this + 58);
  this[75] = 0;
  this[70] = 0;
  this[80] = 0;
  v5 = this[85];
  for ( i = 0; i < v5; ++i )
  {
    v7 = *(_DWORD *)(this[82] + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 300))(v7);
  }
  this[85] = 0;
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
