int sub_1012DAE0()
{
  int v0; // esi
  int *v1; // eax
  int *v2; // eax
  int v4[6]; // [esp+8h] [ebp-24h] BYREF
  char v5; // [esp+20h] [ebp-Ch]
  int v6; // [esp+24h] [ebp-8h]
  int v7; // [esp+28h] [ebp-4h] BYREF

  memset(v4, 0, sizeof(v4));
  v5 = 0;
  v6 = 0;
  if ( dword_106AE3E4 )
    v0 = *(_DWORD *)dword_106AE3E4;
  else
    v0 = 0;
  if ( v0 )
  {
    do
    {
      v7 = v0;
      sub_1012D160(v4, &v7);
      v1 = &dword_1069E3E4[4 * (*(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v0 + 8))(v0) & 0xFFF)];
      if ( !v1 )
        break;
      v2 = (int *)v1[3];
      if ( !v2 )
        break;
      v0 = *v2;
    }
    while ( *v2 );
  }
  sub_1012CCE0(v4);
  return sub_102375F0(v4);
}
