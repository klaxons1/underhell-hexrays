char __thiscall sub_1027C2C0(_DWORD *this, int a2)
{
  int *v3; // esi
  int v4; // edi
  int v5; // eax
  int v7; // edx

  v3 = this + 58;
  if ( a2 < 0 )
    return 0;
  if ( a2 >= this[59] )
    return 0;
  if ( a2 > this[65] )
    return 0;
  v4 = 12 * a2;
  v5 = 12 * a2 + *v3;
  if ( *(_DWORD *)(v5 + 4) == a2 && *(_DWORD *)(v5 + 8) != a2 )
    return 0;
  sub_102750F0(this + 76, (_DWORD *)(v4 + *v3));
  v7 = *v3;
  *((_BYTE *)this + 353) = 1;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + v7) + 300))(*(_DWORD *)(v4 + v7));
  sub_10265FF0(v3, a2);
  *(_DWORD *)(*v3 + v4 + 8) = v3[5];
  v3[5] = a2;
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  return 1;
}
