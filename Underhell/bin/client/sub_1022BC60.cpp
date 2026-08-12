_DWORD *__thiscall sub_1022BC60(_DWORD *this)
{
  int v1; // ebx
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // eax
  const char *v5; // eax
  int v6; // eax
  char Buffer[12]; // [esp+Ch] [ebp-10h] BYREF
  _DWORD *v9; // [esp+18h] [ebp-4h]

  v1 = (int)this;
  v2 = (_DWORD *)this[6];
  v9 = this;
  v3 = 1;
  if ( v2 )
  {
    do
    {
      v4 = KeyValuesSystem();
      v5 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 16))(v4, *v2);
      v6 = atoi(v5);
      if ( v3 <= v6 )
        v3 = v6 + 1;
      v2 = (_DWORD *)v2[5];
    }
    while ( v2 );
    v1 = (int)v9;
  }
  sub_10228370(Buffer, 0xCu, "%d", v3);
  return sub_1022B430(v1, (int)Buffer);
}
