_DWORD *__thiscall sub_1016A650(int this)
{
  int v2; // edx
  _BYTE *v3; // edi
  int v4; // eax
  int *v5; // ecx
  _DWORD *result; // eax
  const char *v7; // eax
  const char *v8; // eax
  float v9; // [esp+4h] [ebp-14h]
  float v10; // [esp+14h] [ebp-4h] BYREF

  sub_10112C00(this + 320, 0);
  sub_100E0970(this, v2, 0, 0);
  v3 = (_BYTE *)(this + 225);
  if ( *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *v3 = 0;
  }
  v4 = *(_DWORD *)(this + 904);
  v10 = 0.0;
  if ( v4 != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 904);
    }
    *(float *)(this + 904) = 0.0;
  }
  v9 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v9, 0);
  result = (_DWORD *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)this + 28))(this, &v10);
  if ( *result )
  {
    v7 = *(const char **)(*(int (__thiscall **)(int, float *))(*(_DWORD *)this + 28))(this, &v10);
    if ( !v7 )
      v7 = String;
    sub_100E8220((int)v3, v7);
    v8 = *(const char **)(*(int (__thiscall **)(int, float *))(*(_DWORD *)this + 28))(this, &v10);
    if ( !v8 )
      v8 = String;
    result = (_DWORD *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v8);
    *(float *)(this + 3620) = *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    *(float *)(this + 3620) = *(float *)(dword_106B31C8 + 12);
  }
  return result;
}
