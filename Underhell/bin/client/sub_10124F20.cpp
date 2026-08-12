void __thiscall sub_10124F20(int this)
{
  float *v2; // eax
  double v3; // st7
  int v4; // ecx
  double v5; // st6
  double v6; // st5
  int v7; // edx
  float *v8; // ebx
  double v9; // st1
  double v10; // st3
  int v11; // eax
  float *v12; // edi
  double v13; // st4
  double v14; // st5
  float v15; // [esp+4h] [ebp-20h]
  float v16; // [esp+8h] [ebp-1Ch]
  float v17; // [esp+18h] [ebp-Ch]
  float v18; // [esp+1Ch] [ebp-8h]
  float v19; // [esp+20h] [ebp-4h]

  if ( *((float *)off_103DC81C + 3) >= (double)*(float *)(this + 2832) )
  {
    v2 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 4))(this + 4);
    v3 = *v2;
    v4 = *(_DWORD *)(this + 2828);
    v17 = *v2;
    v5 = v2[1];
    v18 = v2[1];
    v6 = v2[2];
    v19 = v2[2];
    if ( v4 )
    {
      v7 = *(_DWORD *)(this + 2824);
      v8 = (float *)(this + 24 * (((_BYTE)v7 + (_BYTE)v4 - 1) & 0x3F) + 1288);
      if ( this + 24 * (((_BYTE)v7 + (_BYTE)v4 - 1) & 0x3F) != -1288 )
      {
        v9 = *(float *)(this + 24 * (((_BYTE)v7 + (_BYTE)v4 - 1) & 0x3F) + 1292) - v5;
        v10 = *(float *)(this + 24 * (((_BYTE)v7 + (_BYTE)v4 - 1) & 0x3F) + 1296) - v6;
        if ( (*v8 - v3) * (*v8 - v3) + v9 * v9 + v10 * v10 <= 4.0 )
        {
LABEL_12:
          *(float *)(this + 2832) = *(float *)(this + 2876) * 0.015625 + *((float *)off_103DC81C + 3);
          return;
        }
      }
    }
    else
    {
      v8 = 0;
    }
    if ( v4 >= 64 )
    {
      ++*(_DWORD *)(this + 2824);
      *(_DWORD *)(this + 2828) = v4 - 1;
    }
    v11 = *(_DWORD *)(this + 2828) + *(_DWORD *)(this + 2824);
    *(float *)(this + 24 * (v11 & 0x3F) + 1288) = v3;
    v12 = (float *)(this + 24 * (v11 & 0x3F) + 1288);
    v12[1] = v5;
    v12[2] = v6;
    v12[3] = *(float *)(this + 2876) + *((float *)off_103DC81C + 3);
    v15 = -*(float *)(this + 2888);
    v12[5] = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               LODWORD(v15),
               *(float *)(this + 2888));
    if ( v8 )
    {
      v13 = v8[1] - v18;
      v14 = v8[2] - v19;
      v16 = v14 * v14 + v13 * v13 + (*v8 - v17) * (*v8 - v17);
      v12[4] = off_103EDFE0(v16) * *(float *)(this + 2892) + v8[4];
    }
    else
    {
      v12[4] = 0.0;
    }
    ++*(_DWORD *)(this + 2828);
    goto LABEL_12;
  }
}
