_DWORD *__thiscall sub_10261520(_DWORD *this, int a2, float a3, int a4)
{
  _DWORD v6[4]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  v6[1] = this + 2;
  *this = 0;
  v6[3] = a4;
  v6[0] = &CFlaggedEntitiesEnum::`vftable';
  v6[2] = 512;
  v7 = 0;
  (*(void (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)dword_106B31EC + 52))(
    dword_106B31EC,
    16,
    a2,
    LODWORD(a3),
    0,
    v6);
  this[1] = v7;
  return this;
}
