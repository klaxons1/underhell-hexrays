int __thiscall sub_100D4F90(int *this, int a2)
{
  unsigned int v3; // edi
  int *v4; // ecx
  unsigned int v5; // ebx
  int *v6; // ecx
  int v7; // ebx
  int *v8; // ecx
  float *v9; // edx
  int *v10; // ecx
  int v11; // edi
  int v12; // eax
  float *v14; // edx
  int *v15; // ecx
  int v16; // edi
  int *v17; // ecx
  int v18; // edi
  int v19; // eax
  int v20; // [esp+1Ch] [ebp-4h]
  int v21; // [esp+28h] [ebp+8h]

  sub_100DD660(&flt_106F1CA8);
  sub_101129A0(this[89] & 0xFFF7);
  sub_100EACE0(a2, 1);
  sub_100D3450(this, a2);
  (*(void (__thiscall **)(int *, int))(*this + 76))(this, a2);
  v3 = this[48] & 0xFFFFFEFF;
  if ( this[48] != v3 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)this[6];
      if ( v4 )
        sub_100194B0(v4, 192);
    }
    this[48] = v3;
  }
  if ( this[313] )
  {
    v5 = this[62] & 0xFFFFFFFE;
    if ( this[62] != v5 )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v6 = (int *)this[6];
        if ( v6 )
          sub_100194B0(v6, 248);
      }
      this[62] = v5;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, this[313]);
    this[313] = 0;
  }
  v7 = dword_106B31C8;
  if ( this[283] != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v8 = (int *)this[6];
      if ( v8 )
        sub_100194B0(v8, 1132);
    }
    this[283] = *(int *)(v7 + 12);
  }
  v9 = (float *)(dword_106B31C8 + 12);
  v20 = dword_106B31C8 + 12;
  if ( this[284] != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v10 = (int *)this[6];
      if ( v10 )
      {
        sub_100194B0(v10, 1136);
        v9 = (float *)v20;
      }
    }
    this[284] = *(int *)v9;
  }
  this[49] = 0;
  sub_100EC3F0(0, 0.0, 0);
  (*(void (__thiscall **)(int *))(*this + 592))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    v11 = *this;
    v12 = (*(int (__thiscall **)(int *, _DWORD))(*this + 1204))(this, 0);
    return (*(int (__thiscall **)(int *, int))(v11 + 104))(this, v12);
  }
  else
  {
    v14 = (float *)(dword_106B31C8 + 12);
    v21 = dword_106B31C8 + 12;
    if ( this[283] != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v15 = (int *)this[6];
        if ( v15 )
        {
          sub_100194B0(v15, 1132);
          v14 = (float *)v21;
        }
      }
      this[283] = *(int *)v14;
    }
    v16 = dword_106B31C8;
    if ( this[284] != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v17 = (int *)this[6];
        if ( v17 )
          sub_100194B0(v17, 1136);
      }
      this[284] = *(int *)(v16 + 12);
    }
    v18 = *this;
    v19 = (*(int (__thiscall **)(int *))(*this + 1208))(this);
    return (*(int (__thiscall **)(int *, int))(v18 + 104))(this, v19);
  }
}
