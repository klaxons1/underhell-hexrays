void __thiscall sub_1017AF80(_DWORD *this, _DWORD *a2)
{
  int v2; // esi
  int v3; // ebx
  _DWORD *v4; // edi
  int v5; // eax
  const char *v6; // eax
  __int64 v7; // [esp+0h] [ebp-2Ch]
  int v8[4]; // [esp+18h] [ebp-14h] BYREF
  int v9; // [esp+28h] [ebp-4h]

  v2 = 0;
  v9 = (int)this;
  memset(v8, 0, sizeof(v8));
  v3 = 0;
  v4 = this + 222;
  do
  {
    if ( sub_1010BBC0(v4) > 0 )
      *((_BYTE *)v8 + v2++) = v3;
    ++v3;
    v4 += 6;
  }
  while ( v3 < 16 );
  if ( v2 <= 0 )
  {
    v6 = sub_100D6390((_DWORD *)v9);
    DevMsg(1, "Firing PickRandom input on logic_case %s with no cases set up\n", v6);
  }
  else
  {
    v5 = *((unsigned __int8 *)v8
         + (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v2 - 1));
    if ( v5 < 16 )
    {
      HIDWORD(v7) = v9;
      LODWORD(v7) = *a2;
      sub_1010DD80((_DWORD *)(v9 + 8 * (3 * v5 + 111)), v7, 0.0);
    }
  }
}
