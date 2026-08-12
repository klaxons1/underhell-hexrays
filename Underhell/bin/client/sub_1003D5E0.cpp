int sub_1003D5E0()
{
  int result; // eax
  int v1; // esi
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // edx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // edi
  char v8; // cl

  result = (unsigned __int16)word_103D8AA4;
  if ( (unsigned __int16)word_103D8AA4 != 0xFFFF )
  {
    do
    {
      v1 = *(_DWORD *)(dword_103D8A98 + 8 * (unsigned __int16)result);
      v2 = *(unsigned __int16 *)(dword_103D8A98 + 8 * (unsigned __int16)result + 6);
      v3 = *(_DWORD *)(v1 + 340);
      if ( v3 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v1 + 340) & 0xFFF) + 2) != v3 >> 12 )
        v4 = 0;
      else
        v4 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v1 + 340) & 0xFFF) + 1);
      v5 = *(_DWORD *)(v1 + 344);
      if ( v5 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v1 + 344) & 0xFFF) + 2) != v5 >> 12 )
        v6 = 0;
      else
        v6 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v1 + 344) & 0xFFF) + 1);
      if ( v6 == v4 && *(_BYTE *)(v1 + 319) == *(_BYTE *)(v1 + 318) && (*(_DWORD *)(v1 + 112) & 8) == 0 )
      {
        if ( *(_WORD *)(v1 + 1174) != 0xFFFF )
        {
          v7 = *(unsigned __int16 *)(v1 + 1174);
          sub_1003A300(&dword_103D8A98, *(_WORD *)(v1 + 1174));
          *(_WORD *)(dword_103D8A98 + 8 * v7 + 6) = word_103D8AA8;
          word_103D8AA8 = v7;
          *(_WORD *)(v1 + 1174) = -1;
        }
      }
      else
      {
        v8 = *(_BYTE *)(v1 + 318);
        *(_DWORD *)(v1 + 344) = *(_DWORD *)(v1 + 340);
        *(_BYTE *)(v1 + 319) = v8;
        if ( *(float *)(v1 + 548) != *(float *)(v1 + 708)
          || *(float *)(v1 + 552) != *(float *)(v1 + 712)
          || *(float *)(v1 + 556) != *(float *)(v1 + 716) )
        {
          sub_1000F6C0(v1, 1);
          *(float *)(v1 + 548) = *(float *)(v1 + 708);
          *(float *)(v1 + 552) = *(float *)(v1 + 712);
          *(float *)(v1 + 556) = *(float *)(v1 + 716);
        }
        if ( *(float *)(v1 + 604) != *(float *)(v1 + 720)
          || *(float *)(v1 + 608) != *(float *)(v1 + 724)
          || *(float *)(v1 + 612) != *(float *)(v1 + 728) )
        {
          sub_1000F6C0(v1, 2);
          *(float *)(v1 + 604) = *(float *)(v1 + 720);
          *(float *)(v1 + 608) = *(float *)(v1 + 724);
          *(float *)(v1 + 612) = *(float *)(v1 + 728);
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 376))(v1);
      }
      result = v2;
    }
    while ( v2 != 0xFFFF );
  }
  return result;
}
