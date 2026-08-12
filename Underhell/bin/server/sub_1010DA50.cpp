void __thiscall sub_1010DA50(_DWORD *this, int a2, int a3, int a4, int a5, int a6, __int64 a7, float a8)
{
  int v8; // esi
  int v9; // ecx
  double v10; // st7
  char *v11; // eax
  char *v12; // ecx
  char *v13; // eax
  char *v14; // ecx
  int v15; // eax
  int v16; // eax
  const char *v17; // edx
  int v18; // edi
  int ArgList; // [esp+0h] [ebp-14Ch]
  double ArgLista; // [esp+0h] [ebp-14Ch]
  double v21; // [esp+8h] [ebp-144h]
  float v22; // [esp+14h] [ebp-138h]
  float v23; // [esp+14h] [ebp-138h]
  int v24; // [esp+20h] [ebp-12Ch]
  char Buffer[256]; // [esp+30h] [ebp-11Ch] BYREF
  int v26; // [esp+130h] [ebp-1Ch]
  int v27; // [esp+134h] [ebp-18h]
  int v28; // [esp+138h] [ebp-14h]
  _DWORD *v29; // [esp+144h] [ebp-8h]
  int v30; // [esp+148h] [ebp-4h]

  v8 = this[5];
  v29 = this;
  v30 = 0;
  while ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    v10 = *(float *)(v8 + 12);
    v24 = *(_DWORD *)(v8 + 20);
    if ( v9 )
    {
      v26 = *(_DWORD *)(v8 + 8);
      ArgList = v9;
      v13 = *(char **)(v8 + 4);
      if ( !v13 )
        v13 = (char *)String;
      v14 = *(char **)v8;
      if ( !*(_DWORD *)v8 )
        v14 = (char *)String;
      v23 = v10;
      sub_1010C5D0((float *)dword_10614CA8, v14, v13, ArgList, v27, v28, -1, 2, v23, a7, SHIDWORD(a7), v24);
    }
    else
    {
      v11 = *(char **)(v8 + 4);
      if ( !v11 )
        v11 = (char *)String;
      v12 = *(char **)v8;
      if ( !*(_DWORD *)v8 )
        v12 = (char *)String;
      v22 = v10 + a8;
      sub_1010C5D0((float *)dword_10614CA8, v12, v11, a2, a3, a4, a5, a6, v22, a7, SHIDWORD(a7), v24);
    }
    if ( 0.0 == *(float *)(v8 + 12) )
    {
      v21 = *(float *)(dword_106B31C8 + 12);
      sub_10429A00(Buffer, 0x100u, "(%0.2f) output: (%s,%s) -> (%s,%s)(%s)\n", SLOBYTE(v21));
      DevMsg(2, Buffer);
    }
    else
    {
      ArgLista = *(float *)(dword_106B31C8 + 12);
      sub_10429A00(Buffer, 0x100u, "(%0.2f) output: (%s,%s) -> (%s,%s,%.1f)(%s)\n", SLOBYTE(ArgLista));
      DevMsg(2, Buffer);
    }
    if ( HIDWORD(a7) && (*(_BYTE *)(HIDWORD(a7) + 236) & 0x10) != 0 )
      sub_100D6660((_DWORD *)HIDWORD(a7), v8);
    v15 = *(_DWORD *)(v8 + 16);
    if ( v15 == -1 || (v16 = v15 - 1, (*(_DWORD *)(v8 + 16) = v16) != 0) )
    {
      v30 = v8;
      v8 = *(_DWORD *)(v8 + 24);
    }
    else
    {
      if ( HIDWORD(a7) )
      {
        if ( *(_DWORD *)(HIDWORD(a7) + 92) )
          v17 = *(const char **)(HIDWORD(a7) + 92);
        else
          v17 = String;
      }
      else
      {
        v17 = "NULL";
      }
      sub_10429A00(Buffer, 0x100u, "Removing from action list: (%s,%s) -> (%s,%s)\n", (char)v17);
      DevMsg(2, Buffer);
      if ( v30 )
        *(_DWORD *)(v30 + 24) = *(_DWORD *)(v8 + 24);
      else
        v29[5] = *(_DWORD *)(v8 + 24);
      v18 = *(_DWORD *)(v8 + 24);
      sub_1042FBE0(v8);
      v8 = v18;
    }
  }
}
