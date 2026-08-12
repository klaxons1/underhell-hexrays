int __thiscall sub_10054500(_DWORD *this, unsigned int a2, int a3, float a4)
{
  int result; // eax
  float *v6; // eax
  float *v7; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  float **v11; // ebx

  result = sub_10053AA0(this, a2);
  if ( result == -1 )
  {
    result = a2;
    if ( a2 != -1 )
    {
      result = a2 >> 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (a2 & 0xFFF) + 2) == a2 >> 12 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (a2 & 0xFFF) + 1) )
        {
          v6 = (float *)sub_100DDA40(24);
          if ( v6 )
          {
            *v6 = NAN;
            v7 = v6;
          }
          else
          {
            v7 = 0;
          }
          *(_DWORD *)v7 = a2;
          v7[1] = (double)(unsigned __int8)a3 * 0.0039215689;
          v7[2] = (double)BYTE1(a3) * 0.0039215689;
          v7[3] = (double)BYTE2(a3) * 0.0039215689;
          v7[4] = 0.0039215689 * (double)HIBYTE(a3);
          v7[5] = a4;
          v8 = this[5];
          v9 = this[3];
          if ( v8 + 1 > v9 )
            sub_1010AFF0(v8 - v9 + 1);
          ++this[5];
          v10 = this[2];
          result = this[5] - v8 - 1;
          this[6] = v10;
          if ( result > 0 )
            result = (int)memcpy((void *)(v10 + 4 * v8 + 4), (const void *)(v10 + 4 * v8), 4 * result);
          v11 = (float **)(this[2] + 4 * v8);
          if ( v11 )
            *v11 = v7;
        }
      }
    }
  }
  return result;
}
