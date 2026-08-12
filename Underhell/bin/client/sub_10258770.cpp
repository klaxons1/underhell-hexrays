int __thiscall sub_10258770(int this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int i; // edi
  int v10; // eax
  int j; // ecx
  int v12; // eax
  int v13; // eax
  const char *v14; // eax
  int v15; // eax
  int v16; // eax
  _BYTE v18[8]; // [esp+10h] [ebp-418h] BYREF
  int v19; // [esp+18h] [ebp-410h]
  int v20; // [esp+1Ch] [ebp-40Ch]
  char v21; // [esp+20h] [ebp-408h]
  int v22; // [esp+24h] [ebp-404h]
  WCHAR WideCharStr[512]; // [esp+28h] [ebp-400h] BYREF

  v3 = 0;
  *(_BYTE *)(this + 336) = 1;
  v4 = sub_102581D0((_DWORD *)this, a2);
  v5 = *(_DWORD *)(this + 264);
  v22 = v4;
  v4 *= 32;
  v6 = *(_DWORD *)(v4 + v5);
  v7 = v5 + v4;
  v8 = *(_DWORD *)(v7 + 4);
  v19 = v6;
  LOBYTE(v6) = *(_BYTE *)(v7 + 8);
  v20 = v8;
  v21 = v6;
  for ( i = a2; (unsigned int)i < 0x3FF; WideCharStr[v3++] = *(_WORD *)(*(_DWORD *)(this + 224) + 2 * i++) )
  {
    if ( i >= *(_DWORD *)(this + 236) )
      break;
    sub_10258140((_DWORD *)this, i, (int)v18);
    if ( !v21 )
      break;
  }
  v10 = 0;
  WideCharStr[v3] = 0;
  for ( j = 0; j >= 0 && v10 < *(_DWORD *)(this + 276) && *(_DWORD *)(*(_DWORD *)(this + 264) + j + 28) <= a2; j += 32 )
    ++v10;
  v12 = v10 - 1;
  if ( v12 < 0 || v12 >= *(_DWORD *)(this + 276) )
    v12 = 0;
  v13 = *(_DWORD *)(this + 264) + 32 * v12;
  if ( *(_WORD *)(v13 + 10) )
  {
    v14 = sub_10231190((unsigned __int16 *)(v13 + 10));
    sub_10228590(v14, WideCharStr, 0x400u);
  }
  v15 = sub_10229D00(32);
  if ( v15 )
    v16 = sub_1022B140(v15, (int)"TextClicked", "text", WideCharStr);
  else
    v16 = 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 180))(this, v16);
  return (*(int (__thiscall **)(int, WCHAR *))(*(_DWORD *)this + 792))(this, WideCharStr);
}
