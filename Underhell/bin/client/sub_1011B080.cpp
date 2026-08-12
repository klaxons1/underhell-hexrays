int __thiscall sub_1011B080(_DWORD *this, int a2)
{
  int v4; // esi
  int v5; // ecx
  int result; // eax
  int v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ch] [ebp-4h]
  int v9; // [esp+18h] [ebp+8h]

  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  v8 = 0;
  if ( (int)this[12] > 0 )
  {
    v9 = 0;
    do
    {
      v4 = v9 + this[16];
      *(_DWORD *)(v4 + 36) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2) - v7;
      v5 = *(_DWORD *)(this[9] + 4 * v8);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 8))(v5, a2);
      v9 += 40;
      ++v8;
    }
    while ( v8 < this[12] );
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2) - v7;
  this[15] = result;
  return result;
}
