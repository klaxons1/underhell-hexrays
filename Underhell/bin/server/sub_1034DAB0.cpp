int __thiscall sub_1034DAB0(_DWORD *this, _DWORD *a2)
{
  int *v3; // esi
  bool v5; // zf
  unsigned int v6; // eax
  int v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax
  _DWORD v11[4]; // [esp+28h] [ebp-60h] BYREF
  int v12; // [esp+38h] [ebp-50h]
  int v13; // [esp+3Ch] [ebp-4Ch]
  int v14; // [esp+40h] [ebp-48h]
  float v15; // [esp+5Ch] [ebp-2Ch]
  int v16; // [esp+78h] [ebp-10h] BYREF
  int v17; // [esp+7Ch] [ebp-Ch]
  int v18; // [esp+80h] [ebp-8h]
  int v19; // [esp+84h] [ebp-4h]

  v3 = this + 55;
  if ( !this[55] )
    return 0;
  if ( (a2[16] & 0x2000040) == 0 )
    return 0;
  sub_1001E4E0(v11, (int)a2);
  v5 = (a2[16] & 0x40) == 0;
  v19 = *v3;
  if ( v5 )
  {
    v7 = *v3 - (int)v15;
    if ( *v3 != v7 )
    {
      (*(void (__thiscall **)(int *, int *))(*(v3 - 55) + 464))(v3 - 55, v3);
      *v3 = v7;
    }
  }
  else
  {
    v6 = a2[10];
    if ( v6 == -1 || off_1061BE18[4 * (a2[10] & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (a2[10] & 0xFFF) + 1];
    v8 = this[423];
    if ( v8 == -1 || off_1061BE18[4 * (this[423] & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (this[423] & 0xFFF) + 1];
    if ( v7 != v9 || *((float *)this + 424) != *(float *)(dword_106B31C8 + 12) )
    {
      v7 = *v3 - this[54] / 4 - 1;
      if ( *v3 != v7 )
      {
        (*(void (__thiscall **)(int *, int *))(*(v3 - 55) + 464))(v3 - 55, v3);
        *v3 = v7;
      }
      v10 = sub_100232D0(a2);
      if ( v10 )
        this[423] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
      else
        this[423] = -1;
      *((float *)this + 424) = *(float *)(dword_106B31C8 + 12);
    }
  }
  if ( *v3 <= 0 )
  {
    if ( *v3 )
    {
      (*(void (__thiscall **)(int *, int *))(*(v3 - 55) + 464))(v3 - 55, v3);
      *v3 = 0;
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 268))(this, v11);
    return 0;
  }
  if ( v19 != *v3 )
  {
    if ( sub_1034A070(this, v7, v19, 4) )
    {
      v16 = v12;
      v17 = v13;
      v18 = v14;
      sub_1034CD30(this, (float *)&v16);
    }
    if ( sub_1034A070(this, v7, v19, 4) )
    {
      v16 = v12;
      v17 = v13;
      v18 = v14;
      sub_1013D350((float *)&v16, &flt_106F1CB4, (int)this, 232, 500, 1065, 0.0, 0, -1, 0, 0);
      v16 = v12;
      v17 = v13;
      v18 = v14;
      sub_10261B70((float *)&v16, 25.0, 150.0, 1.0, 750.0, 0, 0);
      sub_1034C740((int)this);
    }
  }
  return 1;
}
