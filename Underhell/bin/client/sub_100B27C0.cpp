void *__thiscall sub_100B27C0(int this, float *a2, float *a3, float *a4)
{
  void *result; // eax
  void *v6; // ebx
  float *v7; // edi
  float *v8; // eax
  double v9; // st6
  double v10; // rt0
  float v11[3]; // [esp+4h] [ebp-18h] BYREF
  float v12[3]; // [esp+10h] [ebp-Ch] BYREF

  *a2 = *(float *)(this + 16);
  a2[1] = *(float *)(this + 20);
  a2[2] = *(float *)(this + 24);
  *a3 = *(float *)(this + 28);
  a3[1] = *(float *)(this + 32);
  a3[2] = *(float *)(this + 36);
  *a4 = *(float *)(this + 48);
  result = *(void **)(this + 40);
  if ( result )
  {
    result = (void *)sub_1007A6A0(off_103DCD78, (int)result);
    v6 = result;
    if ( result )
    {
      result = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)result + 500))(result);
      if ( (_BYTE)result )
      {
        v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
        v8 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)v6 + 36))(v6);
        v9 = v7[1] + v8[1];
        v10 = v7[2] + v8[2];
        v12[0] = *v7 + *v8 - *(float *)(this + 16);
        v12[1] = v9 - *(float *)(this + 20);
        v12[2] = v10 - *(float *)(this + 24);
        sub_101EE190(v12, v11);
        return sub_100B2110((float *)this, v11);
      }
    }
  }
  return result;
}
