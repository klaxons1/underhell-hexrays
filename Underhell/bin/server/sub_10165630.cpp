_DWORD *__thiscall sub_10165630(_DWORD *this, int a2, int a3)
{
  int v4; // ebx
  int v5; // eax
  double v6; // st7
  int v7; // eax
  float v9; // [esp+4h] [ebp-1Ch]
  _BYTE v10[12]; // [esp+14h] [ebp-Ch] BYREF

  v4 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 580))(a2, v10);
  sub_10219BB0(this);
  *this = &CPASFilter::`vftable';
  sub_1021A370(v4);
  *this = &CPASAttenuationFilter::`vftable';
  v5 = sub_1023A740(a3);
  if ( v5 <= 50 )
    v6 = 4.0;
  else
    v6 = 20.0 / (double)(v5 - 50);
  v9 = v6;
  v7 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 580))(a2, v10);
  sub_1021A0E0(v7, v9);
  return this;
}
