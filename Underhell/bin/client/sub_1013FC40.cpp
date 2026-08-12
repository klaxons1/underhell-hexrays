int __thiscall sub_1013FC40(int *this)
{
  int v2; // edi
  int v3; // eax
  int *v4; // esi
  int result; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // esi
  int v12; // [esp+Ch] [ebp-8h]
  int v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]

  sub_1013E860(this);
  ++this[341];
  v2 = 0;
  v14 = 0;
  v3 = 31;
  if ( *(_DWORD *)(dword_1043B094 + 48) == 1 )
    v3 = 17;
  v4 = this;
  v12 = v3;
  do
  {
    result = *v4;
    if ( *v4 )
    {
      if ( (unsigned int)--result <= 1 )
      {
        result = v4[2] + 2;
        if ( this[341] > result )
        {
          v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
          v7 = v6;
          if ( v6 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
          v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 328))(v7, v4[1]);
          if ( v8 != -1 )
          {
            v4[4] = v8;
            *v4 = 3;
          }
          (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
          v2 = v14;
        }
      }
    }
    else if ( v2 < 1 )
    {
      result = sub_1013F7F0((int)v4, v2++, this[341]);
      v14 = v2;
    }
    v4 += 11;
    --v12;
  }
  while ( v12 );
  if ( v2 < 1 )
  {
    do
    {
      v13 = 31;
      if ( *(_DWORD *)(dword_1043B094 + 48) == 1 )
        v13 = 17;
      v9 = -1;
      v10 = 0;
      v11 = -44;
      result = 0;
      do
      {
        if ( *(int *)((char *)this + result) == 3 )
        {
          if ( v9 == -1 || (v2 = *(int *)((char *)this + result + 8), v2 < *(int *)((char *)this + v11 + 8)) )
          {
            v9 = v10;
            v11 = result;
          }
        }
        ++v10;
        result += 44;
      }
      while ( v10 < v13 );
      if ( v9 == -1 )
        break;
      sub_1013F7F0((int)&this[11 * v9], v2, this[341]);
      result = v14 + 1;
      v14 = result;
    }
    while ( result < 1 );
  }
  return result;
}
