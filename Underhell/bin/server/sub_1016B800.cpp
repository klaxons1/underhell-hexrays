_DWORD *__thiscall sub_1016B800(_DWORD *this, int a2, _DWORD *a3, float a4)
{
  _DWORD *result; // eax
  int *v5; // esi
  _DWORD *v6; // edx
  const char *v7; // edi
  char *v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  char **v13; // eax
  int v15; // [esp+Ch] [ebp+8h]

  result = this;
  v5 = this + 1;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  *((float *)this + 6) = a4;
  *this = a2;
  v6 = a3;
  if ( a3 )
  {
    v15 = 0;
    if ( (int)a3[3] > 0 )
    {
      while ( 1 )
      {
        v7 = *(const char **)(*v6 + 4 * v15);
        v8 = (char *)sub_10184390(strlen(v7) + 1);
        strcpy(v8, v7);
        v9 = v5[3];
        v10 = v5[1];
        if ( v9 + 1 > v10 )
          sub_102ABFC0(v9 - v10 + 1);
        ++v5[3];
        v11 = *v5;
        v12 = v5[3] - v9 - 1;
        v5[4] = *v5;
        if ( v12 > 0 )
          memcpy((void *)(v11 + 4 * v9 + 4), (const void *)(v11 + 4 * v9), 4 * v12);
        v13 = (char **)(*v5 + 4 * v9);
        if ( v13 )
          *v13 = v8;
        if ( ++v15 >= a3[3] )
          break;
        v6 = a3;
      }
      return this;
    }
  }
  return result;
}
