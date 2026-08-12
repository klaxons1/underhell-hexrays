float *__thiscall sub_100132F0(int this, float *a2, int a3, int a4, int a5)
{
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // ecx
  float *result; // eax
  float *v10; // eax
  int v11; // eax
  float v12[3]; // [esp+4h] [ebp-Ch] BYREF

  v6 = *(_DWORD *)(this + 4128);
  if ( v6 != -1
    && (v7 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 4128) & 0xFFF) + 4), v7[1] == v6 >> 12)
    && (v8 = *v7) != 0
    && (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 332))(v8) )
  {
    sub_100131D0((_DWORD *)this);
    sub_101EE040(this + 4332, a3, a4, a5);
    result = a2;
    if ( a2 )
    {
      *a2 = *(float *)(this + 4320);
      a2[1] = *(float *)(this + 4324);
      a2[2] = *(float *)(this + 4328);
    }
  }
  else
  {
    v10 = sub_1000E860((float *)this, v12);
    *a2 = *v10;
    a2[1] = v10[1];
    a2[2] = v10[2];
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 536))(this);
    return (float *)sub_101EE040(v11, a3, a4, a5);
  }
  return result;
}
