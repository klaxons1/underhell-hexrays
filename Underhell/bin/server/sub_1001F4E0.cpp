_DWORD *__thiscall sub_1001F4E0(_DWORD *this, int a2, int a3)
{
  int v4; // ebx
  double v5; // st7
  int v6; // eax
  float v8; // [esp+4h] [ebp-1Ch]
  _BYTE v9[12]; // [esp+14h] [ebp-Ch] BYREF

  v4 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 580))(a2, v9);
  sub_10219BB0(this);
  *this = &CPASFilter::`vftable';
  sub_1021A370(v4);
  *this = &CPASAttenuationFilter::`vftable';
  if ( a3 <= 50 )
    v5 = 4.0;
  else
    v5 = 20.0 / (double)(a3 - 50);
  v8 = v5;
  v6 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 580))(a2, v9);
  sub_1021A0E0(v6, v8);
  return this;
}
