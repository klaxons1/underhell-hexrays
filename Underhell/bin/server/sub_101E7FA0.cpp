unsigned int __thiscall sub_101E7FA0(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // ebx
  unsigned int *v3; // edi
  unsigned int result; // eax
  int *v5; // ecx
  _DWORD *v6; // esi
  unsigned int v7; // edx
  int *v8; // ecx
  int v9; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+14h] [ebp-4h]

  v1 = this;
  v2 = 2;
  v11 = 2;
  v3 = this + 1008;
  v9 = -4024 - (_DWORD)this;
  while ( 1 )
  {
    result = *v3;
    if ( *v3 != -1 )
    {
      v5 = &off_1061BE18[4 * (*v3 & 0xFFF) + 1];
      result >>= 12;
      if ( off_1061BE18[4 * (*v3 & 0xFFF) + 2] == result )
      {
        result = *v5;
        if ( *v5 )
        {
          sub_1025FAC0(*v5);
          result = (unsigned int)(v1 + 1006);
          v6 = (unsigned int *)((char *)v3 + v9 + (_DWORD)(v1 + 1006));
          if ( *v6 != -1 )
          {
            v7 = result - 4024;
            if ( *(_BYTE *)(result - 3940) )
            {
              *(_BYTE *)(v7 + 88) |= 1u;
            }
            else
            {
              v8 = *(int **)(v7 + 24);
              if ( v8 )
              {
                result = sub_100194B0(v8, 4 * v2 + 4024);
                v2 = v11;
              }
            }
            *v6 = -1;
          }
        }
      }
    }
    --v2;
    --v3;
    v11 = v2;
    if ( v2 < 0 )
      break;
    v1 = this;
  }
  return result;
}
