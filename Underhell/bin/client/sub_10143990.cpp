int __usercall sub_10143990@<eax>(int result@<eax>, unsigned int a2@<edi>, int a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  _DWORD v5[512]; // [esp+Ch] [ebp-810h] BYREF
  float v6[4]; // [esp+80Ch] [ebp-10h] BYREF

  v3 = (_DWORD *)result;
  if ( a2 != result )
  {
    v6[0] = 1.0;
    v6[1] = 1.0;
    v6[2] = 1.0;
    v6[3] = 1.0;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_10413168 + 24))(dword_10413168, v6);
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(1.0);
    result = 0;
    v4 = 512;
    if ( (unsigned int)v3 < a2 )
    {
      do
      {
        if ( *v3 )
        {
          v5[result] = *v3;
          --v4;
          ++result;
          if ( v4 <= 0 )
          {
            (*(void (__stdcall **)(_DWORD *, int, int, bool))(*(_DWORD *)dword_10413190 + 52))(
              v5,
              result,
              a3,
              *(_DWORD *)(dword_1040375C + 48) != 0);
            result = 0;
            v4 = 512;
          }
        }
        v3 += 3;
      }
      while ( (unsigned int)v3 < a2 );
      if ( result )
        return (*(int (__stdcall **)(_DWORD *, int, int, bool))(*(_DWORD *)dword_10413190 + 52))(
                 v5,
                 result,
                 a3,
                 *(_DWORD *)(dword_1040375C + 48) != 0);
    }
  }
  return result;
}
