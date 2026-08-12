char __thiscall sub_1020EE70(_DWORD *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // esi
  int v5; // edx
  _DWORD v7[11]; // [esp+24h] [ebp-44h] BYREF
  float v8[3]; // [esp+50h] [ebp-18h] BYREF
  float v9[3]; // [esp+5Ch] [ebp-Ch] BYREF

  sub_10112C00((int)(this + 80), 2);
  v9[0] = 12.0;
  v9[1] = 12.0;
  v9[2] = 12.0;
  v8[0] = -12.0;
  v8[1] = -12.0;
  v8[2] = -12.0;
  sub_100D5D10((int)v8, (int)v9);
  v2 = this[63] >> 11;
  qmemcpy(v7, &unk_105046B8, sizeof(v7));
  v7[7] = this;
  if ( (v2 & 1) != 0 )
    sub_100DAE60((int)this);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v3 = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD *, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)dword_106BAFF4 + 36))(
         12.0,
         0,
         this + 145,
         this + 176,
         v7,
         0);
  v4 = v3;
  if ( v3 )
  {
    sub_100E9500(this, v3);
    sub_100E0970((int)this, v5, 6, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 96))(v4);
  }
  return 1;
}
