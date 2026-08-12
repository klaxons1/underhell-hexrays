int *__thiscall sub_100FA3A0(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  int *result; // eax
  unsigned int v4; // esi
  unsigned int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  _DWORD v10[2]; // [esp+4h] [ebp-Ch] BYREF
  int v11; // [esp+Ch] [ebp-4h] BYREF

  v2 = this + 1;
  v10[0] = a2;
  v10[1] = 0;
  result = (int *)sub_100FA5A0(v10, &a2, &v11);
  if ( (_BYTE)result )
  {
    v4 = v11 | (a2 << 16);
    if ( v4 != -1 )
    {
      v5 = HIWORD(v4);
      v6 = *(_DWORD *)(*v2 + 20 * HIWORD(v4));
      v7 = (unsigned __int16)v11;
      sub_10034930(*(_DWORD *)(v6 + 8 * (unsigned __int16)v11 + 4));
      result = (int *)(*v2 + 20 * v5);
      if ( v7 < result[3] )
      {
        v8 = result[3];
        if ( v8 > 0 )
        {
          v9 = *result;
          *(_DWORD *)(v9 + 8 * v7) = *(_DWORD *)(*result + 8 * v8 - 8);
          *(_DWORD *)(v9 + 8 * v7 + 4) = *(_DWORD *)(v9 + 8 * v8 - 4);
          --result[3];
        }
      }
    }
  }
  return result;
}
