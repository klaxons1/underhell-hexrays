int *__thiscall sub_10017210(int *this, int a2)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 380))(a2);
  *this = v3;
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  return this;
}
