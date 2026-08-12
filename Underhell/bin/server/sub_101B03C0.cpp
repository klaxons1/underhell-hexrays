float *__cdecl sub_101B03C0(float *a1, int a2, int a3)
{
  float *result; // eax
  float v4; // edx
  float v5; // ecx
  _BYTE v6[12]; // [esp+8h] [ebp-30h] BYREF
  _BYTE v7[12]; // [esp+14h] [ebp-24h] BYREF
  float v8; // [esp+20h] [ebp-18h] BYREF
  float v9; // [esp+24h] [ebp-14h]
  float v10; // [esp+28h] [ebp-10h]
  float v11[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( a3 )
  {
    (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)a2 + 216))(a2, 0, v7);
    (*(void (__thiscall **)(int, float *, _BYTE *))(*(_DWORD *)a2 + 228))(a2, v11, v7);
    (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)a3 + 216))(a3, 0, v6);
    (*(void (__thiscall **)(int, float *, _BYTE *))(*(_DWORD *)a2 + 228))(a2, &v8, v6);
    result = a1;
    *a1 = v11[0] - v8;
    a1[1] = v11[1] - v9;
    a1[2] = v11[2] - v10;
  }
  else
  {
    (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)a2 + 216))(a2, 0, v6);
    (*(void (__thiscall **)(int, float *, _BYTE *))(*(_DWORD *)a2 + 228))(a2, &v8, v6);
    result = a1;
    v4 = v9;
    *a1 = v8;
    v5 = v10;
    a1[1] = v4;
    a1[2] = v5;
  }
  return result;
}
