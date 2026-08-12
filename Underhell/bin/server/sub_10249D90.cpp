int __thiscall sub_10249D90(_DWORD *this, int a2)
{
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // edx
  __int64 v9; // [esp+0h] [ebp-1Ch]
  int v10; // [esp+18h] [ebp-4h]

  if ( !this[203] )
    return 0;
  v4 = this[221] + (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 3);
  v5 = this[203];
  if ( v4 >= v5 )
    v4 -= v5;
  v10 = v4;
  v6 = 0;
  while ( 1 )
  {
    if ( v4 >= this[203] )
    {
      ++v6;
      v4 = 0;
    }
    if ( v6 > 3 )
      break;
    v7 = *(_DWORD *)(this[200] + 4 * v4);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v7 + 720))(v7, a2) )
      break;
    if ( ++v4 == v10 )
      return 0;
  }
  HIDWORD(v9) = *(_DWORD *)(this[200] + 4 * v4);
  LODWORD(v9) = a2;
  sub_1010DD80((_DWORD *)(HIDWORD(v9) + 800), v9, 0.0);
  v8 = this[200];
  this[221] = v4;
  return *(_DWORD *)(v8 + 4 * v4);
}
