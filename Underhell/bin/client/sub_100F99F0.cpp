int __thiscall sub_100F99F0(__int16 *this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // edi
  int i; // esi
  int v7; // ecx
  _DWORD v8[1024]; // [esp+8h] [ebp-1000h] BYREF

  result = sub_100F98F0(this, (int)v8, 1024);
  v5 = result;
  for ( i = 0; i < v5; ++i )
  {
    v7 = v8[i];
    if ( v7 )
      result = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v7 + 4))(v7, a2, a3, a4);
  }
  return result;
}
