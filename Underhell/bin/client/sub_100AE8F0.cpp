int __thiscall sub_100AE8F0(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int result; // eax
  char Destination[264]; // [esp+Ch] [ebp-10Ch] BYREF
  int v9; // [esp+114h] [ebp-4h]

  v3 = this[648];
  v4 = *(_DWORD *)v3;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 388))(dword_1041315C);
  sub_1022ACA0("appid", v5);
  if ( !a2 )
  {
    memset(Destination, 0, 261);
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 204))(dword_1041315C);
    result = sub_102286F0(v6, Destination, 0x105u);
    if ( !Destination[0] )
      return result;
    if ( sub_10229D00(32) )
      v9 = sub_10229D20("map");
    else
      v9 = 0;
    sub_1022A7C0(v9);
    v4 = v9;
    sub_1022ABA0("mapname", Destination);
  }
  *(_BYTE *)(v3 + 4) |= sub_100AE7C0((int)this, v4, a2);
  result = ((int (__thiscall *)(int (***)(), int, int))(*off_103E0700)[1])(off_103E0700, v4, a2);
  *(_BYTE *)(v3 + 4) |= result;
  return result;
}
