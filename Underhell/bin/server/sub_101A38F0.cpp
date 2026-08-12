int __thiscall sub_101A38F0(int *this, int *a2)
{
  int v3; // edi
  int *v4; // esi

  v3 = *(_DWORD *)(dword_106B8F74 + 48);
  v4 = this + 55;
  if ( this[55] != v3 )
  {
    (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
    *v4 = v3;
  }
  return sub_100C7DC0(this, v3, a2);
}
