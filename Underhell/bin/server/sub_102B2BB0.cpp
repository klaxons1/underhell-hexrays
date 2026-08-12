float *__thiscall sub_102B2BB0(int this)
{
  int v2; // edi
  double v3; // st7
  int v4; // eax
  float *result; // eax
  int v6; // edi
  int v7; // ecx

  if ( sub_10023D10((_DWORD *)this, 30) )
    sub_100285C0((_DWORD *)this, 0, 1);
  if ( *(_BYTE *)(this + 224) )
    return (float *)sub_100285C0((_DWORD *)this, 0, 1);
  v2 = *(_DWORD *)(this + 2404);
  v3 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)this + 2336))(this);
  sub_100AC080(v2, (int)v3);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
  sub_10077CB0(v4);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2232))(this);
  result = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( result )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1496))(this, v6);
    result = (float *)(*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)this + 548))(this, v6, 16449, 0);
    if ( (_BYTE)result )
    {
      v7 = dword_106B31C8;
      if ( *(float *)(dword_106B31C8 + 12) - 2.0 > *(float *)(this + 3808) )
      {
        *(float *)(this + 3812) = *(float *)(dword_106B31C8 + 12);
        v7 = dword_106B31C8;
      }
      *(float *)(this + 3808) = *(float *)(v7 + 12);
      result = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
      *(float *)(this + 3820) = *result;
      *(float *)(this + 3824) = result[1];
      *(float *)(this + 3828) = result[2];
    }
  }
  else
  {
    *(float *)(this + 3820) = *(float *)(this + 3620);
    *(float *)(this + 3824) = *(float *)(this + 3624);
    *(float *)(this + 3828) = *(float *)(this + 3628);
  }
  return result;
}
