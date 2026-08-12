int __thiscall sub_102DF7C0(int *this)
{
  int v2; // edx
  int v3; // edi
  int *v4; // ecx
  int v5; // edi
  int *v6; // ecx
  int v7; // edi
  int *v8; // ecx
  int result; // eax
  float v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v2 = *this;
  this[1412] = *(int *)(dword_106B31C8 + 12);
  (*(void (**)(void))(v2 + 1692))();
  v3 = sub_100CF460(this);
  v11 = v3;
  if ( v3 )
  {
    v10 = *(float *)(dword_106B31C8 + 12);
    if ( this[418] != LODWORD(v10) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v4 = (int *)this[6];
        if ( v4 )
          sub_100194B0(v4, 1672);
      }
      *((float *)this + 418) = v10;
    }
    v5 = dword_106B31C8;
    if ( *(_DWORD *)(v11 + 1132) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(v11 + 84) )
      {
        *(_BYTE *)(v11 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v11 + 24);
        if ( v6 )
          sub_100194B0(v6, 1132);
      }
      *(float *)(v11 + 1132) = *(float *)(v5 + 12);
    }
    v7 = dword_106B31C8;
    if ( *(_DWORD *)(v11 + 1136) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(v11 + 84) )
      {
        *(_BYTE *)(v11 + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(v11 + 24);
        if ( v8 )
          sub_100194B0(v8, 1136);
      }
      *(float *)(v11 + 1136) = *(float *)(v7 + 12);
    }
    v3 = v11;
  }
  if ( *((_BYTE *)this + 5106) )
  {
    (*(void (__thiscall **)(int *, int))this[1270])(this + 1270, (int)this + 5106);
    *((_BYTE *)this + 5106) = 0;
  }
  if ( *((_BYTE *)this + 5105) )
  {
    (*(void (__thiscall **)(int *, int))this[1270])(this + 1270, (int)this + 5105);
    *((_BYTE *)this + 5105) = 0;
  }
  *(_BYTE *)(v3 + 1126) = 0;
  result = dword_106B31C8;
  *(float *)(v3 + 1380) = *(float *)(dword_106B31C8 + 12);
  return result;
}
