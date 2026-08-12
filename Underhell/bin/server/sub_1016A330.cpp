float *__thiscall sub_1016A330(int this)
{
  float *result; // eax
  int v3; // ebx
  int *v4; // ecx
  float v5; // [esp+0h] [ebp-14h]
  double v6; // [esp+Ch] [ebp-8h] BYREF

  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  result = (float *)sub_100EC4A0((int *)this, v5, 0);
  if ( *(_DWORD *)(this + 3620) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
    result = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 784))(this, this);
  }
  if ( *(_BYTE *)(this + 896) && !*(_BYTE *)(this + 897) )
  {
    v3 = dword_106B31C8;
    if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 124);
      }
      *(float *)(this + 124) = *(float *)(v3 + 12);
    }
    v6 = 1.0;
    sub_10045730((float *)(this + 864), &v6);
    *(float *)(this + 804) = 0.0;
    *(_BYTE *)(this + 896) = 0;
    HIDWORD(v6) = 0;
    result = sub_100EE8F0((float *)(this + 904), (int *)&v6 + 1);
    if ( !*(_DWORD *)(this + 3620) )
    {
      v6 = 0.0;
      return sub_10045730((float *)(this + 864), &v6);
    }
  }
  return result;
}
