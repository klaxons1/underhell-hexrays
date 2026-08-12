int __thiscall sub_1034C1E0(int *this)
{
  int *v2; // esi
  int result; // eax
  int v4; // ebx
  int v5; // ecx
  int *v6; // edi

  (*(void (__thiscall **)(int *, const char *))(*this + 104))(this, "models/combine_dropship_container.mdl");
  sub_10112C00((int)(this + 80), 6);
  sub_10211600((int)this, (int)this);
  v2 = this + 54;
  result = (int)*(float *)(dword_106E6784 + 44);
  v4 = result;
  if ( this[54] != result )
  {
    result = (*(int (__thiscall **)(int *, int *))(*this + 456))(this, this + 54);
    *v2 = v4;
  }
  v5 = this[55];
  v6 = this + 55;
  if ( v5 != *v2 )
  {
    result = (*(int (__thiscall **)(int *, int *))(*(v6 - 55) + 464))(v6 - 55, v6);
    *v6 = *v2;
  }
  return result;
}
