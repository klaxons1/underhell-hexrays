char __thiscall sub_103101D0(_DWORD *this, int a2)
{
  int v2; // edi
  _DWORD *v4; // esi
  int v6; // ebx
  int v7; // edi
  int *v8; // eax

  v2 = a2;
  if ( a2 )
    a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    a2 = -1;
  v4 = this + 930;
  if ( sub_101A40D0(this + 930, (int)&a2) == -1 )
  {
    if ( this[938] + 1 > 8 )
      return 0;
    if ( v2 )
      v6 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
    else
      v6 = -1;
    v7 = v4[8];
    v4[8] = v7 + 1;
    v4[9] = v4;
    v8 = &v4[v7];
    if ( v8 )
      *v8 = v6;
  }
  return 1;
}
