void __thiscall sub_101B5220(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  int v3; // eax

  v1 = this + 3;
  v2 = 4;
  do
  {
    if ( *v1 )
    {
      v3 = sub_1023DBA0();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 40))(v3, *v1);
      *v1 = 0;
      v1[1] = 0;
    }
    v1 += 4;
    --v2;
  }
  while ( v2 );
}
