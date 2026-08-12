_DWORD *__thiscall sub_101DCEB0(int this, int a2, int a3, int a4)
{
  char *v5; // eax
  _DWORD *result; // eax
  double v8; // st7
  char *v9; // eax
  double v10; // st7
  float v11; // [esp+0h] [ebp-10h]
  float v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+18h] [ebp+8h]
  int v14; // [esp+20h] [ebp+10h]

  v5 = *(char **)(this + 808);
  if ( v5 )
  {
    result = sub_1012BF20(&dword_1069E3E0, a2, v5, 0, a3, a4, 0);
    if ( !result )
    {
      v8 = *(float *)(this + 804);
      v13 = *(int *)(this + 804);
      if ( v8 <= 0.0 )
      {
        v8 = *(float *)(this + 800) * 2.5;
        *(float *)&v13 = v8;
      }
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      {
        sub_100DAE60(this);
        v8 = *(float *)&v13;
      }
      v9 = *(char **)(this + 808);
      if ( !v9 )
        v9 = (char *)String;
      v11 = v8;
      return sub_1012C480(a2, v9, (float *)(this + 580), v11, 0);
    }
  }
  else
  {
    v10 = *(float *)(this + 804);
    v14 = *(int *)(this + 804);
    if ( v10 <= 0.0 )
    {
      v10 = *(float *)(this + 800) * 2.5;
      *(float *)&v14 = v10;
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    {
      sub_100DAE60(this);
      v10 = *(float *)&v14;
    }
    v12 = v10;
    return (_DWORD *)sub_1012BFF0(&dword_1069E3E0, a2, (float *)(this + 580), v12);
  }
  return result;
}
