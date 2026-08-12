bool __thiscall sub_102665B0(_DWORD *this)
{
  float v3; // [esp+4h] [ebp-Ch]
  float v4; // [esp+8h] [ebp-8h]
  float v5; // [esp+Ch] [ebp-4h]

  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD))(*this + 856))(this, this + 176, 0, 0);
  return (v4 + v3) * 0.0 + v5 < 0.0;
}
