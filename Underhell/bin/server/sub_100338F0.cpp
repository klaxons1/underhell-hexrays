int __thiscall sub_100338F0(_DWORD *this)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // edi
  int *v13; // ecx
  int v14; // eax
  char v15; // cl
  _DWORD *v16; // eax
  int v17; // eax
  char v18; // cl
  _DWORD *v19; // eax
  int v20; // eax
  char v21; // cl
  _DWORD *v22; // eax
  float v23; // [esp+0h] [ebp-14h]
  int v24; // [esp+10h] [ebp-4h]

  if ( sub_100CF460(this) && (*(_DWORD *)(sub_100CF460(this) + 192) & 0x20) == 0 )
    return -1;
  result = sub_100C4E40(70);
  if ( result == -1 )
  {
    v3 = 0;
    for ( i = this + 477;
          *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 || !off_1061BE18[4 * (*i & 0xFFF) + 1];
          ++i )
    {
      if ( ++v3 >= 48 )
        return -1;
    }
    if ( this[v3 + 477] == -1 || off_1061BE18[4 * (this[v3 + 477] & 0xFFF) + 2] != this[v3 + 477] >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (this[v3 + 477] & 0xFFF) + 1];
    sub_100CD300(v5);
    v6 = sub_100C74B0(70, 1);
    v7 = v6;
    v24 = v6;
    if ( v6 != -1 )
    {
      v23 = sub_100C5400(v6) + *(float *)(dword_106B31C8 + 12) + 0.5;
      sub_100B8D50(v23);
      this[698] = 4;
    }
    v8 = sub_100CF460(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 1272))(v8) )
    {
      v9 = sub_100CF460(this);
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1216))(v9);
      v11 = sub_100CF460(this);
      v12 = v11;
      if ( *(_DWORD *)(v11 + 1200) != v10 )
      {
        if ( *(_BYTE *)(v11 + 84) )
        {
          *(_BYTE *)(v11 + 88) |= 1u;
        }
        else
        {
          v13 = *(int **)(v11 + 24);
          if ( v13 )
            sub_100194B0(v13, 1200);
        }
        *(_DWORD *)(v12 + 1200) = v10;
      }
      v7 = v24;
    }
    (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
    v14 = sub_1007DB30(3);
    if ( v14 != -1 )
    {
      v15 = v14;
      if ( v14 != 999999999 )
      {
        v16 = &this[((v14 - 1000000000) >> 5) + 548];
        *v16 &= ~(1 << (v15 & 0x1F));
      }
    }
    (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
    v17 = sub_1007DB30(4);
    if ( v17 != -1 )
    {
      v18 = v17;
      if ( v17 != 999999999 )
      {
        v19 = &this[((v17 - 1000000000) >> 5) + 548];
        *v19 &= ~(1 << (v18 & 0x1F));
      }
    }
    (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
    v20 = sub_1007DB30(5);
    if ( v20 != -1 )
    {
      v21 = v20;
      if ( v20 != 999999999 )
      {
        v22 = &this[((v20 - 1000000000) >> 5) + 548];
        *v22 &= ~(1 << (v21 & 0x1F));
      }
    }
    return v7;
  }
  return result;
}
