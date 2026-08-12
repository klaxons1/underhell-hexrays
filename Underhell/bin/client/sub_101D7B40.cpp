int *__thiscall sub_101D7B40(void *this, int a2, int a3)
{
  unsigned int v4; // ecx
  int *result; // eax
  int v6; // esi
  int v7; // edx
  int v8; // esi
  int v9; // edx
  int v10; // esi
  _BYTE v11[16]; // [esp+14h] [ebp-14h] BYREF

  (*(void (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)this + 92))(this, v11, a3);
  (*(void (__thiscall **)(void *, int, int, _DWORD))(*(_DWORD *)this + 100))(this, a2, a3 + 8, 0);
  v4 = 0;
  result = (int *)(a2 + 8);
  do
  {
    v6 = *(result - 1);
    *(result - 2) = *(result - 2) & 0xFFFFFF | ((unsigned __int8)v11[v4] << 24);
    v7 = v6 & 0xFFFFFF | ((unsigned __int8)v11[v4 + 1] << 24);
    v8 = *result;
    *(result - 1) = v7;
    v9 = v8 & 0xFFFFFF | ((unsigned __int8)v11[v4 + 2] << 24);
    v10 = result[1];
    *result = v9;
    result[1] = v10 & 0xFFFFFF | ((unsigned __int8)v11[v4 + 3] << 24);
    v4 += 4;
    result += 4;
  }
  while ( v4 < 0x10 );
  return result;
}
