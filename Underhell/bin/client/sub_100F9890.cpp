int __fastcall sub_100F9890(_DWORD *a1)
{
  int result; // eax
  int v2; // edi
  int v3; // ebx
  int *v4; // esi
  _DWORD *v5; // [esp+0h] [ebp-4h]

  result = a1[3];
  v5 = a1;
  if ( result > 0 )
  {
    v2 = 0;
    v3 = a1[3];
    do
    {
      v4 = (int *)(v2 + *a1);
      v4[3] = 0;
      if ( v4[2] >= 0 )
      {
        if ( *v4 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *v4);
          a1 = v5;
          *v4 = 0;
        }
        v4[1] = 0;
      }
      result = *v4;
      v2 += 20;
      --v3;
      v4[4] = *v4;
    }
    while ( v3 );
  }
  return result;
}
