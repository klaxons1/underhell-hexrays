int *__thiscall sub_1010D450(float *this, int a2)
{
  int *result; // eax
  int v4; // edx
  float *v5; // eax
  int v6; // ecx
  int v7; // eax
  float v8[3]; // [esp+4h] [ebp-10h] BYREF
  float v9; // [esp+10h] [ebp-4h]

  result = (int *)sub_100422D0();
  if ( result )
  {
    v4 = *result;
    v9 = this[3];
    v5 = (float *)(*(int (__thiscall **)(int *))(v4 + 268))(result);
    v6 = *((_DWORD *)this + 1);
    v8[0] = *v5 * v9;
    v8[1] = v5[1] * v9;
    v8[2] = v9 * v5[2];
    (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v6 + 48))(v6, v8, 3);
    result = (int *)sub_101BC880();
    if ( (_BYTE)result )
    {
      v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 12))(this);
      return (int *)sub_101BCA60(v7);
    }
  }
  return result;
}
