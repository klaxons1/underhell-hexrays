int __thiscall sub_10269640(int *this, int a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // edx
  int v6; // edi
  _DWORD *v7; // ecx
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // edx
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // ecx
  int result; // eax
  int *v15; // esi
  int v16; // ebx
  int *v17; // edi
  void (__thiscall *v18)(int *, _DWORD); // eax
  int v19; // edi
  int v20; // eax
  _DWORD *v21; // edx
  int v22; // ecx
  int v23; // eax
  bool v24; // zf
  _DWORD *v25; // edi
  int v26; // [esp+14h] [ebp-Ch]
  int v27; // [esp+18h] [ebp-8h]
  _DWORD *v28; // [esp+1Ch] [ebp-4h]

  v3 = this[78];
  if ( v3 < 0
    || v3 >= this[54]
    || v3 > this[60]
    || (v4 = this[53], *(_DWORD *)(v4 + 12 * v3 + 4) == v3) && *(_DWORD *)(v4 + 12 * v3 + 8) != v3 )
  {
    this[78] = this[56];
  }
  v5 = 0;
  v6 = -1;
  v26 = -1;
  if ( this[65] > 0 )
  {
    v7 = (_DWORD *)this[62];
    while ( *v7 != a2 )
    {
      if ( *v7 == this[78] )
      {
        v11 = this[65];
        v12 = 0;
        if ( v11 <= 0 )
        {
LABEL_23:
          v6 = -1;
        }
        else
        {
          v13 = (_DWORD *)this[62];
          while ( *v13 != this[78] )
          {
            ++v12;
            ++v13;
            if ( v12 >= v11 )
              goto LABEL_23;
          }
          v6 = v12;
        }
        v26 = v5;
        goto LABEL_25;
      }
      ++v5;
      ++v7;
      if ( v5 >= this[65] )
        goto LABEL_25;
    }
    v8 = this[65];
    v9 = 0;
    v6 = v5;
    if ( v8 <= 0 )
    {
LABEL_17:
      v26 = -1;
    }
    else
    {
      v10 = (_DWORD *)this[62];
      while ( *v10 != this[78] )
      {
        ++v9;
        ++v10;
        if ( v9 >= v8 )
          goto LABEL_17;
      }
      v26 = v9;
    }
  }
LABEL_25:
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83);
  if ( !(_BYTE)result )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84);
    if ( !(_BYTE)result )
      result = (*(int (__thiscall **)(int *))(*this + 832))(this);
  }
  v27 = v6;
  if ( v6 <= v26 )
  {
    v15 = this + 72;
    do
    {
      v16 = 4 * v27;
      v17 = *(int **)(this[53] + 12 * *(_DWORD *)(4 * v27 + this[62]));
      if ( *((_BYTE *)v17 + 320) != 1 )
      {
        v18 = *(void (__thiscall **)(int *, _DWORD))(*v17 + 48);
        *((_BYTE *)v17 + 320) = 1;
        v18(v17, 0);
        sub_10267E30(v17, v16, (int)v17);
        (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*v17 + 244))(v17, 0, 0);
        (*(void (__thiscall **)(int *))(*v17 + 16))(v17);
      }
      v19 = this[75];
      v20 = this[73];
      v21 = (_DWORD *)(v16 + this[62]);
      v28 = v21;
      if ( v19 + 1 > v20 )
      {
        sub_1010AFF0(this + 72, v19 - v20 + 1);
        v21 = v28;
      }
      ++this[75];
      v22 = *v15;
      v23 = this[75] - v19 - 1;
      v24 = this[75] - v19 == 1;
      this[76] = this[72];
      if ( v23 >= 0 && !v24 )
      {
        memcpy((void *)(v22 + 4 * v19 + 4), (const void *)(v22 + 4 * v19), 4 * v23);
        v21 = v28;
      }
      v25 = (_DWORD *)(*v15 + 4 * v19);
      if ( v25 )
        *v25 = *v21;
      this[77] = a2;
      result = ++v27;
    }
    while ( v27 <= v26 );
  }
  return result;
}
