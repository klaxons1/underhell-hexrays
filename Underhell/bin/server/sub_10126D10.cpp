int __thiscall sub_10126D10(void *this)
{
  int v2; // eax
  int v3; // edi
  const char *v4; // eax
  int v5; // eax
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int v9; // ebx
  int v10; // ecx
  const char *v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+1Ch] [ebp-4h] BYREF

  v2 = sub_101811E0("gib", -1);
  v3 = __RTDynamicCast(
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CGib `RTTI Type Descriptor',
         0);
  if ( !v3 )
    Warning("classname %s used to create wrong class type\n", v12);
  if ( *((_BYTE *)this + 857) == 1 )
  {
    sub_10166E20(String);
  }
  else
  {
    v4 = *(const char **)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 28))(this, &v13);
    if ( !v4 )
      v4 = String;
    sub_10166E20(v4);
  }
  v5 = *((_DWORD *)this + 212);
  v13 = 0;
  if ( v5 > 1 )
    v13 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v5 - 1);
  if ( *(_DWORD *)(v3 + 852) != v13 )
  {
    if ( *(_BYTE *)(v3 + 84) )
    {
      *(_BYTE *)(v3 + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(v3 + 24);
      if ( v6 )
        sub_100194B0(v6, 852);
    }
    *(_DWORD *)(v3 + 852) = v13;
  }
  sub_101660B0(-1);
  *(_DWORD *)(v3 + 1128) = *((_DWORD *)this + 202);
  *(_BYTE *)(v3 + 113) = *((_BYTE *)this + 113);
  if ( *(_DWORD *)(v3 + 116) != *((_DWORD *)this + 29) )
  {
    if ( *(_BYTE *)(v3 + 84) )
    {
      *(_BYTE *)(v3 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(v3 + 24);
      if ( v7 )
        sub_100194B0(v7, 116);
    }
    *(_DWORD *)(v3 + 116) = *((_DWORD *)this + 29);
  }
  *(_BYTE *)(v3 + 112) = *((_BYTE *)this + 112);
  if ( *(_DWORD *)(v3 + 848) != *((_DWORD *)this + 216) )
  {
    if ( *(_BYTE *)(v3 + 84) )
    {
      *(_BYTE *)(v3 + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(v3 + 24);
      if ( v8 )
        sub_100194B0(v8, 848);
    }
    *(_DWORD *)(v3 + 848) = *((_DWORD *)this + 216);
  }
  *(float *)(v3 + 1132) = *((float *)this + 210) + *(float *)(dword_106B31C8 + 12);
  *(float *)(v3 + 552) = *((float *)this + 218);
  if ( (*((_DWORD *)this + 62) & 2) != 0 )
  {
    v9 = sub_1012B790(v3, 0);
    if ( v9 )
    {
      sub_1012B210(*(float *)(v3 + 1132));
      *(_DWORD *)(v3 + 1156) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
    }
  }
  if ( *((_DWORD *)this + 215) )
    sub_100BD480((_DWORD *)v3, *((char **)this + 215));
  if ( *((_BYTE *)this + 856) )
    sub_100EAB80((_DWORD *)v3, 16);
  if ( 0.0 != *((float *)this + 219) )
  {
    v10 = *(_DWORD *)(v3 + 424);
    if ( v10 )
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10 + 112))(*((float *)this + 219));
  }
  return v3;
}
