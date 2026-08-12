int __thiscall sub_100F7B50(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  int result; // eax

  v1 = this + 3;
  v2 = 32;
  do
  {
    if ( *v1 )
      result = (**(int (__thiscall ***)(_DWORD, int))*v1)(*v1, 1);
    *v1++ = 0;
    --v2;
  }
  while ( v2 );
  return result;
}
