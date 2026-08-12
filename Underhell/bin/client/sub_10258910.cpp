int __thiscall sub_10258910(_DWORD *this, int a2, int *a3, _DWORD *a4)
{
  int v5; // ecx
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  int result; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // [esp+10h] [ebp-8h]
  unsigned __int16 v14; // [esp+14h] [ebp-4h]

  v5 = this[53];
  v6 = this[93];
  v7 = 0;
  this[78] = 0;
  v8 = this[92];
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 772))(v5);
  v10 = this[64];
  if ( result >= v10 )
    result = v10 - 1;
  v11 = result;
  v13 = result;
  if ( result && result < v10 )
    v7 = *(_DWORD *)(this[61] + 4 * result - 4);
  if ( v7 < this[59] )
  {
    while ( 1 )
    {
      v12 = this[61];
      v14 = *(_WORD *)(this[56] + 2 * v7);
      if ( a2 == v7 )
        break;
      if ( *(_DWORD *)(v12 + 4 * v11) == v7 )
      {
        v8 = this[92] + this[78];
        v6 += this[93]
            + (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, this[80]);
        ++v13;
      }
      result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(
                 dword_1047CA6C,
                 this[80],
                 v14);
      ++v7;
      v8 += result;
      if ( v7 >= this[59] )
      {
        *a3 = v8;
        *a4 = v6;
        return result;
      }
      v11 = v13;
    }
    if ( *(_DWORD *)(v12 + 4 * v11) == v7 )
    {
      v8 = this[92] + this[78];
      v6 += this[93] + (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, this[80]);
      result = (int)a3;
    }
    else
    {
      result = (int)a4;
    }
    *a3 = v8;
    *a4 = v6;
  }
  else
  {
    *a3 = v8;
    *a4 = v6;
  }
  return result;
}
