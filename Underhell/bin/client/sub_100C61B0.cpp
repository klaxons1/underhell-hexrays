char __thiscall sub_100C61B0(_DWORD *this)
{
  _DWORD v2[4]; // [esp+4h] [ebp-10h] BYREF

  v2[0] = 0x10000;
  v2[1] = -1;
  v2[2] = 0;
  v2[3] = 0;
  if ( !this[4] )
    this[4] = (*(int (__thiscall **)(int, _DWORD *, const char *, _DWORD *, _DWORD))(*(_DWORD *)dword_10413174 + 36))(
                dword_10413174,
                this + 3,
                "Captions",
                v2,
                0);
  return 1;
}
