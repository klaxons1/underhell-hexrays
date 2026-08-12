float *__thiscall sub_1024F7D0(float *this, int a2)
{
  float *v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  int (__thiscall *v7)(int); // eax
  float *result; // eax
  double v9; // st6
  double v10; // st7
  float v11; // [esp+8h] [ebp-Ch]
  float v12; // [esp+Ch] [ebp-8h]
  float v13; // [esp+10h] [ebp-4h]

  v11 = *(float *)(a2 + 716);
  v12 = *(float *)(a2 + 720);
  v13 = *(float *)(a2 + 724);
  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 320) + 4))(a2 + 320);
  v4 = *v3 + v11;
  v5 = v3[1] + v12;
  v6 = v3[2];
  v7 = *(int (__thiscall **)(int))(*(_DWORD *)(a2 + 320) + 8);
  this[202] = v4;
  this[203] = v5;
  this[204] = v6 + v13;
  result = (float *)v7(a2 + 320);
  v9 = result[1] + v12;
  v10 = result[2] + v13;
  this[205] = *result + v11;
  this[206] = v9;
  this[207] = v10;
  return result;
}
