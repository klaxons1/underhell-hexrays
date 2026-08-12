int __stdcall sub_10281C60(int a1, char *String)
{
  int v2; // eax
  int v3; // ecx
  char *v4; // edx
  _BYTE v6[1024]; // [esp+Ch] [ebp-400h] BYREF

  v2 = *(_DWORD *)(a1 + 80);
  if ( v2 < 4 )
    goto LABEL_6;
  if ( v2 <= 5 )
  {
    atoi(String);
    return sub_1025F470(*(_DWORD ***)(a1 + 8));
  }
  if ( v2 == 6 )
  {
    v3 = *(_DWORD *)(a1 + 12);
    v4 = String;
  }
  else
  {
LABEL_6:
    (*(void (__thiscall **)(int, char *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      String,
      v6,
      1024);
    v3 = *(_DWORD *)(a1 + 4);
    v4 = v6;
  }
  return (*(int (__thiscall **)(int, char *))(*(_DWORD *)v3 + 772))(v3, v4);
}
