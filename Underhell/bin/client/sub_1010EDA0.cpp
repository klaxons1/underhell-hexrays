int __thiscall sub_1010EDA0(_DWORD *this)
{
  _DWORD *v1; // ebx
  int v2; // edi
  _DWORD *v3; // ebx
  int v4; // esi
  int result; // eax

  v1 = this;
  v2 = 0;
  *this = &CRagdoll::`vftable';
  if ( (int)this[1] > 0 )
  {
    v3 = this + 7;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)off_103E1DD0 + 12))(off_103E1DD0, *v3);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 48))(v4, 0);
      }
      ++v2;
      v3 += 6;
    }
    while ( v2 < this[1] );
    v1 = this;
  }
  result = sub_101142F0(v1 + 1);
  *v1 = &IRagdoll::`vftable';
  return result;
}
