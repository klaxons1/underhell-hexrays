int __thiscall sub_100EA350(int *this, char *String2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  bool v11; // al
  int v12; // eax
  int v13; // esi
  int v15; // ebx
  int v16; // edi
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  int v20; // [esp-4h] [ebp-18h]
  int v21; // [esp+Ch] [ebp-8h] BYREF
  int v22; // [esp+10h] [ebp-4h]

  v8 = *(_DWORD *)(dword_1043581C + 48);
  v9 = sub_101FBD50(String2);
  v10 = v9;
  v22 = v9;
  v11 = v8 == 2 || v8 == 1 && v9 && *(_BYTE *)(v9 + 845);
  if ( a3 == 2 && v11 && (v12 = sub_100E9840(this, String2), v12 >= 0) )
  {
    v13 = *(_DWORD *)(this[2] + 24 * v12 + 20);
    sub_101F9C90(v13 + 16);
    return v13;
  }
  else if ( v10 )
  {
    v15 = sub_100EA1B0(this + 2, this[5]);
    v16 = this[2] + 24 * v15;
    v17 = *sub_100E9F00(&v21, this[1], v22, 0);
    v22 = v17;
    if ( v17 != *(_DWORD *)(v16 + 20) )
    {
      if ( v17 )
      {
        sub_100F1650(v17);
        v17 = v22;
      }
      v18 = *(_DWORD *)(v16 + 20);
      if ( v18 )
      {
        sub_100F1860(v18);
        v17 = v22;
      }
      *(_DWORD *)(v16 + 20) = v17;
    }
    if ( v21 )
      sub_100F1860(v21);
    if ( *(_DWORD *)(*(_DWORD *)(v16 + 20) + 80) )
    {
      sub_100EA020(this, v15, 0, this[1], a3, a4, *(float *)&a5, *(float *)&a6, *(float *)&a7);
      v19 = this[1];
      if ( v19 )
        (*(void (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)v19 + 372))(v19, String2, *(_DWORD *)(v16 + 20));
      return *(_DWORD *)(v16 + 20);
    }
    else
    {
      sub_100F0920(*(_DWORD *)(v16 + 20));
      sub_100ED890(v20);
      return 0;
    }
  }
  else
  {
    Warning("Attempting to create unknown particle system '%s' \n", String2);
    return 0;
  }
}
