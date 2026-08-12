int __thiscall sub_10085AD0(_DWORD *this, unsigned __int16 a2)
{
  int v3; // esi
  int result; // eax

  v3 = this[9] + 168 * a2;
  if ( *(char *)(v3 + 8) >= 0 )
  {
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_1041318C + 8))(
      *(unsigned __int16 *)(v3 + 4),
      this[5],
      this[5],
      0xFFFF);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1041318C + 36))(
      *(unsigned __int16 *)(v3 + 4),
      0.0,
      0.0,
      1.0,
      1.0);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_1041318C + 48))(*(unsigned __int16 *)(168
                                                                                         * *(unsigned __int16 *)(v3 + 4)
                                                                                         + this[9]
                                                                                         + 4));
    result = 128;
    *(_WORD *)(v3 + 8) |= 0x80u;
  }
  return result;
}
