void __fastcall sub_10184DD0(int a1, int a2)
{
  const char *v3; // eax
  _BYTE v4[4]; // [esp+8h] [ebp-4h] BYREF

  sub_100E0970(a1, a2, 7, 0);
  sub_10112C00(a1 + 320, 6);
  *(_DWORD *)(a1 + 252) |= 0x40000u;
  if ( *(_DWORD *)(a1 + 800) == 1 )
    sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) | 4);
  v3 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v4);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, v3);
  if ( *(_DWORD *)(a1 + 804) && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 720))(a1) )
  {
    if ( *(_DWORD *)(a1 + 800) != 2 )
      sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) | 4);
    sub_100EAB80((_DWORD *)a1, 32);
    *(_DWORD *)(a1 + 804) = 1;
  }
  if ( !*(_DWORD *)(a1 + 260) || !*(_DWORD *)(a1 + 100) )
    sub_100EA940((int *)a1, 0x1000000);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 584))(a1);
  if ( *(_BYTE *)(a1 + 808) )
    sub_10112C00(a1 + 320, 1);
}
