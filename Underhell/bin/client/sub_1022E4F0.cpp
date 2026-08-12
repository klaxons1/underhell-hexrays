char __thiscall sub_1022E4F0(_DWORD *this, char *a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  char v6; // cl
  char v7; // al
  int v8; // ecx
  _BYTE *v9; // ebx
  _BYTE *v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // [esp+Ch] [ebp-8h]
  signed int v19; // [esp+10h] [ebp-4h]

  v19 = strlen(a2);
  v3 = this[1] - this[3] - this[8];
  v4 = this[3];
  v18 = v4;
  while ( 1 )
  {
    v5 = this[3];
    if ( this[7] - v5 < v3 )
      v3 = this[7] - v5;
    if ( v19 > v3 )
      break;
    v6 = *((_BYTE *)this + 20);
    if ( (v6 & 2) != 0 )
      break;
    if ( this[7] >= v5 + v3 )
    {
      v8 = this[8];
      if ( v5 >= v8 && this[1] >= v3 + v5 - v8 || (v7 = ((int (__thiscall *)(_DWORD *, int))this[9])(this, v3)) != 0 )
        v7 = 1;
      else
        *((_BYTE *)this + 20) |= 2u;
    }
    else
    {
      *((_BYTE *)this + 20) = v6 | 2;
      v7 = 0;
    }
    *((_BYTE *)this + 20) &= ~2u;
    if ( !v7 )
    {
      v4 = v18;
      break;
    }
    v9 = (_BYTE *)(*this + this[3] - this[8]);
    v10 = sub_10227FE0(v9, a2, v3);
    if ( v10 )
    {
      this[3] += v19 + v10 - v9;
      v16 = this[3];
      if ( v16 <= this[7] )
      {
        v17 = this[8];
        *((_BYTE *)this + 20) &= ~2u;
        if ( v16 < v17 || v16 >= v17 + this[1] )
          ((void (__thiscall *)(_DWORD *, int))this[9])(this, -1);
        return 1;
      }
      else
      {
        *((_BYTE *)this + 20) |= 2u;
        return 1;
      }
    }
    this[3] += v3 - v19 - 1;
    v11 = this[3];
    if ( v11 <= this[7] )
    {
      v13 = this[8];
      *((_BYTE *)this + 20) &= ~2u;
      if ( v11 < v13 || v11 >= v13 + this[1] )
        ((void (__thiscall *)(_DWORD *, int))this[9])(this, -1);
      v4 = v18;
      v3 = this[1] - v19 + 1;
    }
    else
    {
      v12 = this[1];
      *((_BYTE *)this + 20) |= 2u;
      v4 = v18;
      v3 = v12 - v19 + 1;
    }
  }
  this[3] = v4;
  if ( v4 <= this[7] )
  {
    v15 = this[8];
    *((_BYTE *)this + 20) &= ~2u;
    if ( v4 < v15 || v4 >= v15 + this[1] )
      ((void (__thiscall *)(_DWORD *, int))this[9])(this, -1);
    return 0;
  }
  else
  {
    *((_BYTE *)this + 20) |= 2u;
    return 0;
  }
}
