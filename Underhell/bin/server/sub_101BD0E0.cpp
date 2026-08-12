int __userpurge sub_101BD0E0@<eax>(int *a1@<ecx>, int a2@<ebx>, float a3@<esi>, int a4)
{
  int result; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  int v8; // ecx
  unsigned int v9; // eax
  int *v10; // ecx
  int v11; // eax
  _BYTE v14[48]; // [esp+18h] [ebp-48h] BYREF
  _BYTE v15[12]; // [esp+48h] [ebp-18h] BYREF
  _BYTE v16[12]; // [esp+54h] [ebp-Ch] BYREF

  result = *a1;
  if ( *a1 )
  {
    v6 = 0;
    if ( result > 0 )
    {
      do
      {
        v7 = (_DWORD *)(a1[1] + 8 * v6);
        result = v7[1];
        if ( result != -1 )
        {
          result = (unsigned int)result >> 12;
          if ( off_1061BE18[4 * (v7[1] & 0xFFF) + 2] == result )
          {
            if ( off_1061BE18[4 * (v7[1] & 0xFFF) + 1] )
            {
              (*(void (__thiscall **)(int, _DWORD, _BYTE *, int, float))(*(_DWORD *)a4 + 772))(
                a4,
                *v7,
                v14,
                a2,
                COERCE_FLOAT(LODWORD(a3)));
              sub_10421A90(v14, v16);
              sub_10421CE0(v14, 3, v15);
              v8 = a1[1];
              v9 = *(_DWORD *)(v8 + 8 * v6 + 4);
              if ( v9 == -1 || (v10 = &off_1061BE18[4 * (*(_DWORD *)(v8 + 8 * v6 + 4) & 0xFFF) + 1], v10[1] != v9 >> 12) )
                v11 = 0;
              else
                v11 = *v10;
              a3 = 0.1;
              a2 = 0;
              result = (*(int (__stdcall **)(_BYTE *, _BYTE *))(**(_DWORD **)(v11 + 424) + 272))(v15, v16);
            }
          }
        }
        ++v6;
      }
      while ( v6 < *a1 );
    }
  }
  return result;
}
