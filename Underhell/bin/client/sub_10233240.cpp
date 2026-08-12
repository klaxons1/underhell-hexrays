int *__thiscall sub_10233240(int *this, int *a2)
{
  int v3; // ecx
  bool v4; // zf

  v3 = *a2;
  v4 = *a2 == 0;
  *this = *a2;
  if ( !v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 40))(v3);
  return this;
}
