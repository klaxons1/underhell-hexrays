void __thiscall sub_10239720(int this, int a2, int a3)
{
  unsigned int v4; // ecx
  int v5; // esi
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  float *v11; // esi
  float *v12; // eax
  double v13; // st5
  double v14; // st3
  double v15; // st6
  double v16; // st3
  int v17; // eax

  v4 = *(_DWORD *)(this + 928);
  v5 = this + 928;
  if ( v4 != -1 )
  {
    v6 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
    v7 = v4 >> 12;
    if ( v6[1] == v7 )
    {
      if ( *v6 )
      {
        v8 = v6[1] == v7 ? *v6 : 0;
        if ( v8 != this )
        {
          if ( *(_BYTE *)(this + 912) )
          {
            if ( (*(_BYTE *)(this + 248) & 1) == 0 )
            {
              v9 = *(_DWORD **)(*(_DWORD *)a2 + 12);
              if ( v9 )
              {
                if ( *(float *)(this + 804) >= 0.0 )
                {
                  v10 = (_DWORD *)sub_1026A890(this + 928);
                  v11 = (float *)sub_10019640(v10);
                  v12 = (float *)sub_10019640(v9);
                  v13 = v12[2] - v11[2];
                  v14 = v12[1] - v11[1];
                  v15 = v14 * v14;
                  v16 = *v12 - *v11;
                  if ( *(float *)(this + 804) * *(float *)(this + 804) < v16 * v16 + v15 + v13 * v13 )
                    return;
                  v5 = this + 928;
                }
                v17 = sub_1026A890(v5);
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 88))(v17, a2, 0);
              }
            }
          }
        }
      }
    }
  }
}
