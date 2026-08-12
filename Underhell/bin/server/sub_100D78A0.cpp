_DWORD *__thiscall sub_100D78A0(_DWORD *this, int a2, float a3)
{
  int v4; // ebx
  int v5; // eax
  float v7[3]; // [esp+14h] [ebp-Ch] BYREF

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 580))(a2);
  sub_10219BB0(this);
  *this = &CPASFilter::`vftable';
  sub_1021A370(v4);
  *this = &CPASAttenuationFilter::`vftable';
  v5 = (*(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)a2 + 580))(a2, v7, LODWORD(a3));
  sub_1021A0E0(v5, COERCE_FLOAT(v7));
  return this;
}
