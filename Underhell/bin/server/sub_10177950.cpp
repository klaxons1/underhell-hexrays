bool __cdecl sub_10177950(int a1, int a2)
{
  int v3; // ecx
  float *v4; // eax
  _BYTE v5[44]; // [esp+8h] [ebp-88h] BYREF
  float v6; // [esp+34h] [ebp-5Ch]
  _BYTE v7[12]; // [esp+5Ch] [ebp-34h] BYREF
  _BYTE v8[16]; // [esp+68h] [ebp-28h] BYREF
  float v9[3]; // [esp+78h] [ebp-18h] BYREF
  float v10[3]; // [esp+84h] [ebp-Ch] BYREF
  int savedregs; // [esp+90h] [ebp+0h] BYREF

  if ( !a1 || !a2 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1088))(a2) )
    return 1;
  v3 = *(_DWORD *)(a1 + 424);
  if ( v3 )
  {
    (*(void (__thiscall **)(int, float *, _BYTE *))(*(_DWORD *)v3 + 188))(v3, v10, v7);
  }
  else
  {
    v4 = sub_100EA2C0(a1 + 320);
    v10[0] = *v4;
    v10[1] = v4[1];
    v10[2] = v4[2];
  }
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a2 + 504))(a2, v9);
  sub_10265720(a2, a1, 8);
  sub_10023120(COERCE_FLOAT(&savedregs), a2, v10, v9, 33570827, (int)v8, (int)v5);
  return v6 >= 1.0;
}
