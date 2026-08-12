int __thiscall sub_102CCF20(int this, int a2)
{
  int *v3; // ecx
  char **v4; // eax
  char *v5; // edi
  int v6; // eax
  int v7; // ebx
  _DWORD *v8; // eax
  int result; // eax
  unsigned int v10; // edi
  int *v11; // ecx

  v3 = (int *)a2;
  v4 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v4 = (char **)&a2;
  }
  v5 = *v4;
  v6 = *(_DWORD *)(this + 252) >> 11;
  *(_DWORD *)(this + 1076) = v5;
  v7 = *v3;
  if ( (v6 & 1) != 0 )
    sub_100DAE60(this);
  if ( !v5 )
    v5 = (char *)String;
  v8 = sub_1012C650(v5, (float *)(this + 580), 0.0, this, v7, 0, 0);
  if ( v8 )
    *(_DWORD *)(this + 808) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v8 + 8))(v8);
  else
    *(_DWORD *)(this + 808) = -1;
  result = *(_DWORD *)(this + 248);
  v10 = result & 0xFFFFFF7F;
  if ( result != (result & 0xFFFFFF7F) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 248) = v10;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        result = sub_100194B0(v11, 248);
      *(_DWORD *)(this + 248) = v10;
    }
  }
  return result;
}
