int __thiscall sub_102BFDB0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  double v7; // st7
  unsigned __int64 v8; // rax
  _QWORD *v9; // ecx
  int v10; // esi
  _WORD *v11; // edi
  int v12; // esi
  float v14; // [esp+1Ch] [ebp-8h]
  float v15; // [esp+20h] [ebp-4h]

  nullsub_3(a2, a3, a4, a5);
  v6 = 0;
  if ( !(_BYTE)a4 )
    v6 = ((_BYTE)a5 != 0) + 1;
  v7 = *(float *)&a3 + *(float *)&this[v6 + 31];
  v8 = (unsigned __int64)v7;
  *(float *)&this[v6 + 31] = v7 - (double)(unsigned __int64)v7;
  if ( (unsigned __int64)v7 )
  {
    v9 = (_QWORD *)this[23];
    if ( (_BYTE)a4 )
    {
      v9[36] += v8;
    }
    else if ( (_BYTE)a5 )
    {
      v9[38] += v8;
    }
    else
    {
      v9[37] += v8;
    }
  }
  v10 = this[23];
  if ( v10 )
  {
    v11 = *(_WORD **)(v10 + 232);
    if ( v11 )
    {
      if ( v11[7] == 0xFFFF )
      {
        if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
          sub_100DAE60(a2);
        v14 = *(float *)(a2 + 584);
        v15 = *(float *)(a2 + 588);
        v11[4] = (int)*(float *)(a2 + 580);
        v11[5] = (int)v14;
        v11[6] = (int)v15;
        v12 = *(_DWORD *)(a2 + 220);
        if ( v12 <= 100 )
        {
          LODWORD(v8) = v12 < 0 ? 0 : v12;
          v11[7] = v8;
        }
        else
        {
          LODWORD(v8) = 100;
          v11[7] = 100;
        }
      }
    }
  }
  return v8;
}
