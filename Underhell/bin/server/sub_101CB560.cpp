int __thiscall sub_101CB560(_DWORD *this, int a2)
{
  int v2; // edi
  int *v3; // ebx
  int v4; // esi
  int result; // eax
  _DWORD *v6; // [esp+4h] [ebp-4h]

  v2 = 0;
  v6 = this;
  if ( (int)this[283] > 0 )
  {
    v3 = this + 289;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 60))(v4, 1);
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 96))(v4);
        this = v6;
      }
      ++v2;
      v3 += 6;
    }
    while ( v2 < this[283] );
  }
  return result;
}
