int __thiscall sub_10085760(int *this, _DWORD *a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int result; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // [esp+Ch] [ebp-4h]

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_10226330(v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - v3 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 8 * v3 + 8), (const void *)(v5 + 8 * v3), 8 * v6);
  result = *this;
  *(_DWORD *)(result + 8 * v3) = *a2;
  *(_DWORD *)(result + 8 * v3 + 4) = a2[1];
  if ( v3 )
  {
    do
    {
      v8 = (v3 + 1) / 2 - 1;
      result = ((int (__cdecl *)(int, int))this[5])(*this + 8 * v3, *this + 8 * v8);
      if ( (_BYTE)result )
        break;
      v9 = *this;
      v10 = *(_DWORD *)(*this + 8 * v8);
      v11 = *(_DWORD *)(*this + 8 * v8 + 4);
      *(_DWORD *)(v9 + 8 * v8) = *(_DWORD *)(v9 + 8 * v3);
      *(_DWORD *)(v9 + 8 * v8 + 4) = *(_DWORD *)(v9 + 8 * v3 + 4);
      result = *this;
      *(_DWORD *)(result + 8 * v3) = v10;
      *(_DWORD *)(result + 8 * v3 + 4) = v11;
      v3 = (v3 + 1) / 2 - 1;
    }
    while ( v8 );
  }
  return result;
}
