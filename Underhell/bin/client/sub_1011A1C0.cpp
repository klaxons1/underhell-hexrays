int __thiscall sub_1011A1C0(_DWORD *this)
{
  int v1; // edx
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  unsigned int v6; // edx
  int v8; // [esp+Ch] [ebp-4h]

  v1 = this[3];
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v8 = 0;
  if ( v1 >= 2 )
  {
    v5 = (_DWORD *)(*this + 32);
    v6 = ((unsigned int)(v1 - 2) >> 1) + 1;
    v2 = 2 * v6;
    do
    {
      v3 += *(v5 - 5);
      v4 += *v5;
      v5 += 10;
      --v6;
    }
    while ( v6 );
  }
  if ( v2 < this[3] )
    v8 = *(_DWORD *)(*this + 20 * v2 + 12);
  return v8 + v4 + v3;
}
