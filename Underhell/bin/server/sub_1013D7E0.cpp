void __thiscall sub_1013D7E0(_BYTE *this, _DWORD *a2)
{
  char v3; // al
  bool v4; // cl
  __int64 v5; // [esp+0h] [ebp-14h]
  float v6; // [esp+8h] [ebp-Ch]

  v3 = (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 720))(this, a2[1], *a2);
  if ( this[800] )
    v4 = v3 == 0;
  else
    v4 = v3;
  v6 = 0.0;
  HIDWORD(v5) = this;
  LODWORD(v5) = *a2;
  if ( v4 )
    sub_1010DD80((_DWORD *)this + 201, v5, v6);
  else
    sub_1010DD80((_DWORD *)this + 207, v5, v6);
}
