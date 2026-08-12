int __thiscall sub_100442A0(int this, int a2)
{
  int v2; // esi
  _DWORD *v3; // ebx
  int *v4; // edi
  unsigned int v5; // eax
  int v6; // ecx

  v2 = 0;
  v3 = (_DWORD *)(this - 8);
  v4 = (int *)(this + 4344);
  do
    *v4++ = sub_1000A5F0(v3, v2++);
  while ( v2 < 32 );
  *(_BYTE *)(this + 4108) = (*(int (__thiscall **)(_DWORD *))(*v3 + 844))(v3) == 2;
  v5 = *(_DWORD *)(this + 3780);
  if ( v5 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 3780) & 0xFFF) + 2) != v5 >> 12 )
    v6 = 0;
  else
    v6 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 3780) & 0xFFF) + 1);
  if ( v6 )
    *(_DWORD *)(this + 3416) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  else
    *(_DWORD *)(this + 3416) = -1;
  return sub_100255C0((_BYTE *)this, a2);
}
