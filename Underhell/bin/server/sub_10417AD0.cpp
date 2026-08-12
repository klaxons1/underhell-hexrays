char __thiscall sub_10417AD0(void *this, float *a2, float *a3, int a4)
{
  int v4; // eax
  int v5; // esi
  char result; // al
  float *v7; // eax
  int (__thiscall *v8)(int); // edx
  float *v9; // eax
  double v10; // st7
  _BYTE v11[12]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, a4);
  if ( !v4 )
    v4 = sub_10261B20();
  v5 = v4;
  if ( !v4 )
    return 0;
  v7 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 504))(v4, v11);
  *a2 = *v7;
  a2[1] = v7[1];
  v8 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 508);
  a2[2] = v7[2];
  v9 = (float *)v8(v5);
  *a3 = *v9;
  a3[1] = v9[1];
  v10 = v9[2];
  result = 1;
  a3[2] = v10;
  return result;
}
