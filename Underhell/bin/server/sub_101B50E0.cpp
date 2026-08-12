void __thiscall sub_101B50E0(char *this)
{
  char *v1; // esi
  int v2; // edi
  int v3; // eax

  v1 = this + 12;
  v2 = 4;
  do
  {
    if ( *(_DWORD *)v1 )
    {
      if ( *(float *)(dword_106B31C8 + 12) - 0.1 > *((float *)v1 + 2) )
      {
        v3 = sub_1023DBA0();
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 40))(v3, *(_DWORD *)v1);
        *(_DWORD *)v1 = 0;
        *((_DWORD *)v1 + 1) = 0;
      }
    }
    v1 += 16;
    --v2;
  }
  while ( v2 );
}
