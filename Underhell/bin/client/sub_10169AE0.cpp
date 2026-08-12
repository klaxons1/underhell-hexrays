int __cdecl sub_10169AE0(int a1)
{
  _BYTE *v1; // eax
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int v6[3]; // [esp+38h] [ebp-28h] BYREF
  int v7[3]; // [esp+44h] [ebp-1Ch] BYREF
  int v8; // [esp+54h] [ebp-Ch]
  char v9[4]; // [esp+58h] [ebp-8h]
  int v10; // [esp+5Ch] [ebp-4h]

  sub_1022A940("originx", 0.0);
  *(float *)v6 = 0.0;
  sub_1022A940("originy", 0.0);
  *(float *)&v6[1] = 0.0;
  sub_1022A940("originz", 0.0);
  *(float *)&v6[2] = 0.0;
  sub_1022A940("directionx", 0.0);
  *(float *)v7 = 0.0;
  sub_1022A940("directiony", 0.0);
  *(float *)&v7[1] = 0.0;
  sub_1022A940("directionz", 0.0);
  *(float *)&v7[2] = 0.0;
  v1 = (_BYTE *)sub_1022B4C0("model", (int)Locale);
  if ( *v1 )
    v10 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, v1);
  else
    v10 = 0;
  sub_1022A940("scale", 0.0);
  v2 = sub_1022A800("framerate", 0);
  v3 = sub_1022A800("flags", 0);
  *(_DWORD *)v9 = sub_1022A800("materialtype", 0);
  v8 = sub_1022A800("radius", 0);
  v4 = sub_1022A800("magnitude", 0);
  return sub_10169A50(a1, COERCE_INT(0.0), (float *)v6, v10, 0.0, v2, v3, v8, v4, (float *)v7, v9[0], 0);
}
