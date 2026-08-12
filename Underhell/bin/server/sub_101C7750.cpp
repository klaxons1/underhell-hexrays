int __thiscall sub_101C7750(unsigned __int16 *this, int a2)
{
  int result; // eax
  int v3; // edi
  int i; // esi
  int v5; // ecx
  _DWORD v6[1024]; // [esp+8h] [ebp-1000h] BYREF

  result = sub_101C7650(this, (int)v6, 1024);
  v3 = result;
  for ( i = 0; i < v3; ++i )
  {
    v5 = v6[i];
    if ( v5 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 4))(v5, a2);
  }
  return result;
}
