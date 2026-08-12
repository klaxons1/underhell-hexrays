char __thiscall sub_10082330(_DWORD *this, float a2)
{
  int *v3; // eax
  int v4; // esi
  float *v5; // ebx
  double v6; // st7
  double v7; // st7
  int v8; // eax
  int v9; // eax
  float v11[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = (int *)this[9];
  v4 = *v3;
  v5 = *(float **)(*v3 + 40);
  if ( v5 )
  {
    LODWORD(v11[2]) = dword_10608AB4;
    LODWORD(v11[0]) = dword_10608AAC;
    v11[1] = flt_10608AB0;
    LODWORD(v11[3]) = dword_10608AB8;
    if ( a2 <= (double)flt_10608AB0 )
    {
      v7 = a2;
    }
    else
    {
      v6 = a2 / flt_10608AB0;
      flt_10608AB0 = a2;
      *(float *)&dword_10608AAC = *(float *)&dword_10608AAC * v6;
      v7 = v6 * *(float *)&dword_10608AB4;
      *(float *)&dword_10608AB4 = v7;
    }
    if ( sub_100822A0(this, v7, v11) )
      return 1;
    if ( sub_100800C0((int)this, v5) )
    {
      sub_10079A70(this[3], (float *)(this[1] + 716), v5);
      if ( v7 < v11[0] )
      {
        if ( sub_10080170((int)this, *(_BYTE *)(v4 + 32) & 1, v5) )
        {
          v8 = *(_DWORD *)(v4 + 40);
          if ( v8 )
            *(_DWORD *)(v8 + 44) = *(_DWORD *)(v4 + 44);
          v9 = *(_DWORD *)(v4 + 44);
          if ( v9 )
            *(_DWORD *)(v9 + 40) = *(_DWORD *)(v4 + 40);
          sub_1042FBE0(v4);
          sub_100A61F0(v5, 0);
          return 1;
        }
      }
    }
  }
  return 0;
}
