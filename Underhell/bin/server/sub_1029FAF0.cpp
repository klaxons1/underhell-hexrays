int *__thiscall sub_1029FAF0(void *this)
{
  _BYTE *v2; // edi
  unsigned __int8 (__thiscall *v3)(_BYTE *); // edx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // esi

  v2 = (_BYTE *)*((_DWORD *)this + 1);
  v3 = *(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 2168);
  v2[3547] = 0;
  if ( v3(v2) )
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 2176))(v2);
  v4 = *((_DWORD *)this + 17);
  if ( v4 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 17) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*((_DWORD *)this + 17) & 0xFFF) + 1];
  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 1) + 140))(*((_DWORD *)this + 1), v5, -1);
  sub_100EA940(*((int **)this + 1), 1024);
  sub_101C73D0(*((unsigned int **)this + 1), 0);
  sub_100EBE30(*((_DWORD *)this + 1), 10);
  v6 = *(_DWORD *)(*((_DWORD *)this + 1) + 424);
  if ( v6 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 48))(v6, 0);
  (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 280))(this, (int)this + 76, (int)this + 88);
  v7 = *((_DWORD *)this + 1);
  v8 = *((_DWORD *)this + 17);
  if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
    return sub_10268580(0, v7);
  else
    return sub_10268580((_DWORD *)off_1061BE18[4 * (v8 & 0xFFF) + 1], v7);
}
