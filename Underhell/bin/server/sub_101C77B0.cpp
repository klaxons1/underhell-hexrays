int __thiscall sub_101C77B0(unsigned __int16 *this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // edi
  int i; // esi
  int v7; // ecx
  _DWORD v8[1024]; // [esp+8h] [ebp-1000h] BYREF

  result = sub_101C7650(this, (int)v8, 1024);
  v5 = result;
  for ( i = 0; i < v5; ++i )
  {
    v7 = v8[i];
    if ( v7 )
      result = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v7 + 4))(v7, a2, a3, a4);
  }
  return result;
}
