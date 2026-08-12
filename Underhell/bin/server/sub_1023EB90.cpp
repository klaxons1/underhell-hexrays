int __thiscall sub_1023EB90(int *this, int *a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int result; // eax
  int v8; // esi
  int v9; // ecx

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_102ABFC0(v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - v3 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 4 * v3 + 4), (const void *)(v5 + 4 * v3), 4 * v6);
  result = *a2;
  *(_DWORD *)(*this + 4 * v3) = *a2;
  if ( v3 )
  {
    do
    {
      v8 = (v3 + 1) / 2 - 1;
      result = ((int (__cdecl *)(int, int))this[5])(*this + 4 * v3, *this + 4 * v8);
      if ( (_BYTE)result )
        break;
      v9 = *(_DWORD *)(*this + 4 * v8);
      *(_DWORD *)(*this + 4 * v8) = *(_DWORD *)(*this + 4 * v3);
      result = *this;
      *(_DWORD *)(*this + 4 * v3) = v9;
      v3 = (v3 + 1) / 2 - 1;
    }
    while ( v8 );
  }
  return result;
}
