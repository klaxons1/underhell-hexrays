_DWORD *__thiscall sub_100D8E80(int this, void *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  _DWORD *v5; // edi
  int v7; // esi
  int v8; // eax

  v3 = *(_DWORD *)(this + 308);
  if ( v3 == -1
    || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1], off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12)
    || (v5 = (_DWORD *)*v4) == 0 )
  {
    sub_10422700(a2);
    return a2;
  }
  if ( *(_BYTE *)(this + 305) )
  {
    v7 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    v8 = (*(int (__thiscall **)(_DWORD *))(*v5 + 208))(v5);
    if ( v8
      && (*(unsigned __int8 (__thiscall **)(int, _DWORD, void *))(*(_DWORD *)v8 + 796))(
           v8,
           *(unsigned __int8 *)(this + 305),
           a2) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
      return a2;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
  }
  if ( (v5[63] & 0x800) != 0 )
    sub_100DAE60(v5);
  return v5 + 125;
}
