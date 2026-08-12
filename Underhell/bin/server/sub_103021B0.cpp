int __thiscall sub_103021B0(_DWORD *this, int *a2)
{
  int result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // [esp-4h] [ebp-10h]

  result = sub_100374F0(this, (int)a2);
  v4 = result;
  if ( result )
  {
    v6 = (*(int (__thiscall **)(_DWORD *))(*this + 1384))(this);
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 1380))(this);
    sub_1004B780(a2, this[906], v5, v6);
    return v4;
  }
  return result;
}
