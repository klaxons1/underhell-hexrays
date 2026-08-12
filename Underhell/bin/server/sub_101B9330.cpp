int *__thiscall sub_101B9330(signed __int32 this)
{
  int *result; // eax
  signed __int32 *v3; // eax
  int v4; // esi

  result = *(int **)(this + 16);
  if ( result )
  {
    v3 = sub_100FE100((_DWORD *)(this + 24));
    if ( v3 )
    {
      v3[1] = 0;
    }
    else
    {
      v3 = (signed __int32 *)sub_10184390(8);
      if ( v3 )
        v3[1] = 0;
      else
        v3 = 0;
    }
    sub_101B6F40(this, v3);
    while ( 1 )
    {
      result = sub_101B6FF0((volatile signed __int32 *)this);
      if ( !result )
        break;
      v4 = result[1];
      result = (int *)sub_100FE090((int *)(this + 24), result);
      if ( !v4 )
        break;
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
    }
  }
  return result;
}
