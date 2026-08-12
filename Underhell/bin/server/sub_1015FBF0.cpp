int __thiscall sub_1015FBF0(int this)
{
  const char *v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  int result; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  char v13; // al
  char v14; // bl
  int v15; // eax
  char v16; // bl
  int v17; // eax
  _BYTE v18[8]; // [esp+8h] [ebp-8h] BYREF

  v2 = (const char *)sub_10430F10(&dword_106B4A9C);
  sub_1015EFA0(this, "CBaseGameStats::Event_LevelInit [%s]\n", v2);
  v3 = sub_10430F10(&dword_106B4A9C);
  v4 = (_DWORD *)sub_10162950(v3);
  ++*v4;
  result = dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    sub_1042CBA0("closecaption");
    if ( (unsigned __int8)sub_1042C850(v18) )
    {
      if ( byte_106B4AC3 )
      {
        v6 = sub_10430F10(&dword_106B4A9C);
        v7 = sub_10162950(v6);
        ++*(_DWORD *)(v7 + 16);
      }
      if ( byte_106B4AC4 )
        ++*(_DWORD *)(this + 24);
    }
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B31CC + 24))(dword_106B31CC) )
    {
      if ( byte_106B4AC3 )
      {
        v8 = sub_10430F10(&dword_106B4A9C);
        v9 = sub_10162950(v8);
        ++*(_DWORD *)(v9 + 12);
      }
      if ( byte_106B4AC4 )
        ++*(_DWORD *)(this + 20);
    }
    v10 = *(_DWORD *)(dword_106B3E7C + 48);
    if ( v10 <= 3 )
    {
      if ( v10 < 1 )
        v10 = 1;
    }
    else
    {
      v10 = 3;
    }
    if ( byte_106B4AC3 )
    {
      v11 = sub_10430F10(&dword_106B4A9C);
      v12 = sub_10162950(v11);
      ++*(_DWORD *)(v12 + 4 * v10 + 16);
    }
    if ( byte_106B4AC4 )
      ++*(_DWORD *)(this + 4 * v10 + 24);
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D8 + 20))(dword_106B31D8);
    v14 = v13;
    if ( byte_106B4AC4 )
      *(_BYTE *)(this + 40) = v13;
    if ( byte_106B4AC3 )
    {
      v15 = sub_10430F10(&dword_106B4A9C);
      *(_BYTE *)(sub_10162950(v15) + 32) = v14;
    }
    *(_BYTE *)(this + 76) = v14;
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31CC + 20))(dword_106B31CC);
    v16 = result;
    if ( byte_106B4AC4 )
      *(_BYTE *)(this + 41) = result;
    if ( byte_106B4AC3 )
    {
      v17 = sub_10430F10(&dword_106B4A9C);
      result = sub_10162950(v17);
      *(_BYTE *)(result + 33) = v16;
    }
    *(_BYTE *)(this + 77) = v16;
  }
  return result;
}
