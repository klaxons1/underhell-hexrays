char __cdecl sub_101C0C90(_WORD *a1, _BYTE *a2, int a3)
{
  char result; // al
  _WORD *v4; // edi
  unsigned int v5; // ebp
  unsigned int v7; // eax
  char v8; // bl
  char v9; // cl

  result = a3;
  v4 = a1;
  v5 = (unsigned int)&a1[a3];
  if ( (unsigned int)a1 < v5 )
  {
    do
    {
      v7 = (unsigned __int16)*v4;
      v8 = (8 * ((v7 >> 10) & 0x1F)) | ((int)((v7 >> 10) & 0x1F) >> 2);
      v9 = (8 * ((v7 >> 5) & 0x1F)) | ((int)((v7 >> 5) & 0x1F) >> 2);
      result = (8 * (*v4 & 0x1F)) | ((*v4 & 0x1F) >> 2);
      *a2 = v8;
      a2[1] = v9;
      a2[2] = result;
      a2[3] = -1;
      ++v4;
      a2 += 4;
    }
    while ( (unsigned int)v4 < v5 );
  }
  return result;
}
