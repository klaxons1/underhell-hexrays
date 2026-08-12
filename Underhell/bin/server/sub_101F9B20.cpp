int __thiscall sub_101F9B20(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // edi
  int result; // eax
  _DWORD *v4; // [esp-4h] [ebp-14h]
  int v5; // [esp+Ch] [ebp-4h]

  v1 = this + 4;
  v5 = 17;
  do
  {
    sub_101F9A40(v1);
    v2 = (_DWORD *)*v1;
    if ( *v1 )
    {
      do
      {
        v4 = v2;
        v2 = (_DWORD *)*v2;
        (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
      }
      while ( v2 );
      *v1 = 0;
      v1[1] = 0;
    }
    v1[7] = 0;
    result = -1;
    v1[5] = 0;
    v1[8] = -1;
    v1[9] = 0;
    v1 += 10;
    --v5;
  }
  while ( v5 );
  return result;
}
