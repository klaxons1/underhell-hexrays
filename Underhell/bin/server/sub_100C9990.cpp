int *__thiscall sub_100C9990(_DWORD *this, int a2)
{
  int v2; // ebx
  _DWORD *v3; // esi
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // edx
  int v8; // edi
  int v9; // ebx
  int v10; // esi
  _DWORD *v11; // esi
  int v12; // [esp+Ch] [ebp-8h]

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    v5 = 0;
    v12 = this[443];
    if ( v12 <= 0 )
    {
LABEL_13:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 220))(v2) && (v8 = 0, (int)v3[443] > 0) )
      {
        v9 = 0;
        while ( 1 )
        {
          v10 = v3[440];
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) == *(_DWORD *)(v10 + v9 + 4) )
            return (int *)(this[440] + 16 * v8);
          ++v8;
          v9 += 16;
          v3 = this;
          if ( v8 >= this[443] )
          {
            v2 = a2;
            goto LABEL_19;
          }
        }
      }
      else
      {
LABEL_19:
        sub_100C9920();
        v11 = (_DWORD *)(dword_106966F4 + 4 * (*(int (__thiscall **)(_DWORD *))(*v3 + 220))(v3));
        return (int *)(*v11 + 16 * (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 220))(v2));
      }
    }
    else
    {
      v6 = (_DWORD *)this[440];
      while ( 1 )
      {
        if ( *v6 == -1 || (v2 = a2, off_1061BE18[4 * (*v6 & 0xFFF) + 2] != *v6 >> 12) )
          v7 = 0;
        else
          v7 = off_1061BE18[4 * (*v6 & 0xFFF) + 1];
        if ( v2 == v7 )
          return (int *)(this[440] + 16 * v5);
        ++v5;
        v6 += 4;
        if ( v5 >= v12 )
          goto LABEL_13;
      }
    }
  }
  else
  {
    if ( (dword_106969C4 & 1) == 0 )
    {
      dword_106969C4 |= 1u;
      dword_106969B4 = -1;
    }
    return &dword_106969B4;
  }
}
