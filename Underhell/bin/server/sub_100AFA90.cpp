double __thiscall sub_100AFA90(int this, int a2)
{
  int v3; // esi
  int *v4; // ebx
  _DWORD v6[2]; // [esp+8h] [ebp-Ch] BYREF
  int *v7; // [esp+10h] [ebp-4h]

  if ( !a2 )
    return -1.0;
  v6[0] = a2;
  *(float *)&v6[1] = -1.0;
  v7 = 0;
  v3 = sub_100ADBC0((unsigned __int8 (__cdecl **)(int, int))(this + 8), (int)v6);
  if ( v7 )
  {
    v4 = v7;
    sub_10068150(v7);
    sub_10184660(v4);
  }
  v7 = 0;
  if ( v3 != -1 )
    return *(float *)(*(_DWORD *)(this + 12) + 28 * v3 + 20);
  else
    return -1.0;
}
