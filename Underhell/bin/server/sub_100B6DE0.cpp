char *__thiscall sub_100B6DE0(_DWORD *this)
{
  char *v2; // eax
  int v3; // eax
  char *v4; // eax
  int v5; // eax
  char *v6; // eax
  int v7; // eax
  char *result; // eax

  sub_1002FB90((int)this);
  v2 = (char *)this[915];
  if ( v2 && (v3 = sub_1012BF20(0, v2, 0, 0, 0, 0)) != 0 )
    this[911] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  else
    this[911] = -1;
  v4 = (char *)this[916];
  if ( v4 && (v5 = sub_1012BF20(0, v4, 0, 0, 0, 0)) != 0 )
    this[912] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  else
    this[912] = -1;
  v6 = (char *)this[917];
  if ( v6 && (v7 = sub_1012BF20(0, v6, 0, 0, 0, 0)) != 0 )
    this[913] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  else
    this[913] = -1;
  result = (char *)this[918];
  if ( result && (result = (char *)sub_1012BF20(0, result, 0, 0, 0, 0)) != 0 )
  {
    result = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)result + 8))(result);
    this[914] = *(_DWORD *)result;
  }
  else
  {
    this[914] = -1;
  }
  return result;
}
