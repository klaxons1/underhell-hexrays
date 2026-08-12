void __thiscall sub_100AB460(int *this, _DWORD *a2)
{
  int v3; // ebx
  int v4; // eax
  int *v5; // esi
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax

  if ( (a2[64] & 0x2000000) != 0
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 284))(a2) )
  {
    v3 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
    v4 = this[2];
    v5 = this + 1;
    v6 = this[4];
    if ( v6 + 1 > v4 )
      sub_102ABFC0(v6 - v4 + 1);
    ++v5[3];
    v7 = *v5;
    v8 = v5[3] - v6 - 1;
    v5[4] = *v5;
    if ( v8 > 0 )
      memcpy((void *)(v7 + 4 * v6 + 4), (const void *)(v7 + 4 * v6), 4 * v8);
    v9 = (_DWORD *)(*v5 + 4 * v6);
    if ( v9 )
      *v9 = v3;
  }
}
