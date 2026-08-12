int __thiscall sub_100C02A0(int this)
{
  char v2; // al

  v2 = *(_BYTE *)(this + 16);
  if ( (v2 & 1) != 0 && (v2 & 2) == 0 )
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413188 + 188))(
      dword_10413188,
      *(_DWORD *)(this + 20),
      1);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413188 + 212))(dword_10413188, *(_DWORD *)(this + 20));
  sub_10034930(*(_DWORD *)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  return sub_10034930(this);
}
