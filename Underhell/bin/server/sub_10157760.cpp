char __thiscall sub_10157760(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // esi
  char result; // al

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B6E60 + 40))(dword_106B6E60);
  *(_DWORD *)(this[1] + 4504) = *(__int16 *)(a2 + 64);
  *(_DWORD *)(this[1] + 4508) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 20))(
                                  v3,
                                  *(_DWORD *)(this[1] + 4504));
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)v3 + 16))(
    v3,
    *(_DWORD *)(this[1] + 4504),
    0,
    0,
    this[1] + 4512,
    0);
  *(float *)(this[1] + 4512) = *(float *)(this[1] + 4512) * 1.25;
  if ( *(float *)(this[1] + 4512) > 1.0 )
    *(float *)(this[1] + 4512) = 1.0;
  v4 = this[1];
  result = *(_BYTE *)(*(_DWORD *)(v4 + 4508) + 72);
  *(_BYTE *)(v4 + 4516) = result;
  return result;
}
