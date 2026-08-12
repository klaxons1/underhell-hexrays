_DWORD *__thiscall sub_10076C50(_DWORD *this, int a2, float a3, int a4, int a5)
{
  _DWORD v7[4]; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  v7[1] = this + 2;
  *this = 0;
  v7[3] = a4;
  v7[0] = &CFlaggedEntitiesEnum::`vftable';
  v7[2] = 256;
  v8 = 0;
  (*(void (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)dword_10413184 + 52))(
    dword_10413184,
    a5,
    a2,
    LODWORD(a3),
    0,
    v7);
  this[1] = v8;
  return this;
}
