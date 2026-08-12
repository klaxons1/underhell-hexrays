unsigned int __thiscall sub_103B2EA0(float *this, int *a2)
{
  char **v3; // ecx
  char *v4; // eax
  unsigned int result; // eax
  unsigned int v6; // esi
  int v7; // ecx
  int v8; // ebx
  int v9; // edi
  float *v10; // esi
  char *v11; // eax
  int v12; // ecx
  int v13; // ecx
  float *v14; // [esp+Ch] [ebp-4h]
  unsigned int v15; // [esp+18h] [ebp+8h]

  v3 = (char **)(a2 + 2);
  v14 = this;
  if ( a2[6] == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  result = (unsigned int)sub_1012BF20(&dword_1069E3E0, 0, v4, 0, *a2, a2[1], 0);
  v6 = result;
  v15 = result;
  if ( !result )
  {
LABEL_26:
    this[950] = NAN;
    return result;
  }
  result = *((_DWORD *)this + 950);
  if ( result == -1 || (result >>= 12, off_1061BE18[4 * ((_DWORD)this[950] & 0xFFF) + 2] != result) )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * ((_DWORD)this[950] & 0xFFF) + 1];
  if ( v7 == v6 )
    return result;
  v8 = sub_1002A680(&dword_10690DF8);
  v9 = 0;
  if ( sub_1016BFB0(&dword_10690DF8) <= 0 )
  {
LABEL_22:
    result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)v6 + 288))(v6);
    if ( result )
    {
      result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)v6 + 264))(v6);
      if ( (_BYTE)result )
      {
        v13 = *(_DWORD *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)v6 + 8))(v6);
        result = (unsigned int)v14;
        *((_DWORD *)v14 + 950) = v13;
        v14[951] = -1.0;
        return result;
      }
    }
    this = v14;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v10 = *(float **)(v8 + 4 * v9);
    if ( v10 != v14 )
    {
      v11 = (char *)sub_10019630(v14);
      if ( *((char **)v10 + 23) == v11 || sub_100D6240(v10, v11) )
      {
        result = *(_DWORD *)(*(_DWORD *)(v8 + 4 * v9) + 3800);
        if ( result == -1
          || (result >>= 12, off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(v8 + 4 * v9) + 3800) & 0xFFF) + 2] != result) )
        {
          v12 = 0;
        }
        else
        {
          v12 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(v8 + 4 * v9) + 3800) & 0xFFF) + 1];
        }
        if ( v12 == v15 )
          return result;
      }
    }
    if ( ++v9 >= sub_1016BFB0(&dword_10690DF8) )
    {
      v6 = v15;
      goto LABEL_22;
    }
  }
}
