int *__thiscall sub_1011AE20(_DWORD **this, const char *a2)
{
  __int16 v3; // cx
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  char *v7; // edi
  int v8; // ebx
  char *v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax
  int *result; // eax
  __int16 v13; // [esp+18h] [ebp+8h]

  v3 = sub_10118170(this[6], a2);
  v4 = this[6];
  v13 = v3;
  if ( v4 )
  {
    if ( v4[3] - v4[2] >= 2 )
    {
      *(_WORD *)v4[1] = 0;
      v4[1] += 2;
      v4[2] += 2;
    }
    else
    {
      v4[2] = v4[3];
      Warning("Save/Restore overflow!\n");
    }
  }
  v5 = this[6];
  if ( v5 )
  {
    if ( v5[3] - v5[2] >= 2 )
    {
      *(_WORD *)v5[1] = v13;
      v5[1] += 2;
      v5[2] += 2;
    }
    else
    {
      v5[2] = v5[3];
      Warning("Save/Restore overflow!\n");
    }
  }
  v6 = ((int (__thiscall *)(_DWORD **))(*this)[3])(this);
  v7 = (char *)this[4];
  v8 = v6;
  v9 = (char *)this[2];
  if ( (int)(v7 + 1) > (int)v9 )
    sub_1010AFF0(this + 1, v7 - v9 + 1);
  this[4] = (_DWORD *)((char *)this[4] + 1);
  v10 = this[1];
  v11 = (char *)this[4] - v7 - 1;
  this[5] = v10;
  if ( v11 > 0 )
    memcpy(&v10[(_DWORD)v7 + 1], &v10[(_DWORD)v7], 4 * v11);
  result = &this[1][(_DWORD)v7];
  if ( result )
    *result = v8;
  return result;
}
