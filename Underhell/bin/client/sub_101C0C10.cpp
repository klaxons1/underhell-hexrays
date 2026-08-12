unsigned int __cdecl sub_101C0C10(_WORD *a1, _BYTE *a2, int a3)
{
  _WORD *v3; // ebp
  unsigned int result; // eax
  bool v5; // cf
  unsigned int v7; // eax
  char v8; // bl
  char v9; // dl
  unsigned int v10; // [esp+8h] [ebp+4h]

  v3 = a1;
  result = (unsigned int)&a1[a3];
  v5 = (unsigned int)a1 < result;
  v10 = result;
  if ( v5 )
  {
    do
    {
      v7 = (unsigned __int16)*v3;
      v8 = (8 * (v7 >> 11)) | (v7 >> 13);
      v9 = (4 * ((v7 >> 5) & 0x3F)) | ((int)((v7 >> 5) & 0x3F) >> 4);
      result = (*v3 & 0x1F) >> 2;
      LOBYTE(result) = (8 * (*v3 & 0x1F)) | result;
      *a2 = v8;
      a2[1] = v9;
      a2[2] = result;
      a2[3] = -1;
      ++v3;
      a2 += 4;
    }
    while ( (unsigned int)v3 < v10 );
  }
  return result;
}
