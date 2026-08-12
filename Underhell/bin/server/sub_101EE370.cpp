int __thiscall sub_101EE370(_DWORD *this, int *a2)
{
  _DWORD *v2; // esi
  int result; // eax
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // esi
  _DWORD *v10; // ebx
  int v11; // ecx
  _DWORD *v12; // esi
  int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  double v19; // st7
  int *v20; // ecx
  float v22; // [esp+18h] [ebp+8h]

  v2 = this;
  if ( *a2 && (result = (*(int (__thiscall **)(int))(*(_DWORD *)*a2 + 320))(*a2), (_BYTE)result) )
  {
    v4 = *a2;
  }
  else
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 196))(dword_106B3CDC);
    if ( (_BYTE)result )
      return result;
    result = sub_10261B20();
    v4 = result;
  }
  if ( v4 )
  {
    if ( a2[6] == 1 && 1.0 == *((float *)a2 + 2) )
    {
      if ( ((v2[62] & 2) != 0 || (v2[62] & 1) != 0) && !sub_100CF460((_DWORD *)v4) )
      {
        v15 = *(_DWORD *)(v4 + 2252) & 0xFFFFFFFE;
        if ( *(_DWORD *)(v4 + 2252) != v15 )
        {
          (**(void (__thiscall ***)(int, int))(v4 + 2192))(v4 + 2192, v4 + 2252);
          *(_DWORD *)(v4 + 2252) = v15;
        }
        v16 = sub_101E5E10((_DWORD *)v4);
        sub_100CD300((unsigned int *)v4, v16);
        if ( sub_100CF460((_DWORD *)v4) )
        {
          v17 = sub_100CF460((_DWORD *)v4);
          (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 992))(v17);
          (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 1248))(v4);
        }
      }
      *(_DWORD *)(v4 + 3308) &= ~sub_101E6820(v2);
      if ( (v2[62] & 2) == 0 )
        goto LABEL_42;
      if ( *(_BYTE *)(v4 + 2137) )
        sub_101ECF40(v4);
      v12 = (_DWORD *)(v4 + 2252);
      v18 = *(_DWORD *)(v4 + 2252) & 0xFFFFFFFB;
      if ( *(_DWORD *)(v4 + 2252) != v18 )
      {
        (**(void (__thiscall ***)(int, int))(v4 + 2192))(v4 + 2192, v4 + 2252);
        *v12 = v18;
      }
      v14 = *v12 & 0xFFFFFFFE;
    }
    else
    {
      if ( (v2[62] & 1) != 0 || (v2[62] & 2) != 0 )
      {
        if ( sub_100CF460((_DWORD *)v4) )
        {
          v5 = *(_DWORD *)v4;
          v6 = sub_100CF460((_DWORD *)v4);
          (*(void (__thiscall **)(int, int))(v5 + 1236))(v4, v6);
          v7 = sub_100CF460((_DWORD *)v4);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 996))(v7, 0);
          sub_100CD300((unsigned int *)v4, 0);
        }
        v8 = *(_DWORD *)(v4 + 2252) | 1;
        if ( *(_DWORD *)(v4 + 2252) != v8 )
        {
          (**(void (__thiscall ***)(int, int))(v4 + 2192))(v4 + 2192, v4 + 2252);
          *(_DWORD *)(v4 + 2252) = v8;
        }
        v9 = 0;
        v10 = (_DWORD *)(v4 + 4024);
        do
        {
          if ( *v10 != -1 && off_1061BE18[4 * (*v10 & 0xFFF) + 2] == *v10 >> 12 )
          {
            v11 = off_1061BE18[4 * (*v10 & 0xFFF) + 1];
            if ( v11 )
            {
              if ( v9 != 2 )
                (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 840))(v11, 0, 0);
            }
          }
          ++v9;
          ++v10;
        }
        while ( v9 < 3 );
        v2 = this;
      }
      *(_DWORD *)(v4 + 3308) |= sub_101E6820(v2);
      if ( (v2[62] & 2) == 0 )
        goto LABEL_42;
      v12 = (_DWORD *)(v4 + 2252);
      v13 = *(_DWORD *)(v4 + 2252) | 4;
      if ( *(_DWORD *)(v4 + 2252) != v13 )
      {
        (**(void (__thiscall ***)(int, int))(v4 + 2192))(v4 + 2192, v4 + 2252);
        *v12 = v13;
      }
      v14 = *v12 | 1;
    }
    if ( *v12 != v14 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v12 - 15))(v12 - 15, v12);
      *v12 = v14;
    }
LABEL_42:
    result = (int)a2;
    if ( a2[6] == 1 )
      v19 = *((float *)a2 + 2);
    else
      v19 = 0.0;
    v22 = v19;
    if ( *(_DWORD *)(v4 + 4328) != LODWORD(v22) )
    {
      result = v4;
      if ( *(_BYTE *)(v4 + 84) )
      {
        *(_BYTE *)(v4 + 88) |= 1u;
        *(float *)(v4 + 4328) = v22;
      }
      else
      {
        v20 = *(int **)(v4 + 24);
        if ( v20 )
          result = sub_100194B0(v20, 4328);
        *(float *)(v4 + 4328) = v22;
      }
    }
  }
  return result;
}
