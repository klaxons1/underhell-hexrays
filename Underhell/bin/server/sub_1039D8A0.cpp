int *__thiscall sub_1039D8A0(int this)
{
  const char *v2; // eax
  char *v3; // eax
  int *result; // eax
  int *v5; // edi
  int *v6; // ecx
  char *v7; // edx
  int v8; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 28))(this, &v8);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
  if ( *(_DWORD *)(this + 220) != 100 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 100;
  }
  v3 = *(char **)(this + 3620);
  if ( !v3 )
    v3 = (char *)String;
  result = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, 0, 0, 0);
  v5 = result;
  if ( result )
  {
    result = (int *)(*(int (__thiscall **)(int *))(*result + 8))(result);
    v8 = *result;
  }
  else
  {
    v8 = -1;
  }
  if ( *(_DWORD *)(this + 3628) != v8 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 3628);
    }
    result = (int *)v8;
    *(_DWORD *)(this + 3628) = v8;
  }
  if ( v5 )
  {
    result = (int *)(*(int (__thiscall **)(int *))(*v5 + 208))(v5);
    if ( result )
    {
      v7 = *(char **)(this + 3624);
      if ( !v7 )
        v7 = (char *)String;
      v8 = sub_100BEF30((int)result, v7);
      result = sub_1039D7F0((_DWORD *)(this + 3632), &v8);
    }
  }
  *(_BYTE *)(this + 2680) = 1;
  return result;
}
