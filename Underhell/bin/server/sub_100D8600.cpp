void __thiscall sub_100D8600(_DWORD *this, int a2)
{
  char **v3; // ecx
  char *v4; // ecx
  char *v5; // esi
  int v6; // edi
  char i; // al
  float v8[6]; // [esp+8h] [ebp-60h] BYREF
  char v9[12]; // [esp+20h] [ebp-48h] BYREF
  _BYTE v10[16]; // [esp+2Ch] [ebp-3Ch] BYREF
  int v11; // [esp+3Ch] [ebp-2Ch]

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !v4 )
      return;
    v5 = v4;
  }
  else
  {
    v5 = (char *)sub_1010D460(v3);
  }
  if ( v5 && *v5 )
  {
    sub_1001F130(v8);
    (*(void (__thiscall **)(_DWORD *, char *, float *, _BYTE *))(*this + 156))(this, v5, v8, v10);
    sub_10422220(v10, v9);
    v8[3] = v8[0];
    v6 = this[6];
    v8[4] = v8[1];
    v8[5] = v8[2];
    v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v6);
    for ( i = *v5; i >= 48; i = *++v5 )
    {
      if ( i > 57 )
        break;
    }
    sub_1028E890(v5, v8);
  }
}
