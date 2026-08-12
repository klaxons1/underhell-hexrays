int __thiscall sub_101BE260(int this)
{
  const char *v2; // eax
  _DWORD *v3; // edi
  int v4; // ebx
  int *v5; // ecx
  double v6; // st7
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int *v10; // ecx
  int (__thiscall *v11)(int); // edx
  int result; // eax
  float v13; // [esp+1Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(int, float *))(*(_DWORD *)this + 28))(this, &v13);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  sub_100CF450((_DWORD *)this, -1);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 1);
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  sub_100EC4A0((int *)this, -1.0, 0);
  v3 = (_DWORD *)(this + 220);
  if ( *(int *)(this + 220) <= 0 && *v3 != 25 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *v3 = 25;
  }
  v4 = dword_106B31C8;
  if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 124);
    }
    *(float *)(this + 124) = *(float *)(v4 + 12);
  }
  v6 = 0.0;
  v7 = *(_DWORD *)(this + 864);
  v13 = 0.0;
  if ( v7 != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
      {
        sub_100194B0(v8, 864);
        v6 = 0.0;
      }
    }
    *(float *)(this + 864) = v6;
  }
  v9 = *(_DWORD *)(this + 904);
  v13 = v6;
  if ( v9 != LODWORD(v13) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 904) = v6;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
      {
        sub_100194B0(v10, 904);
        v6 = 0.0;
      }
      *(float *)(this + 904) = v6;
    }
  }
  v11 = *(int (__thiscall **)(int))(*(_DWORD *)this + 584);
  *(_BYTE *)(this + 2184) = 0;
  *(_BYTE *)(this + 2160) = 0;
  result = v11(this);
  if ( !*(_DWORD *)(this + 424) )
    return sub_1025FAC0(this);
  return result;
}
