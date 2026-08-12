int __thiscall sub_1011AF60(_DWORD *this, unsigned __int16 *a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int *v9; // edi

  (*(void (__thiscall **)(_DWORD *, unsigned __int16 *))(*this + 36))(this, a2);
  v3 = (*(int (__thiscall **)(_DWORD *))*this)(this);
  v4 = this[4];
  v5 = *a2 + v3;
  v6 = this[2];
  if ( v4 + 1 > v6 )
    sub_1010AFF0(this + 1, v4 - v6 + 1);
  ++this[4];
  v7 = this[1];
  result = this[4] - v4 - 1;
  this[5] = v7;
  if ( result > 0 )
    result = (int)memcpy((void *)(v7 + 4 * v4 + 4), (const void *)(v7 + 4 * v4), 4 * result);
  v9 = (int *)(this[1] + 4 * v4);
  if ( v9 )
    *v9 = v5;
  return result;
}
