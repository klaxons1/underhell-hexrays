int __thiscall sub_10187730(float *this, const char *ArgList)
{
  float v3; // eax
  int v4; // ecx
  int result; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // edi
  int v11; // eax
  char Buffer[260]; // [esp+2Ch] [ebp-10Ch] BYREF
  int v13; // [esp+130h] [ebp-8h] BYREF
  int v14; // [esp+134h] [ebp-4h] BYREF

  this[1444] = 0.0;
  this[1595] = 0.0;
  v3 = *this;
  this[1594] = 0.0;
  (*(void (**)(void))(LODWORD(v3) + 200))();
  v4 = *((_DWORD *)this + 1578);
  if ( !v4 || (result = strcmp(ArgList, (const char *)sub_10229A00(v4))) != 0 )
  {
    v6 = *((_DWORD *)this + 1578);
    if ( v6 )
      sub_1022AF00(v6);
    if ( sub_10229D00(32) )
      v7 = sub_10229D20(ArgList);
    else
      v7 = 0;
    *((_DWORD *)this + 1578) = v7;
    sub_10228370(Buffer, 0x104u, "resource/overviews/%s.txt", (char)ArgList);
    if ( dword_1047C968 )
      v8 = dword_1047C968 + 4;
    else
      v8 = 0;
    if ( (unsigned __int8)sub_10229D70(v8, Buffer, "GAME") )
    {
      *((_DWORD *)this + 1577) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(
                                   dword_1047CA6C,
                                   0);
      v9 = dword_1047CA6C;
      v10 = *(_DWORD *)dword_1047CA6C;
      v11 = sub_1022B4C0("material", (int)Locale);
      (*(void (__thiscall **)(int, _DWORD, int, int, _DWORD))(v10 + 120))(v9, *((_DWORD *)this + 1577), v11, 1, 0);
      (*(void (__thiscall **)(int, _DWORD, int *, int *))(*(_DWORD *)dword_1047CA6C + 132))(
        dword_1047CA6C,
        *((_DWORD *)this + 1577),
        &v13,
        &v14);
      if ( v13 == v14 )
      {
        this[1579] = (float)sub_1022A800("pos_x", 0);
        this[1580] = (float)sub_1022A800("pos_y", 0);
        sub_1022A940("scale", 1.0);
        this[1582] = 1.0;
        *((_BYTE *)this + 6332) = sub_1022A800("rotate", 0) != 0;
        result = sub_1022A940("zoom", 1.0);
        this[1587] = 1.0;
      }
      else
      {
        result = DevMsg(1, "Error! CMapOverview::SetMap: map image must be a square.\n");
        this[1577] = NAN;
      }
    }
    else
    {
      result = DevMsg(1, "Error! CMapOverview::SetMap: couldn't load file %s.\n", Buffer);
      this[1579] = 0.0;
      this[1580] = 0.0;
      this[1577] = NAN;
      this[1582] = 1.0;
      *((_BYTE *)this + 6332) = 0;
      this[1587] = 1.0;
    }
  }
  return result;
}
