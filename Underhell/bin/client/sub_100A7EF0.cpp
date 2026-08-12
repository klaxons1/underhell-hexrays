char __thiscall sub_100A7EF0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // esi
  char result; // al

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10434620 + 40))(dword_10434620);
  *(_DWORD *)(this[1] + 4668) = *(__int16 *)(a2 + 64);
  *(_DWORD *)(this[1] + 4672) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 20))(
                                  v3,
                                  *(_DWORD *)(this[1] + 4668));
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)v3 + 16))(
    v3,
    *(_DWORD *)(this[1] + 4668),
    0,
    0,
    this[1] + 4676,
    0);
  *(float *)(this[1] + 4676) = *(float *)(this[1] + 4676) * 1.25;
  if ( *(float *)(this[1] + 4676) > 1.0 )
    *(float *)(this[1] + 4676) = 1.0;
  v4 = this[1];
  result = *(_BYTE *)(*(_DWORD *)(v4 + 4672) + 72);
  *(_BYTE *)(v4 + 4680) = result;
  return result;
}
