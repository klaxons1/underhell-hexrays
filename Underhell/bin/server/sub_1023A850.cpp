_DWORD *__thiscall sub_1023A850(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // eax
  double v7; // st7
  float *v8; // eax
  float v10; // [esp+Ch] [ebp-1Ch]
  _BYTE v11[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 580))(a2, v11);
  sub_10219BB0(this);
  *this = &CPASFilter::`vftable';
  sub_1021A370(this, v5);
  *this = &CPASAttenuationFilter::`vftable';
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B3204 + 168))(dword_106B3204, a3, a4);
  if ( v6 <= 50 )
    v7 = 4.0;
  else
    v7 = 20.0 / (double)(v6 - 50);
  v10 = v7;
  v8 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 580))(a2, v11);
  sub_1021A0E0(this, v8, v10);
  return this;
}
