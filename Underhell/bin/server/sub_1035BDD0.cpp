int __thiscall sub_1035BDD0(int this, int *a2)
{
  int *v2; // edi
  int result; // eax
  char *v5; // ebx
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // ecx
  _DWORD *v9; // eax
  unsigned int *v10; // edi
  unsigned int v11; // esi
  int *v12; // ecx

  v2 = a2;
  result = (int)(a2 + 2);
  if ( a2[6] != 2 )
  {
    a2 = 0;
    result = (int)&a2;
  }
  v5 = *(char **)result;
  if ( *(_DWORD *)result )
  {
    v6 = *(_DWORD *)(this + 3756);
    if ( v6 == -1
      || (v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 2] != v6 >> 12) )
    {
      v8 = 0;
    }
    else
    {
      v8 = *v7;
    }
    sub_103E6680(v8);
    v9 = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, *v2, v2[1], 0);
    if ( v9 )
      *(_DWORD *)(this + 3760) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v9 + 8))(v9);
    else
      *(_DWORD *)(this + 3760) = -1;
    *(_WORD *)(this + 3788) = 1;
    sub_10023CB0((char *)this, 25);
    result = *(_DWORD *)(this + 248);
    v10 = (unsigned int *)(this + 248);
    v11 = result & 0xFFFEFFFF;
    if ( result != (result & 0xFFFEFFFF) )
    {
      result = (int)(v10 - 62);
      if ( *((_BYTE *)v10 - 164) )
      {
        *(_BYTE *)(result + 88) |= 1u;
        *v10 = v11;
      }
      else
      {
        v12 = *(int **)(result + 24);
        if ( v12 )
          result = sub_100194B0(v12, 248);
        *v10 = v11;
      }
    }
  }
  return result;
}
