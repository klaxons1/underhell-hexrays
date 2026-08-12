int __thiscall sub_1015F8C0(_DWORD *this, int a2)
{
  int v3; // ebx
  _DWORD *v4; // esi
  int v5; // esi
  int v6; // eax
  char *v7; // eax
  int result; // eax
  int v9; // edi
  char Destination[264]; // [esp+Ch] [ebp-108h] BYREF

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 436))(dword_106B31D0);
  if ( v3 )
  {
    v4 = (_DWORD *)this[648];
    if ( v4 )
    {
      if ( *v4 )
      {
        sub_1042B1A0(*v4);
        *v4 = 0;
      }
      sub_10184660(v4);
      this[648] = 0;
    }
  }
  else
  {
    v3 = this[648];
  }
  v5 = *(_DWORD *)v3;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 404))(dword_106B31D0);
  sub_1042AFD0("appid", v6);
  if ( a2 )
    goto LABEL_15;
  memset(Destination, 0, 261);
  v7 = *(char **)(dword_106B31C8 + 60);
  if ( !v7 )
    v7 = (char *)String;
  result = sub_104299C0(Destination, v7, 0x105u);
  if ( Destination[0] )
  {
    if ( sub_1042A310(32) )
      v9 = sub_1042A330("map");
    else
      v9 = 0;
    sub_1042ADD0(v9);
    sub_1042AF60("mapname", Destination);
    v5 = v9;
LABEL_15:
    result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)off_10627F88 + 4))(off_10627F88, v5, a2);
    *(_BYTE *)(v3 + 4) |= result;
  }
  return result;
}
